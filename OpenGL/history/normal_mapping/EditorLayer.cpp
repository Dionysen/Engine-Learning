#include "EditorLayer.h"
#include "Application.h"
#include "RenderCommand.h"
#include "Shader.h"
#include "glm/fwd.hpp"
#include "imgui.h"

#include <glm/gtc/type_ptr.hpp>

namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("Editor")
        , m_Camera({ 0.0f, 0.0f, 1.0f })
    {
        auto& app = Application::Get();
        app.GetWindow().SetVSync(true);
        glfwSetInputMode(static_cast<GLFWwindow*>(app.GetWindow().GetNativeWindow()), GLFW_CURSOR, GLFW_CURSOR_DISABLED);


    }  // namespace Dionysen

    EditorLayer::~EditorLayer() = default;

    void EditorLayer::OnAttach()
    {
        m_CubeShader = Shader::Create("OpenGL/assets/shaders/unnormmapping.glsl");
        // m_CubeShader = Shader::Create("OpenGL/assets/shaders/nanosuit.glsl");
        m_Model = Model::Create("OpenGL/assets/models/cyborg/cyborg.obj");
        // m_Model = Model::Create("OpenGL/assets/models/nanosuit/nanosuit.obj");
        Application::Get().GetWindow().ResizeWindow(1280, 720);
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

        m_CubeShader->SetFloat3("u_ViewPos", m_Camera.GetPosition());

        m_CubeShader->SetInt("u_NormalMapping", m_NormalMapping);
        m_CubeShader->SetFloat3("u_LightPos", m_LightPos);
        m_CubeShader->SetFloat3("u_Light.ambient", { 0.2f, 0.2f, 0.2f });
        m_CubeShader->SetFloat3("u_Light.diffuse", { 0.5f, 0.5f, 0.5f });
        m_CubeShader->SetFloat3("u_Light.specular", { 1.0f, 1.0f, 1.0f });

        glm::mat4 model = glm::mat4(1.0f);
        model           = glm::scale(model, glm::vec3(0.1f));
        model           = glm::translate(model, glm::vec3(0.0f, -1.75f, 0.0f));
        m_CubeShader->SetMat4("u_Transform", model);

        if (isLine)
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        else
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

        m_Model->Draw(m_CubeShader);
    }
    void EditorLayer::OnImGuiRender()
    {
        ImGui::Begin("FPS");
        ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

        ImGui::Checkbox("Line Mode", &isLine);
        ImGui::DragFloat3("Light pos", glm::value_ptr(m_LightPos));
        ImGui::Checkbox("Normal Mapping", &m_NormalMapping);

        ImGui::End();
    }
    void EditorLayer::OnEvent(Event& e)
    {
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen