
#include "Model.h"
#include "Renderer.h"
#include "RendererAPI.h"
#include "OpenGLModel.h"


namespace Dionysen
{
    Ref<Model> Model::Create(std::string filePath)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLModel>(filePath);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }
}  // namespace Dionysen