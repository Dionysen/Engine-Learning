//
// Created by dionysen on 23-12-31.
//

#include "VertexArray.h"
#include "RendererAPI.h"
#include "OpenGLVertexArray.h"
#include "Renderer.h"

namespace Dionysen
{

    Ref<VertexArray> VertexArray::Create()
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLVertexArray>();
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }
}  // namespace Dionysen