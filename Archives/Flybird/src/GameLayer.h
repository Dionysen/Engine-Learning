#pragma once

#include "Dionysen.h"
#include "Level.h"
#include "imgui.h"

using namespace Dionysen;

class GameLayer : public Dionysen::Layer
{
  public:
    GameLayer();
    virtual ~GameLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;
    void         OnEvent(Event& e) override;
    void         OnUpdate(Timestep st) override;
    virtual void OnImGuiRender() override;

    bool OnWindowsResize(WindowResizeEvent& e);
    bool OnMouseButtonPressed(MouseButtonPressedEvent& e);

  private:
    void CreateCamera(uint32_t width, uint32_t height);

  private:
    Scope<OrthographicCamera> m_Camera;
    Level                     m_Level;

    enum class GameState
    {
        Play     = 0,
        MainMenu = 1,
        GameOver = 2,
    };
    GameState m_State = GameState::MainMenu;

    ImFont* m_Font;
    float   m_Time  = 0.0f;
    bool    m_Blink = false;
};
