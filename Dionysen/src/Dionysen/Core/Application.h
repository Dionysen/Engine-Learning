#pragma once

#include "ApplicationEvent.h"
#include "Base.h"
#include "Event.h"
#include "Layer.h"
#include "LayerStack.h"
#include "WindowsWindow.h"

#include "dspch.h"
#include <string>

namespace Dionysen
{

class DION_API Application
{
  public:
    Application();
    virtual ~Application();
    virtual void Run();

    void OnEvent(Event& e);

    void PushLayer(Layer* layer);
    void PushOverlay(Layer* layer);

    static Application& Get() { return *s_Instance; }
    Window&             GetWindow() { return *m_Window; }

  protected:
    std::string m_appName;

  private:
    bool OnWindowClose(WindowCloseEvent& e);

    std::unique_ptr<Window> m_Window;

    bool       m_Running = true;
    LayerStack m_LayerStack;
    float      m_LastFrameTime = 0.0f;

    static Application* s_Instance;
};

// To be defined in CLIENT
Application* CreateApplication();
}  // namespace Dionysen