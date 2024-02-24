#include "Sandbox2D.h"
#include <imgui.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "OpenGLShader.h"
#include <GL/glew.h>

Sandbox2D::Sandbox2D()
    : Layer("Sandbox2D")
    , m_CameraController(1200.0f / 800.0f, false)
    , m_SquareColor({ 0.2f, 0.3f, 0.8f, 1.0f })
    , isVSync(true)
    , CameraPostion(2.0f, 0.0f, 0.0f)
{
    Dionysen::OpenGLShader::SetLogShader(true);

    m_SquareVA = Dionysen::VertexArray::Create();

    float vertices[4 * 3] = {
        0.5f,  0.5f,  0.0f,  // top right
        0.5f,  -0.5f, 0.0f,  // bottom right
        -0.5f, -0.5f, 0.0f,  // bottom left
        -0.5f, 0.5f,  0.0f   // top left
    };

    Dionysen::Ref<Dionysen::VertexBuffer> vertexBuffer = Dionysen::VertexBuffer::Create(vertices, sizeof(vertices));

    Dionysen::BufferLayout layout = { { Dionysen::ShaderDataType::Float3, "a_Position" } };
    vertexBuffer->SetLayout(layout);
    m_SquareVA->AddVertexBuffer(vertexBuffer);

    unsigned int indices[2 * 3] = {
        // note that we start from 0!
        0, 1, 3,  // first Triangle
        1, 2, 3   // second Triangle
    };

    Dionysen::Ref<Dionysen::IndexBuffer> indexBuffer = Dionysen::IndexBuffer::Create(indices, sizeof(indices) / sizeof(uint32_t));
    m_SquareVA->SetIndexBuffer(indexBuffer);

    m_TriangleShader = Dionysen::Shader::Create("Gobang/shaders/Triangle.glsl");
    m_TriangleShader->Bind();

    m_FPSCamera = Dionysen::FPSCamera(glm::vec3(0.0f, 0.0f, 3.0f));
}

void Sandbox2D::OnAttach()
{
}

void Sandbox2D::OnDetach()
{
}

void Sandbox2D::OnUpdate(Dionysen::Timestep ts)
{
    Dionysen::RenderCommand::SetClearColor(m_BackgroundColor);
    Dionysen::RenderCommand::Clear();

    m_TriangleShader->Bind();
    m_TriangleShader->SetMat4("u_ViewProjection", glm::perspective(glm::radians(m_FPSCamera.Zoom), (float)1200 / (float)800, 0.1f, 1000.0f) *
                                                      m_FPSCamera.GetViewMatrix());
    glm::mat4 model = glm::scale(glm::mat4(1.0f), glm::vec3(1.5f));
    m_TriangleShader->SetMat4("u_Transform", model);

    m_SquareVA->Bind();
    Dionysen::RenderCommand::DrawIndexed(m_SquareVA);
}

void Sandbox2D::OnImGuiRender()
{
    Dionysen::Application& app = Dionysen::Application::Get();

    // Start SideBar
    ImGui::Begin("Gobang", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

    // set window
    ImGui::SetWindowSize({ float(app.GetWindow().GetWidth()) / 3.5f, float(app.GetWindow().GetHeight()) });
    ImGui::SetWindowPos({ float(app.GetWindow().GetWidth()) * 2.5f / 3.5f, 0.0f });

    if (ImGui::CollapsingHeader("Developer Monitor"))
    {
        if (ImGui::TreeNode("Frame Rate"))
        {
            // Frame rate
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::TreePop();
            ImGui::Spacing();
        }
        if (ImGui::TreeNode("Renderer Settings"))
        {
            // VSync
            ImGui::Checkbox("VSync", &isVSync);
            Dionysen::Application::Get().GetWindow().SetVSync(isVSync);
            ImGui::TreePop();
            ImGui::Spacing();
        }
        if (ImGui::TreeNode("Renderer Status"))
        {
            // Render Status
            auto stats = Dionysen::Renderer2D::GetStats();
            {
                ImGui::Text("Renderer2D Stats:");
                ImGui::Text("Draw Calls: %d", stats.DrawCalls);
                ImGui::Text("Quads: %d", stats.QuadCount);
                ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
                ImGui::Text("Indices: %d", stats.GetTotalIndexCount());
                ImGui::Separator();
                ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));
                ImGui::ColorEdit4("Background Color", glm::value_ptr(m_BackgroundColor));
                ImGui::Separator();
            }
            ImGui::TreePop();
            ImGui::Spacing();
        }
    }

    if (ImGui::Button("Close Window"))
        app.CloseWindow();

    ImGui::SliderFloat3("Position", glm::value_ptr(CameraPostion), -10.0f, 10.0f);

    ImGui::End();
}


void Sandbox2D::OnEvent(Dionysen::Event& e)
{
    m_CameraController.OnEvent(e);
}

void Sandbox2D::DrawChessboard()
{
}
