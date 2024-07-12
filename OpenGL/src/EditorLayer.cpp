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
        , m_Camera({ 0.0f, 0.0f, 3.0f })
    {
        auto& app = Application::Get();
        app.GetWindow().SetVSync(false);
        glfwSetInputMode((GLFWwindow*)app.GetWindow().GetNativeWindow(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);



        m_CubeVA  = VertexArray::Create();
        m_LightVA = m_CubeVA;

        float vertices[6 * 36] = {
            -0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f, 0.5f,  -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f, 0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f,
            0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f, -0.5f, 0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f, -0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f,

            -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,  0.5f,  -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,  0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
            0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  -0.5f, 0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,

            -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,  -0.5f, 0.5f,  -0.5f, -1.0f, 0.0f,  0.0f,  -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,
            -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,  -0.5f, -0.5f, 0.5f,  -1.0f, 0.0f,  0.0f,  -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,

            0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.5f,  0.5f,  -0.5f, 1.0f,  0.0f,  0.0f,  0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,
            0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,  0.5f,  -0.5f, 0.5f,  1.0f,  0.0f,  0.0f,  0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,

            -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,  0.5f,  -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,  0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,
            0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,  -0.5f, -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,  -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,

            -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,  0.5f,  0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,  0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
            0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  -0.5f, 0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f
        };

        Ref<VertexBuffer> vertexBuffer = VertexBuffer::Create(vertices, sizeof(vertices));
        BufferLayout      layout       = {
            { ShaderDataType::Float3, "a_Position" },
            { ShaderDataType::Float3, "a_Normal" },
        };
        vertexBuffer->SetLayout(layout);

        m_CubeVA->AddVertexBuffer(vertexBuffer);

        uint32_t indices[36]{ 0 };
        for (auto i = 0; i < 36; ++i)
        {
            indices[i] = i;
        }

        Ref<IndexBuffer> indexBuffer = IndexBuffer::Create(indices, sizeof(indices) / sizeof(uint32_t));

        m_CubeVA->SetIndexBuffer(indexBuffer);


        m_LightVA->AddVertexBuffer(vertexBuffer);
        m_LightVA->SetIndexBuffer(indexBuffer);
    }  // namespace Dionysen

    EditorLayer::~EditorLayer()
    {
    }

    void EditorLayer::OnAttach()
    {
        m_WallTexture = Texture2D::Create("OpenGL/assets/textures/brickwall.jpg");
        m_FaceTexture = Texture2D::Create("OpenGL/assets/textures/awesomeface.png");

        m_CubeShader  = Shader::Create("OpenGL/assets/shaders/cube_material.glsl");
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
        // Cube
        {
            m_CubeShader->Bind();
            m_CubeShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());
            m_CubeShader->SetMat4("u_Transform", glm::mat4(1.0f));

            m_CubeShader->SetFloat3("u_ObjectColor", { 1.0f, 0.5f, 0.31f });
            m_CubeShader->SetFloat3("u_LightColor", { 1.0f, 1.0f, 1.0f });
            m_CubeShader->SetFloat3("u_LightPos", { 1.2f, 1.0f, 2.0f });
            m_CubeShader->SetFloat3("u_ViewPos", m_Camera.GetPosition());

            m_CubeVA->Bind();
            RenderCommand::DrawIndexed(m_CubeVA);
        }
        // Light
        {
            m_LightShader->Bind();
            m_LightShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());
            glm::mat4 model = glm::mat4(1.0f);
            model           = glm::translate(model, m_LightPos);
            model           = glm::scale(model, glm::vec3(0.2f));
            m_LightShader->SetMat4("u_Transform", model);

            m_LightVA->Bind();
            RenderCommand::DrawIndexed(m_LightVA);
        }
    }
    void EditorLayer::OnImGuiRender()
    {
    }
    void EditorLayer::OnEvent(Event& e)
    {
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen