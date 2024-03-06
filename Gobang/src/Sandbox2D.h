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
    Dionysen::EditorCamera                 m_EditorCamera;
    // Temp
    Dionysen::Ref<Dionysen::Shader>      m_TriangleShader;
    Dionysen::Ref<Dionysen::VertexArray> m_SquareVA;
    Dionysen::Ref<Dionysen::Shader>      m_FlatColorShader;
    Dionysen::Ref<Dionysen::Texture2D>   m_Texture;


    Dionysen::Ref<Dionysen::Skybox> m_Skybox;

    // Dionysen::Ref<Gobang::GameController> m_GameController;
    glm::vec3 CameraPostion;
    // Imgui keys
    bool isVSync;
    // bool status = false;

    glm::vec4 m_SquareColor     = { 1.0f, 0.5f, 0.2f, 1.0f };
    glm::vec4 m_BackgroundColor = { 0.1f, 0.1f, 0.1f, 1.0f };
};