#include "ExporterLayer.h"
#include "RenderCommand.h"
#include "imgui.h"
#include <gtest/gtest.h>


namespace Dionysen
{
    ExporterLayer::ExporterLayer()
        : Layer("ODAExporterLayer")
    {
    }
    ExporterLayer::~ExporterLayer()
    {
    }

    void ExporterLayer::OnAttach()
    {
    }

    void ExporterLayer::OnDetach()
    {
    }

    void ExporterLayer::OnUpdate(Timestep ts)
    {
        RenderCommand::Clear();
        RenderCommand::SetClearColor({ 0.2f, 0.3f, 0.3f, 1 });
    }

    void ExporterLayer::OnImGuiRender()
    {
        ImGui::Begin("Settings");
        ImGui::Text("Hello World");

        if (ImGui::Button("Run Tests"))
        {
            ::testing::InitGoogleTest();
            RUN_ALL_TESTS();
        }

        ImGui::End();
    }

    void ExporterLayer::OnEvent(Event& e)
    {
    }

}  // namespace Dionysen