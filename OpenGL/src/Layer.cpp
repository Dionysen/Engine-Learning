#include "Layer.h"

namespace Dionysen
{
    OpenGLLayer::OpenGLLayer()
        : Layer("OpenGLLayer")
    {
    }

    OpenGLLayer::~OpenGLLayer()
    {
    }

    void OpenGLLayer::OnAttach()
    {
    }

    void OpenGLLayer::OnDetach()
    {
    }

    void OpenGLLayer::OnUpdate(Timestep ts)
    {

        RenderCommand::Clear();
        RenderCommand::SetClearColor({ 0.3f, 0.4f, 0.5f, 1 });
    }

    void OpenGLLayer::OnImGuiRender()
    {
    }

    void OpenGLLayer::OnEvent(Event& event)
    {
    }
}  // namespace Dionysen
