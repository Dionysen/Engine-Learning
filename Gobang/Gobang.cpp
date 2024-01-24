#pragma once
#include "Dionysen.h"
#include "dspch.h"
#include "imgui.h"
#include "Shader.h"
#include <GL/glew.h>
#include "OrthographicCamera.h"
#include "OrthographicCameraController.h"
#include "RenderCommand.h"

const char* vertexShaderSource   = "#version 330 core\n"
                                   "layout (location = 0) in vec3 aPos;\n"
                                   "void main()\n"
                                   "{\n"
                                   "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
                                   "}\0";
const char* fragmentShaderSource = "#version 330 core\n"
                                   "out vec4 FragColor;\n"
                                   "void main()\n"
                                   "{\n"
                                   "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
                                   "}\n\0";

class ExampleLayer : public Dionysen::Layer
{
  public:
    virtual void OnAttach() override{
        // DION_WARN("On attach");
    };

    virtual void OnDetach() override{
        // DION_WARN("On Detach");
    };

    void OnEvent(Dionysen::Event& event) override
    {
    }

    void OnUpdate(Dionysen::Timestep ts) override
    {
        // Update
        m_CameraController.OnUpdate(ts);

        // Render
        Dionysen::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
        Dionysen::RenderCommand::Clear();


        // Dionysen::Renderer::BeginScene(m_CameraController.GetCamera());

        m_VertexArray->Bind();
        Dionysen::RenderCommand::DrawIndexed(m_VertexArray);


        // glm::mat4 scale = glm::scale(glm::mat4(1.0f), glm::vec3(0.1f));
        // Dionysen::Renderer::EndScene();
    }

    ~ExampleLayer() = default;

    virtual void OnImGuiRender() override
    {
        ImGui::Begin("Dear ImGui");
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

        ImGui::End();
    }

    ExampleLayer()
        : Layer("Example")
        , m_CameraController(1280.0f / 720.0f)
    {
        m_VertexArray = Dionysen::VertexArray::Create();

        float vertices[3 * 7] = { -0.5f, -0.5f, 0.0f, 0.8f, 0.2f, 0.8f, 1.0f, 0.5f, -0.5f, 0.0f, 0.2f,
                                  0.3f,  0.8f,  1.0f, 0.0f, 0.5f, 0.0f, 0.8f, 0.8f, 0.2f,  1.0f };

        Dionysen::Ref<Dionysen::VertexBuffer> vertexBuffer = Dionysen::VertexBuffer::Create(vertices, sizeof(vertices));

        Dionysen::BufferLayout layout = { { Dionysen::ShaderDataType::Float3, "a_Position" }, { Dionysen::ShaderDataType::Float4, "a_Color" } };
        vertexBuffer->SetLayout(layout);
        m_VertexArray->AddVertexBuffer(vertexBuffer);

        uint32_t indices[3] = { 0, 1, 2 };

        Dionysen::Ref<Dionysen::IndexBuffer> indexBuffer = Dionysen::IndexBuffer::Create(indices, sizeof(indices) / sizeof(uint32_t));
        m_VertexArray->SetIndexBuffer(indexBuffer);
    }

  private:
    unsigned int VBO, VAO, EBO;
    unsigned int shaderProgram;

    Dionysen::ShaderLibrary              m_ShaderLibrary;
    Dionysen::Ref<Dionysen::Shader>      m_Shader;
    Dionysen::Ref<Dionysen::VertexArray> m_VertexArray;

    Dionysen::OrthographicCameraController m_CameraController;

    bool isVSync = true;
};

class Gobang : public Dionysen::Application
{
  public:
    Gobang()
    {
        DION_INFO("Create Gobang");
        m_appName = "Gobang";
        PushLayer(new ExampleLayer());
    }

    ~Gobang()
    {
    }
};

Dionysen::Application* Dionysen::CreateApplication()
{
    return new Gobang();
}
