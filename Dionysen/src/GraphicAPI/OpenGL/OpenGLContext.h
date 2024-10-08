#pragma once
#ifdef GLFW_WINDOW
#include "GLFW/glfw3.h"
#endif
#include "GraphicsContext.h"

namespace Dionysen
{
    class OpenGLContext : public GraphicsContext
    {
      public:
#ifdef GLFW_WINDOW
        explicit OpenGLContext(GLFWwindow* WindowHandle);

      private:
        GLFWwindow* m_WindowHandle;
#else
#ifdef DION_PLATFORM_WINDOWS
        explicit OpenGLContext(HWND hwnd, HDC hdc, HGLRC hglrc);

      private:
        HGLRC m_Hglrc;
        HDC   m_Hdc;
        HWND  m_Hwnd;
#endif
#endif
        void Init() override;
        void DionSwapBuffers() override;
    };
}  // namespace Dionysen
