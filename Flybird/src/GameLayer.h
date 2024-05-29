#pragma once

#include "Base.h"
#include "BaseBuffer.h"
#include "Dionysen.h"
#include "OrthographicCamera.h"
#include "TimeStep.h"
#include <imgui.h>
using namespace Dionysen;

class GameLayer : public Dionysen::Layer
{
  public:
    GameLayer();
    virtual ~GameLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void         OnUpdate(Timestep st) override;
    virtual void OnImGuiRender() override;
    void         OnWindowsResize(Event& e);

  private:
    Scope<OrthographicCamera> m_Camera;
};
