#include "EditorLayer.h"
#include "Application.h"
#include "Framebuffer.h"
#include "RenderCommand.h"
#include "Renderer2D.h"
#include "Texture.h"
#include "glm/fwd.hpp"
#include "glm/gtc/type_ptr.hpp"
#include "imgui.h"

namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("Editor")
        , m_CameraController(1280.0f / 720.0f)
        , m_Camera()

    {
        Application::Get().GetWindow().SetVSync(false);
    }

    EditorLayer::~EditorLayer()
    {
    }

    void EditorLayer::OnAttach()
    {
        m_CheckboardTexture = Texture2D::Create("Editor/assets/textures/ChernoLogo.png");
        m_FlatColorShader   = Shader::Create("OpenGL/assets/shaders/FlatColor.glsl");
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
        m_CameraController.OnUpdate(ts);

        RenderCommand::SetClearColor({ 0.3f, 0.4f, 0.5f, 1 });
        RenderCommand::Clear();

        Renderer2D::BeginScene(m_Camera);
        Renderer2D::DrawQuad({ 0.0, 0.0, 0.0 }, { 3.0f, 5.0f }, { 0.3f, 0.1f, 0.8f, 1.0f });
        Renderer2D::DrawQuad({ 0.0, 0.0, 0.0 }, { 3.0f, 5.0f }, m_CheckboardTexture);

        m_FlatColorShader->Bind();
        m_FlatColorShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());
        m_FlatColorShader->SetFloat3("u_Color", m_SquareColor);

        Renderer2D::EndScene();
    }
    void EditorLayer::OnImGuiRender()
    {
    }
    void EditorLayer::OnEvent(Event& e)
    {
        // m_CameraController.OnEvent(e);
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen