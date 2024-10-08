#include "dspch.h"
#include "GraphicsContext.h"

#include "Renderer.h"
#include "OpenGLContext.h"

namespace Dionysen
{
    Scope<GraphicsContext> GraphicsContext::Create(void* window, void* hdc, void* hglrc)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
#ifdef GLFW_WINDOW
            return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
#else
#ifdef DION_PLATFORM_WINDOWS
            return CreateScope<OpenGLContext>(static_cast<HWND>(window), static_cast<HDC>(window), static_cast<HGLRC>(window));
#endif
#endif
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}  // namespace Dionysen