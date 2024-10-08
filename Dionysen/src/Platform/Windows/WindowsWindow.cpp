#ifndef GLFW_WINDOW
#include "Window.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include "GL/glew.h"
#include "KeyEvent.h"
#include "Log.h"
#include "MouseEvent.h"
#include "OpenGLContext.h"
#include "WindowsWindow.h"
#include <windows.h>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
namespace Dionysen
{
    LRESULT CALLBACK WindowsWindow::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam))
            return true;

        WindowData* data = nullptr;
        if (uMsg == WM_NCCREATE)
        {
            CREATESTRUCT* pCreate = (CREATESTRUCT*)lParam;
            WindowData*   data    = (WindowData*)pCreate->lpCreateParams;
            SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)data);
        }
        else
        {
            data = (WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
        }

        if (!data || !data->EventCallback)
        {
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }

        switch (uMsg)
        {
        case WM_CLOSE: {
            WindowData&      data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            WindowCloseEvent event;
            data.EventCallback(event);
            break;
        }
        case WM_SIZE: {
            WindowData& data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            data.Width       = LOWORD(lParam);
            data.Height      = HIWORD(lParam);
            WindowResizeEvent event(data.Width, data.Height);
            data.EventCallback(event);
            break;
        }
        case WM_KEYDOWN: {
            WindowData&     data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            KeyPressedEvent event(wParam, 0);
            data.EventCallback(event);
            break;
        }
        case WM_KEYUP: {
            WindowData&      data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            KeyReleasedEvent event(wParam);
            data.EventCallback(event);
            break;
        }
        case WM_CHAR: {
            WindowData&   data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            KeyTypedEvent event(wParam);
            data.EventCallback(event);
            break;
        }
        case WM_LBUTTONDOWN: {
            WindowData&             data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseButtonPressedEvent event(MK_LBUTTON);
            data.EventCallback(event);
            break;
        }
        case WM_RBUTTONDOWN: {
            WindowData&             data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseButtonPressedEvent event(MK_RBUTTON);
            data.EventCallback(event);
            break;
        }
        case WM_LBUTTONUP: {
            WindowData&              data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseButtonReleasedEvent event(MK_LBUTTON);
            data.EventCallback(event);
            break;
        }
        case WM_RBUTTONUP: {
            WindowData&              data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseButtonReleasedEvent event(MK_RBUTTON);
            data.EventCallback(event);
            break;
        }
        case WM_MOUSEMOVE: {
            WindowData&     data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseMovedEvent event(LOWORD(lParam), HIWORD(lParam));
            data.EventCallback(event);
            break;
        }
        case WM_MOUSEWHEEL: {
            WindowData&        data = *(WindowData*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
            MouseScrolledEvent event(GET_WHEEL_DELTA_WPARAM(wParam) / 120.0f, 0.0f);
            data.EventCallback(event);
            break;
        }
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }
        return 0;
    }

#ifdef DION_PLATFORM_WINDOWS
#ifndef GLFW_WINDOW
    Scope<Window> Window::Create(const WindowProps& props)
    {
        return CreateScope<WindowsWindow>(props);
    }
#endif
#endif

    WindowsWindow::WindowsWindow(const WindowProps& props)
    {
        Init(props);
    }

    WindowsWindow::~WindowsWindow()
    {
        Shutdown();
    }

    void WindowsWindow::Init(const WindowProps& props)
    {
        m_Data.Title  = props.Title;
        m_Data.Width  = props.Width;
        m_Data.Height = props.Height;

        DION_CORE_INFO("Creating window {0} ({1}, {2})", props.Title, props.Width, props.Height);

        WNDCLASSEX wc    = { 0 };
        wc.cbSize        = sizeof(WNDCLASSEX);
        wc.lpfnWndProc   = WindowProc;
        wc.hInstance     = GetModuleHandle(NULL);
        wc.lpszClassName = "DionysenWindowClass";
        RegisterClassEx(&wc);

        m_Window = CreateWindowEx(0, "DionysenWindowClass", m_Data.Title.c_str(), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, m_Data.Width,
                                  m_Data.Height, NULL, NULL, wc.hInstance, &m_Data);

        m_Context = new OpenGLContext(m_Window, m_Hdc, m_Hglrc);
        m_Context->Init();

        ShowWindow(m_Window, SW_SHOW);
        UpdateWindow(m_Window);

        SetVSync(true);

        // opengl setting
        glEnable(GL_DEPTH_TEST);
        // For stencil test
        // glDepthFunc(GL_LESS);
        // glEnable(GL_STENCIL_TEST);
        // glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
        // glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);

#ifdef DION_DEBUG
        glDebugMessageCallback(GLDebugCallback, nullptr);
        glEnable(GL_DEBUG_OUTPUT);
#endif
    }

    void WindowsWindow::Shutdown()
    {
        DestroyWindow(m_Window);
    }

    void WindowsWindow::OnUpdate()
    {
        MSG msg;
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                return;
            }
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        // 获取窗口大小
        RECT clientRect;
        GetClientRect(m_Window, &clientRect);
        int clientWidth  = clientRect.right - clientRect.left;
        int clientHeight = clientRect.bottom - clientRect.top;

        // 设置视口
        glViewport(0, 0, clientWidth, clientHeight);

        // 交换缓冲区
        m_Context->DionSwapBuffers();
    }

    void WindowsWindow::SetVSync(bool enabled)
    {
        m_Data.VSync = enabled;
    }

    bool WindowsWindow::IsVSync() const
    {
        return m_Data.VSync;
    }

    void WindowsWindow::ResizeWindow(uint32_t width, uint32_t height)
    {
        m_Data.Width  = width;
        m_Data.Height = height;
        SetWindowPos(m_Window, NULL, 0, 0, width, height, SWP_NOMOVE | SWP_NOZORDER);
    }
}  // namespace Dionysen

#endif