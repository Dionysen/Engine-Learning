#include "ExporterLayer.h"
#include "RenderCommand.h"
#include "imgui.h"
namespace Dionysen
{
    ODAExporterLayer::ODAExporterLayer()
        : Layer("ODAExporterLayer")
    {
    }
    ODAExporterLayer::~ODAExporterLayer()
    {
    }

    void ODAExporterLayer::OnAttach()
    {
    }

    void ODAExporterLayer::OnDetach()
    {
    }

    void ODAExporterLayer::OnUpdate(Timestep ts)
    {
        RenderCommand::Clear();
        RenderCommand::SetClearColor({ 0.2f, 0.3f, 0.3f, 1 });
    }

    void ODAExporterLayer::OnImGuiRender()
    {
        ImGui::Begin("Settings");
        ImGui::Text("Hello World");
        ImGui::End();
    }

    void ODAExporterLayer::OnEvent(Event& e)
    {
    }

}  // namespace Dionysen