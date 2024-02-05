#include "Sandbox2D.h"
#include <imgui.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

Sandbox2D::Sandbox2D()
    : Layer("Sandbox2D")
    , m_CameraController(1280.0f / 720.0f)
    , m_SquareColor({ 0.2f, 0.3f, 0.8f, 1.0f })
    , isVSync(true)
{
}

void Sandbox2D::OnAttach()
{
    m_CheckerboardTexture = Dionysen::Texture2D::Create("./Gobang/textures/Checkerboard.png");
}

void Sandbox2D::OnDetach()
{
}

void Sandbox2D::OnUpdate(Dionysen::Timestep ts)
{

    // Update
    m_CameraController.OnUpdate(ts);

    // Render
    Dionysen::Renderer2D::ResetStats();
    {

        Dionysen::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
        Dionysen::RenderCommand::Clear();
    }

    {
        Dionysen::Renderer2D::BeginScene(m_CameraController.GetCamera());

        for (float x = -5.0f; x < 2.5f; x += 0.5f)
        {
            Dionysen::Renderer2D::DrawLine({ x, -5.0f, 0.0f }, { x, 5.0f, 0.0f }, m_SquareColor);
        }
        Dionysen::Renderer2D::DrawLine({ 0.0f, -5.0f, 0.0f }, { 0.0f, 5.0f, 0.0f }, m_SquareColor);
        Dionysen::Renderer2D::DrawLine({ 5.0f, 0.0f, 0.0f }, { -5.0f, 0.0f, 0.0f }, m_SquareColor);

        Dionysen::Renderer2D::EndScene();
    }
}

void Sandbox2D::OnImGuiRender()
{
    Dionysen::Application& app = Dionysen::Application::Get();

    // Start SideBar
    ImGui::Begin("Gobang", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize);

    // set window
    ImGui::SetWindowSize({ float(app.GetWindow().GetWidth()) / 3.5f, float(app.GetWindow().GetHeight()) });
    ImGui::SetWindowPos({ float(app.GetWindow().GetWidth()) * 2.5f / 3.5f, 0.0f });

    if (ImGui::CollapsingHeader("Developer Monitor"))
    {
        if (ImGui::TreeNode("Frame Rate"))
        {
            // Frame rate
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::TreePop();
            ImGui::Spacing();
        }
        if (ImGui::TreeNode("Renderer Settings"))
        {
            // VSync
            ImGui::Checkbox("VSync", &isVSync);
            Dionysen::Application::Get().GetWindow().SetVSync(isVSync);
            ImGui::TreePop();
            ImGui::Spacing();
        }
        if (ImGui::TreeNode("Renderer Status"))
        {
            // Render Status
            auto stats = Dionysen::Renderer2D::GetStats();
            {
                ImGui::Text("Renderer2D Stats:");
                ImGui::Text("Draw Calls: %d", stats.DrawCalls);
                ImGui::Text("Quads: %d", stats.QuadCount);
                ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
                ImGui::Text("Indices: %d", stats.GetTotalIndexCount());
                ImGui::Separator();
                ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));
                ImGui::Separator();
            }
            ImGui::TreePop();
            ImGui::Spacing();
        }
    }

    if (ImGui::Button("Close Window"))
        app.CloseWindow();

    ImGui::End();
}


void Sandbox2D::OnEvent(Dionysen::Event& e)
{
    m_CameraController.OnEvent(e);
}
