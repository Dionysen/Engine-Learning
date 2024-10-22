#include "EditorLayer.h"
#include "Application.h"
#include "Base.h"
#include "Buffer.h"
#include "FPSCamera.h"
#include "Framebuffer.h"
#include "RenderCommand.h"
#include "Renderer2D.h"
#include "Shader.h"
#include "Texture.h"
#include "VertexArray.h"
#include "glm/ext/matrix_transform.hpp"
#include "glm/fwd.hpp"
#include "glm/trigonometric.hpp"
#include "imgui.h"
#include <cstdint>
#include <glm/gtc/type_ptr.hpp>
#include <map>
#include <string>
#include <vector>
#include "OpenGLDebug.h"

namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("Editor")
        , m_Camera({ 0.0f, 0.0f, 1.0f })
    {
        auto& app = Application::Get();
        glfwSetInputMode(static_cast<GLFWwindow*>(app.GetWindow().GetNativeWindow()), GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    }  // namespace Dionysen

    EditorLayer::~EditorLayer() = default;

    void EditorLayer::OnAttach()
    {
        m_SingleColorShader = Shader::Create("OpenGL/assets/shaders/single_color.glsl");
        m_ModelShader       = Shader::Create("OpenGL/assets/shaders/unnormmapping.glsl");
        m_ScreenShader      = Shader::Create("OpenGL/assets/shaders/framebuffer.glsl");

        // m_CubeShader = Shader::Create("OpenGL/assets/shaders/nanosuit.glsl");
        m_Model = Model::Create("OpenGL/assets/models/cyborg/cyborg.obj");
        // m_Model = Model::Create("OpenGL/assets/models/nanosuit/nanosuit.obj");
        Application::Get().GetWindow().ResizeWindow(1280, 720);

        std::vector<std::string> skyboxPath = {
            "OpenGL/assets/textures/skybox/right.jpg",  "OpenGL/assets/textures/skybox/left.jpg",  "OpenGL/assets/textures/skybox/top.jpg",
            "OpenGL/assets/textures/skybox/bottom.jpg", "OpenGL/assets/textures/skybox/front.jpg", "OpenGL/assets/textures/skybox/back.jpg",
        };
        m_Skybox = Skybox::Create(skyboxPath);

        m_FloorTex  = Texture2D::Create("OpenGL/assets/textures/floor.jpg");
        m_GrassTex  = Texture2D::Create("OpenGL/assets/textures/grass.png");
        m_LightTex  = Texture2D::Create("OpenGL/assets/textures/light.png");
        m_WindowTex = Texture2D::Create("OpenGL/assets/textures/window.png");

        // framebuffer

        float quadVertices[] = { // vertex attributes for a quad that fills the entire screen in Normalized Device Coordinates.
                                 // positions   // texCoords
                                 -1.0f, 1.0f, 0.0f, 1.0f, -1.0f, -1.0f, 0.0f, 0.0f, 1.0f, -1.0f, 1.0f, 0.0f,
                                 -1.0f, 1.0f, 0.0f, 1.0f, 1.0f,  -1.0f, 1.0f, 0.0f, 1.0f, 1.0f,  1.0f, 1.0f
        };
        m_FramebufferVAO      = VertexArray::Create();
        Ref<VertexBuffer> VBO = VertexBuffer::Create(quadVertices, sizeof(quadVertices));
        VBO->SetLayout({ { ShaderDataType::Float2, "a_Position" }, { ShaderDataType::Float2, "a_TexCoord" } });
        // Ref<IndexBuffer>  IBO = IndexBuffer::Create(uint32_t * indices, uint32_t count);
        uint32_t         quadIndices[6] = { 0, 1, 2, 3, 4, 5 };
        Ref<IndexBuffer> IBO            = IndexBuffer::Create(quadIndices, sizeof(quadIndices) / sizeof(uint32_t));
        m_FramebufferVAO->SetIndexBuffer(IBO);
        m_FramebufferVAO->AddVertexBuffer(VBO);

        FramebufferSpecification fbSpec;
        fbSpec.Attachments = { FramebufferTextureFormat::RGBA8, FramebufferTextureFormat::RED_INTEGER, FramebufferTextureFormat::Depth };
        fbSpec.Width       = 1280;
        fbSpec.Height      = 720;
        m_FrameBuffer      = Framebuffer::Create(fbSpec);
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
        m_Camera.OnUpdate(ts);

        m_FrameBuffer->Bind();
        glEnable(GL_DEPTH_TEST);

        RenderCommand::SetClearColor({ 0.2f, 0.2f, 0.2f, 1.0f });
        RenderCommand::Clear();
        {
            Renderer2D::BeginScene(m_Camera);
            // light

            glm::mat4 model      = glm::mat4(1.0f);
            glm::quat quaternion = glm::angleAxis(glm::radians(m_LightRotate), glm::vec3(0.0f, 1.0f, 0.0f));  // 绕z轴旋转
            glm::vec3 basePos    = { 1.0f, 3.0f, 3.0f };
            m_LightPos           = basePos * quaternion;
            model                = glm::translate(model, m_LightPos);
            model                = glm::scale(model, glm::vec3(0.2));
            Renderer2D::DrawQuad(model, m_LightTex);

            // flood
            model = glm::mat4(1.0f);
            model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            model = glm::scale(model, { 10.0f, 10.0f, 10.0f });

            Renderer2D::DrawQuad(model, m_FloorTex);

            //  Grass
            std::vector<glm::vec3> vegetation;
            vegetation.push_back(glm::vec3(-1.5f, 0.0f, -0.48f));
            vegetation.push_back(glm::vec3(1.5f, 0.0f, 0.51f));
            vegetation.push_back(glm::vec3(0.0f, 0.0f, 0.7f));
            vegetation.push_back(glm::vec3(-0.3f, 0.0f, -2.3f));
            vegetation.push_back(glm::vec3(0.5f, 0.0f, -0.6f));

            for (unsigned int i = 0; i < vegetation.size(); i++)
            {
                model = glm::mat4(1.0f);
                model = glm::translate(model, vegetation[i]);
                model = glm::rotate(model, glm::radians(180.0f), { 1.0f, 0.0f, 0.0f });
                model = glm::translate(model, { 0.0f, -0.5f, 0.0f });
                Renderer2D::DrawQuad(model, m_GrassTex);
            }

            // window
            std::vector<glm::vec3> windows{ glm::vec3(-1.8f, 0.0f, 0.48f), glm::vec3(-1.5f, 0.0f, 4.51f), glm::vec3(2.0f, 0.0f, 1.7f),
                                            glm::vec3(-3.3f, 0.0f, -2.3f), glm::vec3(0.9f, 0.0f, 0.6f) };

            std::map<float, glm::vec3> sorted;
            for (unsigned int i = 0; i < windows.size(); i++)
            {
                float distance   = glm::length(m_Camera.GetPosition() - windows[i]);
                sorted[distance] = windows[i];
            }

            for (std::map<float, glm::vec3>::reverse_iterator it = sorted.rbegin(); it != sorted.rend(); ++it)
            {
                model = glm::mat4(1.0f);
                model = glm::translate(model, it->second);
                model = glm::translate(model, { 0.0f, 0.5f, 0.0f });
                Renderer2D::DrawQuad(model, m_WindowTex);
            }

            Renderer2D::EndScene();
        }


        m_Skybox->Submit(m_Camera);

        glEnable(GL_CULL_FACE);
        glCullFace(GL_BACK);
        glFrontFace(GL_CCW);
        m_ModelShader->Bind();
        m_ModelShader->SetInt("u_Mode", m_Mode);

        m_ModelShader->SetMat4("u_ViewProjection", m_Camera.GetViewProjectionMatrix());

        m_ModelShader->SetFloat3("u_ViewPos", m_Camera.GetPosition());

        // m_ModelShader->SetInt("u_NormalMapping", m_isNormalMapping);
        m_ModelShader->SetFloat3("u_LightPos", m_LightPos);
        m_ModelShader->SetFloat3("u_Light.ambient", { 0.2f, 0.2f, 0.2f });
        m_ModelShader->SetFloat3("u_Light.diffuse", { 0.5f, 0.5f, 0.5f });
        m_ModelShader->SetFloat3("u_Light.specular", { 1.0f, 1.0f, 1.0f });

        m_ModelShader->SetFloat3("u_CameraPos", m_Camera.GetPosition());
        m_ModelShader->SetInt("texture_skybox", 0);

        m_Skybox->GetTexture()->Bind();

        glm::mat4 model = glm::mat4(1.0f);
        model           = glm::scale(model, glm::vec3(0.5f));
        // model           = glm::translate(model, glm::vec3(0.0f, -1.75f, 0.0f));

        m_ModelShader->SetMat4("u_Transform", model);

        if (m_isLine)
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        else
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

        m_Model->Draw(m_ModelShader);
        glCheckError();
        glDisable(GL_CULL_FACE);


        // FrameBuffer
        m_FrameBuffer->Unbind();
        glDisable(GL_DEPTH_TEST);

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        m_ScreenShader->Bind();
        m_ScreenShader->SetInt("u_Gray", m_Effect);
        uint32_t texture = m_FrameBuffer->GetColorAttachmentRendererID();
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, texture);
        RenderCommand::DrawIndexed(m_FramebufferVAO);
    }

    void EditorLayer::OnImGuiRender()
    {
        ImGui::Begin("Press \"C\" to switch the cursor's visibility.");
        {
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

            ImGui::Checkbox("Line Mode", &m_isLine);
            ImGui::DragFloat3("Light pos", glm::value_ptr(m_LightPos));
            ImGui::DragFloat("Light rotate", &m_LightRotate);
            ImGui::Checkbox("VSync", &m_isVSync);

            ImGui::Combo("Mode", &m_Mode, m_ModeArray, IM_ARRAYSIZE(m_ModeArray));

            auto& app = Application::Get();
            app.GetWindow().SetVSync(m_isVSync);

            ImGui::Checkbox("Normal Mapping", &m_isNormalMapping);

            ImGui::Text("Using FrameBuffer.");
            ImGui::Combo("Post-processing", &m_Effect, m_EffectArray, IM_ARRAYSIZE(m_EffectArray));
        }
        ImGui::End();
    }

    void EditorLayer::OnEvent(Event& e)
    {
        m_Camera.OnEvent(e);
    }
}  // namespace Dionysen