
#include "dspch.h"
#include "Renderer.h"
#include "Framebuffer.h"
#include "OpenGLFramebuffer.h"

namespace Dionysen
{
    Ref<Framebuffer> Framebuffer::Create(const FramebufferSpecification& spec)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLFramebuffer>(spec);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }
}  // namespace Dionysen