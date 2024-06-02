#pragma once

#include "Dionysen.h"

class ExampleLayer : public Dionysen::Layer
{
  public:
    ExampleLayer();
    virtual ~ExampleLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void         OnUpdate(Dionysen::Timestep ts) override;
    virtual void OnImGuiRender() override;
    void         OnEvent(Dionysen::Event& e) override;
    void         processInput(GLFWwindow* window);

  private:
    Dionysen::ShaderLibrary              m_ShaderLibrary;
    Dionysen::Ref<Dionysen::Shader>      m_Shader;
    Dionysen::Ref<Dionysen::VertexArray> m_VertexArray;

    Dionysen::Ref<Dionysen::UniformBuffer> m_UBO;
    Dionysen::Ref<Dionysen::Shader>        m_FlatColorShader;
    Dionysen::Ref<Dionysen::VertexArray>   m_SquareVA;

    Dionysen::Ref<Dionysen::Texture2D> m_Texture, m_ChernoLogoTexture;

    Dionysen::OrthographicCameraController m_CameraController;
    glm::vec3                              m_SquareColor = { 0.2f, 0.3f, 0.8f };
};
