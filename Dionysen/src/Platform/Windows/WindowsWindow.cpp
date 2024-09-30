#include "Window.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include "GL/glew.h"
#include "KeyEvent.h"
#include "Log.h"
#include "MouseEvent.h"
#include "OpenGLContext.h"
#include "WindowsWindow.h"
#include <string>
#include <windows.h>

namespace Dionysen
{
    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
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

    Scope<Window> Window::Create(const WindowProps& props)
    {
#ifdef DION_PLATFORM_WINDOWS
        return CreateScope<WindowsWindow>(props);
#else
        // DION_CORE_ASSERT(false, "Unknown platform!");
        return CreateScope<WindowsWindow>(props);
#endif
    }

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
        wc.lpszClassName = L"DionysenWindowClass";
        RegisterClassEx(&wc);

        m_Window = CreateWindowEx(0, L"DionysenWindowClass", m_Data.Title.c_str(), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, m_Data.Width,
                                  m_Data.Height, NULL, NULL, wc.hInstance, NULL);
        ShowWindow(m_Window, SW_SHOW);

        m_Context = new OpenGLContext(m_Window);
        m_Context->Init();

        SetWindowLongPtr(m_Window, GWLP_USERDATA, (LONG_PTR)&m_Data);
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
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        m_Context->SwapBuffers();
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
