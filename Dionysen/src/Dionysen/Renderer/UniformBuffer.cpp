#include "dspch.h"
#include "UniformBuffer.h"
#include "Renderer.h"
#include "OpenGLUniformBuffer.h"

namespace Dionysen
{

    Ref<UniformBuffer> UniformBuffer::Create(uint32_t size, uint32_t binding)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLUniformBuffer>(size, binding);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}  // namespace Dionysen
