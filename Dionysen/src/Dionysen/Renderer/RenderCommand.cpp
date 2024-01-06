//
// Created by dionysen on 24-1-2.
//

#include "RenderCommand.h"

namespace Dionysen
{
    Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}