#include "dspch.h"
#include "GraphicsContext.h"

#include "Renderer.h"
#include "OpenGLContext.h"

namespace Dionysen
{
    Scope<GraphicsContext> GraphicsContext::Create(void* window)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}  // namespace Dionysen