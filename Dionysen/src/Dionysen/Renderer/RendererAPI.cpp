//
// Created by dionysen on 24-1-2.
//

#include "RendererAPI.h"
#include "dspch.h"
#include "OpenGLRendererAPI.h"

namespace Dionysen
{
    RendererAPI::API RendererAPI::s_API = RendererAPI::API::OpenGL;

    Scope<RendererAPI> RendererAPI::Create()
    {
        switch (s_API)
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateScope<OpenGLRendererAPI>();
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}  // namespace Dionysen