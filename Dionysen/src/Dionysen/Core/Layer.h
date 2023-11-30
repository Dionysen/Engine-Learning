#pragma once

#include "Event.h"
#include "TimerStep.h"
#include <sstream>
#include <string>
#include <winreg.h>

namespace Dionysen
{
class Layer
{
  public:
    Layer(const std::string& name = "Layer");
    virtual ~Layer() = default;

    virtual void OnAttach() {}
    virtual void OnDetach() {}
    virtual void OnUpdate(Timestep ts) {}
    virtual void OnImGuiRender() {}
    virtual void OnEvent(Event& e) {}

    const std::string& GetName() const { return m_DebugName; }

  protected:
    std::string m_DebugName;
};

}  // namespace Dionysen