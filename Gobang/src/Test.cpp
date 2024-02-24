#include "Test.h"

#include "imgui.h"

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "OpenGLShader.h"
#include "FPSCamera.h"

ExampleLayer::ExampleLayer()
    : Layer("ExampleLayer")
    , m_CameraController(1280.0f / 720.0f)
    , m_FPSCamera(glm::vec3(0.0, 0.0, 3.0))
{
    // Dionysen::OpenGLShader::SetLogShader(true);

    // vertex
    m_VertexArray         = Dionysen::VertexArray::Create();
    float vertices[3 * 7] = { -0.5f, -0.5f, 0.0f, 0.8f, 0.2f, 0.8f, 1.0f, 0.5f, -0.5f, 0.0f, 0.2f,
                              0.3f,  0.8f,  1.0f, 0.0f, 0.5f, 0.0f, 0.8f, 0.8f, 0.2f,  1.0f };

    Dionysen::Ref<Dionysen::VertexBuffer> vertexBuffer = Dionysen::VertexBuffer::Create(vertices, sizeof(vertices));
    Dionysen::BufferLayout layout = { { Dionysen::ShaderDataType::Float3, "a_Position" }, { Dionysen::ShaderDataType::Float4, "a_Color" } };
    vertexBuffer->SetLayout(layout);
    m_VertexArray->AddVertexBuffer(vertexBuffer);
    // index
    uint32_t                             indices[3]  = { 0, 1, 2 };
    Dionysen::Ref<Dionysen::IndexBuffer> indexBuffer = Dionysen::IndexBuffer::Create(indices, sizeof(indices) / sizeof(uint32_t));
    m_VertexArray->SetIndexBuffer(indexBuffer);

    m_Shader = Dionysen::Shader::Create("./Gobang/shaders/VertexPosColor.glsl");
}

void ExampleLayer::OnAttach()
{
}

void ExampleLayer::OnDetach()
{
}

void ExampleLayer::OnUpdate(Dionysen::Timestep ts)
{

    Dionysen::RenderCommand::Clear();
    Dionysen::RenderCommand::SetClearColor(glm::vec4(0.1f, 0.1f, 0.1f, 1.0f));
    Dionysen::Application& app = Dionysen::Application::Get();

    processInput((GLFWwindow*)app.GetWindow().GetNativeWindow());

    m_Shader->Bind();
    // glm::mat4 projection = glm::perspective(glm::radians(m_FPSCamera.Zoom), 1280.0f / 720.0f, 0.1f, 100.0f);
    // m_Shader->SetMat4("u_ViewProjection", projection * m_FPSCamera.GetViewMatrix());
    // m_Shader->SetMat4("u_Transform", glm::scale(glm::mat4(1.0f), glm::vec3(1.5f)));
    glEnable(GL_DEBUG_OUTPUT);
    m_Shader->SetFloat4("u_Color", glm::vec4(0.3, 0.3, 0.3, 1.0));
    Dionysen::RenderCommand::DrawIndexed(m_VertexArray);
    glDisable(GL_DEBUG_OUTPUT);
}

void ExampleLayer::OnImGuiRender()
{
    ImGui::Begin("Settingsss");
    ImGui::ColorEdit3("Square Color", glm::value_ptr(m_SquareColor));
    ImGui::End();
}

void ExampleLayer::OnEvent(Dionysen::Event& e)
{
    m_CameraController.OnEvent(e);
}

void ExampleLayer::processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    // if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
    //     m_FPSCamera.ProcessKeyboard(FORWARD, deltaTime);
    // if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
    //     m_FPSCamera.ProcessKeyboard(1, deltaTime);
    // if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
    //     m_FPSCamera.ProcessKeyboard(2, deltaTime);
    // if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
    //     m_FPSCamera.ProcessKeyboard(3, deltaTime);
}
