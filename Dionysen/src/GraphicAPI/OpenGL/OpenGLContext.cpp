#include <GL/glew.h>
#include "OpenGLContext.h"
#include "Log.h"
#include <wingdi.h>
#include <Windows.h>

namespace Dionysen
{
#ifdef GLFW_WINDOW
    OpenGLContext::OpenGLContext(GLFWwindow* WindowHandle)
        : m_WindowHandle(WindowHandle)
    {
        DION_CORE_ASSERT(WindowHandle, "WindowHandle is null!")
    }
    void OpenGLContext::Init()
    {
        glfwMakeContextCurrent(m_WindowHandle);
        glewExperimental = GL_TRUE;
        unsigned int err = glewInit();
        DION_CORE_ASSERT(GLEW_OK == err, "Error initing Glew: ", err)

        DION_CORE_INFO("OpenGL Info:");
        DION_CORE_INFO("    Vender: {0}", (char*)glGetString(GL_VENDOR));
        DION_CORE_INFO("    Renderer: {0}", (char*)glGetString(GL_RENDERER));
        DION_CORE_INFO("    Version: {0}", (char*)glGetString(GL_VERSION));
        const std::string glVersion = (char*)glGetString(GL_VERSION);

        glGetError();
    }

    void OpenGLContext::DionSwapBuffers()
    {
        glfwSwapBuffers(m_WindowHandle);
    }
#else
#ifdef DION_PLATFORM_WINDOWS
    OpenGLContext::OpenGLContext(HWND hwnd, HDC hdc, HGLRC hglrc)
        : m_Hwnd(hwnd)
        , m_Hdc(hdc)
        , m_Hglrc(hglrc)
    {
        DION_CORE_ASSERT(hwnd, "hwnd is null!")
    }
    void OpenGLContext::Init()
    {
        // 获取设备上下文
        m_Hdc = GetDC(m_Hwnd);

        // 设置像素格式
        PIXELFORMATDESCRIPTOR pfd;

        memset(&pfd, 0, sizeof(PIXELFORMATDESCRIPTOR));
        pfd.nSize      = sizeof(PIXELFORMATDESCRIPTOR);
        pfd.nVersion   = 1;
        pfd.dwFlags    = PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER;
        pfd.iPixelType = PFD_TYPE_RGBA;

        // 选择像素格式
        int pixelFormat = ChoosePixelFormat(m_Hdc, &pfd);
        SetPixelFormat(m_Hdc, pixelFormat, &pfd);

        // 创建渲染上下文
        m_Hglrc = wglCreateContext(m_Hdc);
        wglMakeCurrent(m_Hdc, m_Hglrc);

        glewExperimental = GL_TRUE;
        unsigned int err = glewInit();
        DION_CORE_ASSERT(GLEW_OK == err, "Error initing Glew: ", err)

        DION_CORE_INFO("OpenGL Info:");
        DION_CORE_INFO("    Vender: {0}", (char*)glGetString(GL_VENDOR));
        DION_CORE_INFO("    Renderer: {0}", (char*)glGetString(GL_RENDERER));
        DION_CORE_INFO("    Version: {0}", (char*)glGetString(GL_VERSION));
        const std::string glVersion = (char*)glGetString(GL_VERSION);

        glGetError();
    }

    void OpenGLContext::DionSwapBuffers()
    {
        SwapBuffers(m_Hdc);
    }
#endif
#endif
}  // namespace Dionysen
