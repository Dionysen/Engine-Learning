#pragma once

#include "Dionysen.h"

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

    void DrawChessboard();

  private:
    Dionysen::OrthographicCameraController m_CameraController;
    Dionysen::FPSCamera                    m_FPSCamera;

    // Temp
    Dionysen::Ref<Dionysen::Shader>      m_TriangleShader;
    Dionysen::Ref<Dionysen::VertexArray> m_SquareVA;
    Dionysen::Ref<Dionysen::Shader>      m_FlatColorShader;
    Dionysen::Ref<Dionysen::Texture2D>   m_CheckerboardTexture;


    // Dionysen::Ref<Gobang::GameController> m_GameController;
    glm::vec3 CameraPostion;
    // Imgui keys
    bool isVSync;
    // bool status = false;

    glm::vec4 m_SquareColor     = { 0.2f, 0.3f, 0.8f, 1.0f };
    glm::vec4 m_BackgroundColor = { 0.1f, 0.1f, 0.1f, 1.0f };
};