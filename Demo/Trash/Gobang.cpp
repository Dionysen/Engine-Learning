#pragma once
#include "Dionysen.h"
#include "dspch.h"
#include "imgui.h"
#include "Shader.h"
#include <GL/glew.h>
#include "OrthographicCamera.h"
#include "OrthographicCameraController.h"
#include "RenderCommand.h"


class ExampleLayer : public Dionysen::Layer
{
  public:
    virtual void OnAttach() override{

    };

    virtual void OnDetach() override{

    };

    void OnEvent(Dionysen::Event& event) override
    {
        m_CameraController.OnEvent(event);
    }

    void OnUpdate(Dionysen::Timestep ts) override
    {
        // Update
        m_CameraController.OnUpdate(ts);

        // Render
        Dionysen::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
        Dionysen::RenderCommand::Clear();

        Dionysen::Renderer::BeginScene(m_CameraController.GetCamera());

        glm::mat4 scale = glm::scale(glm::mat4(1.0f), glm::vec3(0.1f));

        m_FlatColorShader->Bind();
        m_FlatColorShader->SetFloat3("u_Color", m_SquareColor);

        for (int y = 0; y < 20; y++)
        {
            for (int x = 0; x < 20; x++)
            {
                glm::vec3 pos(x * 0.11f, y * 0.11f, 0.0f);
                glm::mat4 transform = glm::translate(glm::mat4(1.0f), pos) * scale;
                Dionysen::Renderer::Submit(m_FlatColorShader, m_SquareVA, transform);
            }
        }

        auto textureShader = m_ShaderLibrary.Get("Texture");

        m_Texture->Bind();
        Dionysen::Renderer::Submit(textureShader, m_SquareVA, glm::scale(glm::mat4(1.0f), glm::vec3(1.5f)));
        m_ChernoLogoTexture->Bind();
        Dionysen::Renderer::Submit(textureShader, m_SquareVA, glm::scale(glm::mat4(1.0f), glm::vec3(1.5f)));

        // Triangle
        // Dionysen::Renderer::Submit(m_Shader, m_VertexArray);

        Dionysen::Renderer::EndScene();
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

        m_SquareVA                  = Dionysen::VertexArray::Create();
        float squareVertices[5 * 4] = { -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.5f,  -0.5f, 0.0f, 1.0f, 0.0f,
                                        0.5f,  0.5f,  0.0f, 1.0f, 1.0f, -0.5f, 0.5f,  0.0f, 0.0f, 1.0f };

        Dionysen::Ref<Dionysen::VertexBuffer> squareVB = Dionysen::VertexBuffer::Create(squareVertices, sizeof(squareVertices));
        squareVB->SetLayout({ { Dionysen::ShaderDataType::Float3, "a_Position" }, { Dionysen::ShaderDataType::Float2, "a_TexCoord" } });
        m_SquareVA->AddVertexBuffer(squareVB);

        uint32_t                             squareIndices[6] = { 0, 1, 2, 2, 3, 0 };
        Dionysen::Ref<Dionysen::IndexBuffer> squareIB = Dionysen::IndexBuffer::Create(squareIndices, sizeof(squareIndices) / sizeof(uint32_t));
        m_SquareVA->SetIndexBuffer(squareIB);

        std::string vertexSrc = R"(
			#version 450 core
			
			layout(location = 0) in vec3 a_Position;
			layout(location = 1) in vec4 a_Color;
            layout(std140, binding = 0) uniform Camera
            {
                mat4 u_ViewProjection;
                mat4 u_Transform;
            };
		    layout(location = 2) out vec3 v_Position;
		    layout(location = 3) out vec4 v_Color;

			void main()
			{
				v_Position = a_Position;
				v_Color = a_Color;
				gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);	
			}
		)";

        std::string fragmentSrc = R"(
			#version 450 core
			
			layout(location = 0) out vec4 color;
			layout(location = 2) in vec3 v_Position;
			layout(location = 3) in vec4 v_Color;

			void main()
			{
				color = vec4(v_Position * 0.5 + 0.5, 1.0);
				color = v_Color;
			}
		)";

        m_Shader = Dionysen::Shader::Create("VertexPosColor", vertexSrc, fragmentSrc);

        std::string flatColorShaderVertexSrc = R"(
			#version 450 core
			
			layout(location = 0) in vec3 a_Position;
            layout(std140, binding = 0) uniform Camera
            {
                mat4 u_ViewProjection;
                mat4 u_Transform;
            };
			layout(location = 1) out vec3 v_Position;

			void main()
			{
				v_Position = a_Position;
				gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);	
			}
		)";

        std::string flatColorShaderFragmentSrc = R"(
			#version 450 core
			
			layout(location = 0) out vec4 color;
			layout(location = 1) in vec3 v_Position;
            layout(std140, binding = 1) uniform Color
            {
                vec3 u_Color;
            };

			void main()
			{
				color = vec4(u_Color, 1.0);
			}
		)";

        m_FlatColorShader = Dionysen::Shader::Create("FlatColor", flatColorShaderVertexSrc, flatColorShaderFragmentSrc);
        DION_WARN("Debug");
        auto textureShader = m_ShaderLibrary.Load("Gobang/Texture.glsl");

        m_Texture           = Dionysen::Texture2D::Create("Gobang/textures/Checkerboard.png");
        m_ChernoLogoTexture = Dionysen::Texture2D::Create("Gobang/textures/ChernoLogo.png");

        textureShader->Bind();
        textureShader->SetInt("u_Texture", 0);
    }

  private:
    Dionysen::ShaderLibrary              m_ShaderLibrary;
    Dionysen::Ref<Dionysen::Shader>      m_Shader;
    Dionysen::Ref<Dionysen::VertexArray> m_VertexArray;

    Dionysen::OrthographicCameraController m_CameraController;

    Dionysen::Ref<Dionysen::Shader>      m_FlatColorShader;
    Dionysen::Ref<Dionysen::VertexArray> m_SquareVA;
    Dionysen::Ref<Dionysen::Texture2D>   m_Texture, m_ChernoLogoTexture;

    glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };

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
