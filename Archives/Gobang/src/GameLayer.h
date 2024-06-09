#pragma once

#include "Buffer.h"
#include "Layer.h"
#include <Dionysen.h>
#include "ChessBoard.h"
#include "MouseEvent.h"
#include "OrthographicCamera.h"

using namespace Dionysen;

class GameLayer : public Dionysen::Layer
{
  public:
    GameLayer();
    virtual ~GameLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;
    void         OnEvent(Event& e) override;
    void         OnUpdate(Timestep ts) override;
    virtual void OnImGuiRender() override;

    bool OnWindowsResize(WindowResizeEvent& e);
    bool OnMouseMoved(MouseMovedEvent& e);
    bool OnMouseButtonPressed(MouseButtonPressedEvent& e);

  private:
    glm::vec4 MouseToWorldPosition();

    void CalculateCameraPosition();

  private:
    enum class Status
    {
        Gaming   = 0,
        MainMenu = 1,
        GameOver = 2,
    };

    glm::vec3 m_CameraPosition = { 0.0f, 0.0f, 0.0f };

    Status m_Status = Status::MainMenu;

    ChessColor m_Turn = ChessColor::Black;

    void CreateCamera(uint32_t width, uint32_t height);

    ChessBoard m_ChessBoard;

    Scope<OrthographicCamera> m_Camera;
};