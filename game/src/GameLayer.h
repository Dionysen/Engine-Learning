#pragma once

#include "Dionysen.h"

#include "Level.h"
#include <imgui.h>

class GameLayer : public Dionysen::Layer
{
  public:
    GameLayer();
    virtual ~GameLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void         OnUpdate(Dionysen::Timestep ts) override;
    virtual void OnImGuiRender() override;
    void         OnEvent(Dionysen::Event& e) override;
    bool         OnMouseButtonPressed(Dionysen::MouseButtonPressedEvent& e);
    bool         OnWindowResize(Dionysen::WindowResizeEvent& e);

  private:
    void CreateCamera(uint32_t width, uint32_t height);

  private:
    Dionysen::Scope<Dionysen::OrthographicCamera> m_Camera;
    Level                                         m_Level;
    ImFont*                                       m_Font;
    float                                         m_Time  = 0.0f;
    bool                                          m_Blink = false;

    enum class GameState
    {
        Play     = 0,
        MainMenu = 1,
        GameOver = 2
    };

    GameState m_State = GameState::MainMenu;
};