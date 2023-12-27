#pragma once
#include "GLFW/glfw3.h"
#include "GraphicsContext.h"

namespace Dionysen
{
    class OpenGLContext : public GraphicsContext
    {
      public:
        explicit OpenGLContext(GLFWwindow* WindowHandle);

        void Init() override;
        void SwapBuffers() override;

      private:
        GLFWwindow* m_WindowHandle;
    };
}  // namespace Dionysen
