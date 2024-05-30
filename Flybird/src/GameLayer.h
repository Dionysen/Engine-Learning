#pragma once

#include "Dionysen.h"
#include "Level.h"

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

  private:
    void CreateCamera(uint32_t width, uint32_t height);

  private:
    Scope<OrthographicCamera> m_Camera;
    Level                     m_Level;
};
