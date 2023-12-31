//
// Created by dionysen on 24-1-2.
//

#include "Texture.h"
#include "dspch.h"
#include "Base.h"
#include "Renderer.h"
#include "OpenGLTexture.h"

namespace Dionysen
{

    Ref<Texture2D> Texture2D::Create(const TextureSpecification& specification)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLTexture2D>(specification);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

    Ref<Texture2D> Texture2D::Create(const std::string& path)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLTexture2D>(path);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}  // namespace Dionysen
