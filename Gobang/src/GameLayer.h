#pragma once

#include "Buffer.h"
#include "Layer.h"
#include <Dionysen.h>
#include "ChessBoard.h"
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
    bool OnMouseButtonPressed(MouseButtonPressedEvent& e);

  private:
    ChessColor m_Turn = ChessColor::Black;

    void CreateCamera(uint32_t width, uint32_t height);

    ChessBoard m_ChessBoard;

    Scope<OrthographicCamera> m_Camera;
};