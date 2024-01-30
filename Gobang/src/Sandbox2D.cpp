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
        static float rotation = 0.0f;
        rotation += ts * 50.0f;

        Dionysen::Renderer2D::BeginScene(m_CameraController.GetCamera());
        Dionysen::Renderer2D::DrawRotatedQuad({ 1.0f, 0.0f }, { 0.8f, 0.8f }, -45.0f, { 0.8f, 0.2f, 0.3f, 1.0f });
        Dionysen::Renderer2D::DrawQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, { 0.8f, 0.2f, 0.3f, 1.0f });
        Dionysen::Renderer2D::DrawQuad({ 0.5f, -0.5f }, { 0.5f, 0.75f }, m_SquareColor);
        Dionysen::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 20.0f, 20.0f }, m_CheckerboardTexture, 10.0f);
        Dionysen::Renderer2D::DrawRotatedQuad({ -2.0f, 0.0f, 0.0f }, { 1.0f, 1.0f }, rotation, m_CheckerboardTexture, 20.0f);
        Dionysen::Renderer2D::EndScene();

        Dionysen::Renderer2D::BeginScene(m_CameraController.GetCamera());
        for (float y = -5.0f; y < 5.0f; y += 0.5f)
        {
            for (float x = -5.0f; x < 5.0f; x += 0.5f)
            {
                glm::vec4 color = { (x + 5.0f) / 10.0f, 0.4f, (y + 5.0f) / 10.0f, 0.7f };
                Dionysen::Renderer2D::DrawQuad({ x, y }, { 0.45f, 0.45f }, color);
            }
        }
        Dionysen::Renderer2D::EndScene();
    }
}

void Sandbox2D::OnImGuiRender()
{
    ImGui::Begin("Settings");
    // ...
    ImGui::Text("Hello");
    ImGui::ShowDemoWindow();

    // Frame rate
    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

    ImGui::Checkbox("VSync", &isVSync);
    Dionysen::Application::Get().GetWindow().SetVSync(isVSync);
    if (ImGui::Button("Close Window"))
    {
        Dionysen::Application& app = Dionysen::Application::Get();
        app.CloseWindow();
    }
    auto stats = Dionysen::Renderer2D::GetStats();
    ImGui::Text("Renderer2D Stats:");
    ImGui::Text("Draw Calls: %d", stats.DrawCalls);
    ImGui::Text("Quads: %d", stats.QuadCount);
    ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
    ImGui::Text("Indices: %d", stats.GetTotalIndexCount());

    ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));
    ImGui::End();
}

void Sandbox2D::OnEvent(Dionysen::Event& e)
{
    m_CameraController.OnEvent(e);
}
