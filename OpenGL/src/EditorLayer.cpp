#include "EditorLayer.h"
#include "Application.h"
#include "RenderCommand.h"
#include "Shader.h"
#include "glm/fwd.hpp"
#include "imgui.h"

namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("Editor")
        , m_Camera({ 0.0f, 0.0f, 3.0f })
    {
        auto& app = Application::Get();
        app.GetWindow().SetVSync(true);
        glfwSetInputMode(static_cast<GLFWwindow*>(app.GetWindow().GetNativeWindow()), GLFW_CURSOR, GLFW_CURSOR_DISABLED);


    }  // namespace Dionysen

    EditorLayer::~EditorLayer() = default;

    void EditorLayer::OnAttach()
    {
        m_CubeShader = Shader::Create("OpenGL/assets/shaders/nanosuit.glsl");
        m_Model      = Model::Create("OpenGL/assets/models/nanosuit/nanosuit.obj");
        Application::Get().GetWindow().ResizeWindow(800, 600);
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
        m_Camera.OnUpdate(ts);

        RenderCommand::SetClearColor({ 0.2f, 0.2f, 0.2f, 1.0f });
        RenderCommand::Clear();

        m_CubeShader->Bind();
        m_CubeShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());
        m_CubeShader->SetMat4("u_Transform", glm::mat4(1.0f));

        m_Model->Draw(m_CubeShader);
    }
    void EditorLayer::OnImGuiRender()
    {
        ImGui::Begin("FPS");
        ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();
    }
    void EditorLayer::OnEvent(Event& e)
    {
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen