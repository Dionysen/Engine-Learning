#include "EditorLayer.h"
#include "Application.h"
#include "RenderCommand.h"
#include "Texture.h"
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
        m_WallTexture = Texture2D::Create("OpenGL/assets/textures/container2_specular.png");
        m_FaceTexture = Texture2D::Create("OpenGL/assets/textures/container2.png");

        m_CubeShader  = Shader::Create("OpenGL/assets/shaders/multilight.vert", "OpenGL/assets/shaders/multilight.frag");
        m_LightShader = Shader::Create("OpenGL/assets/shaders/light.glsl");

        Application::Get().GetWindow().ResizeWindow(800, 600);
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
        m_Camera.OnUpdate(ts);

        RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1.0f });
        RenderCommand::Clear();
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