#pragma once

#include "Dionysen.h"
// #include "GameController.h"

class Sandbox2D : public Dionysen::Layer
{
  public:
    Sandbox2D();
    virtual ~Sandbox2D() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void         OnUpdate(Dionysen::Timestep ts) override;
    virtual void OnImGuiRender() override;
    void         OnEvent(Dionysen::Event& e) override;

  private:
    Dionysen::OrthographicCameraController m_CameraController;

    // Temp
    Dionysen::Ref<Dionysen::VertexArray> m_SquareVA;
    Dionysen::Ref<Dionysen::Shader>      m_FlatColorShader;
    Dionysen::Ref<Dionysen::Texture2D>   m_CheckerboardTexture;
    // Dionysen::Ref<Gobang::GameController> m_GameController;

    // Imgui keys
    bool isVSync;
    // bool status = false;

    glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};