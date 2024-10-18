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

        m_CubeVA  = VertexArray::Create();
        m_LightVA = m_CubeVA;

        float vertices[8 * 36] = { // positions          // normals           // texture coords
                                   -0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f, 0.0f, 0.0f, 0.5f,  -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f, 1.0f, 0.0f,
                                   0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f, 1.0f, 1.0f, 0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f, 1.0f, 1.0f,
                                   -0.5f, 0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f, 0.0f, 1.0f, -0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f, 0.0f, 0.0f,

                                   -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,  0.0f, 0.0f, 0.5f,  -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,  1.0f, 0.0f,
                                   0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f, 1.0f, 0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f, 1.0f,
                                   -0.5f, 0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f, 1.0f, -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,  0.0f, 0.0f,

                                   -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,  1.0f, 0.0f, -0.5f, 0.5f,  -0.5f, -1.0f, 0.0f,  0.0f,  1.0f, 1.0f,
                                   -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,  0.0f, 1.0f, -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,  0.0f, 1.0f,
                                   -0.5f, -0.5f, 0.5f,  -1.0f, 0.0f,  0.0f,  0.0f, 0.0f, -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,  1.0f, 0.0f,

                                   0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f, 0.5f,  0.5f,  -0.5f, 1.0f,  0.0f,  0.0f,  1.0f, 1.0f,
                                   0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,  0.0f, 1.0f, 0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
                                   0.5f,  -0.5f, 0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 0.0f, 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f,

                                   -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,  0.0f, 1.0f, 0.5f,  -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,  1.0f, 1.0f,
                                   0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,  1.0f, 0.0f, 0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,  1.0f, 0.0f,
                                   -0.5f, -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,  0.0f, 0.0f, -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,  0.0f, 1.0f,

                                   -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,  0.0f, 1.0f, 0.5f,  0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,  1.0f, 1.0f,
                                   0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f, 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f,
                                   -0.5f, 0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 0.0f, -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,  0.0f, 1.0f
        };

        Ref<VertexBuffer> vertexBuffer = VertexBuffer::Create(vertices, sizeof(vertices));
        BufferLayout      layout       = {
            { ShaderDataType::Float3, "a_Position" },
            { ShaderDataType::Float3, "a_Normal" },
            { ShaderDataType::Float2, "a_TexCoords" },
        };
        vertexBuffer->SetLayout(layout);

        m_CubeVA->AddVertexBuffer(vertexBuffer);

        uint32_t indices[36]{ 0 };
        for (auto i = 0; i < 36; ++i)
        {
            indices[i] = i;
        }

        const Ref<IndexBuffer> indexBuffer = IndexBuffer::Create(indices, sizeof(indices) / sizeof(uint32_t));

        m_CubeVA->SetIndexBuffer(indexBuffer);


        m_LightVA->AddVertexBuffer(vertexBuffer);
        m_LightVA->SetIndexBuffer(indexBuffer);
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
        // Cube
        {
            m_FaceTexture->Bind(0);
            m_WallTexture->Bind(1);

            m_CubeShader->Bind();

            m_CubeShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());
            // m_CubeShader->SetMat4("u_Transform", glm::mat4(1.0f));

            m_CubeShader->SetFloat3("u_ViewPos", m_Camera.GetPosition());

            m_CubeShader->SetFloat3("u_Light.position", { 1.2f, 1.0f, 2.0f });
            m_CubeShader->SetFloat3("u_Light.ambient", { 0.2f, 0.2f, 0.2f });
            m_CubeShader->SetFloat3("u_Light.diffuse", { 0.5f, 0.5f, 0.5f });
            m_CubeShader->SetFloat3("u_Light.specular", { 1.0f, 1.0f, 1.0f });


            m_CubeShader->SetFloat("u_Light.constant", 1.0f);
            m_CubeShader->SetFloat("u_Light.linear", 0.09f);
            m_CubeShader->SetFloat("u_Light.quadratic", 0.032f);

            // material properties
            m_CubeShader->SetInt("u_Material.ambient", 0);
            m_CubeShader->SetInt("u_Material.specular", 1);
            m_CubeShader->SetFloat("u_Material.shininess", 64.0f);

            m_CubeVA->Bind();

            glm::vec3 cubePositions[10] = { glm::vec3(0.0f, 0.0f, 0.0f),     glm::vec3(2.0f, 5.0f, -15.0f), glm::vec3(-1.5f, -2.2f, -2.5f),
                                            glm::vec3(-3.8f, -2.0f, -12.3f), glm::vec3(2.4f, -0.4f, -3.5f), glm::vec3(-1.7f, 3.0f, -7.5f),
                                            glm::vec3(1.3f, -2.0f, -2.5f),   glm::vec3(1.5f, 2.0f, -2.5f),  glm::vec3(1.5f, 0.2f, -1.5f),
                                            glm::vec3(-1.3f, 1.0f, -1.5f) };


            for (unsigned int i = 0; i < 10; i++)
            {
                glm::mat4 model(1.0f);
                model       = glm::translate(model, cubePositions[i]);
                float angle = 20.0f * i;
                model       = glm::rotate(model, glm::radians(angle), glm::vec3(1.0f, 0.3f, 0.5f));
                m_CubeShader->SetMat4("u_Transform", model);

                RenderCommand::DrawIndexed(m_CubeVA);
            }
        }

        glm::vec3 pointLightPositions[] = { glm::vec3(0.7f, 0.2f, 2.0f), glm::vec3(2.3f, -3.3f, -4.0f), glm::vec3(-4.0f, 2.0f, -12.0f),
                                            glm::vec3(0.0f, 0.0f, -3.0f) };



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
        ImGui::Begin("FPS");
        ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();
    }
    void EditorLayer::OnEvent(Event& e)
    {
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen