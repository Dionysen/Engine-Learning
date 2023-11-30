#pragma once
#include "Application.h"

#include "ApplicationEvent.h"
#include "Base.h"
#include "GL/glew.h"
#include "Layer.h"
#include "Log.h"
#include "PlatformUtils.h"
#include "WindowsWindow.h"
#include "dspch.h"

#include "Event.h"

namespace Dionysen
{

Application* Application::s_Instance = nullptr;

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

Application::Application()
{
    m_Window = std::unique_ptr<Window>(Window::Create());
    m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));  // ###
}

void Application::PushLayer(Layer* layer)
{
    m_LayerStack.PushLayer(layer);
}
void Application::PushOverlay(Layer* layer)
{
    m_LayerStack.PushOverlay(layer);
}

void Application::OnEvent(Event& e)
{
    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

    DION_CORE_TRACE("{0}", e.ToString());

    for (auto it = m_LayerStack.end(); it != m_LayerStack.begin();)
    {
        (*--it)->OnEvent(e);
        if (e.isHandled())
            break;
    }
}

Application::~Application() {}
void Application::Run()
{
    float    time     = Time::GetTime();
    Timestep timestep = time - m_LastFrameTime;
    m_LastFrameTime   = time;
    DION_CORE_TRACE("Application::{0} is running!", m_appName);
    while (m_Running)
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        for (Layer* layer : m_LayerStack) { layer->OnUpdate(timestep); }

        m_Window->OnUpdate();
    }
}

bool Application::OnWindowClose(WindowCloseEvent& e)
{
    // DION_CORE_WARN("Setting running is false ...");
    m_Running = false;
    // DION_CORE_WARN("Finished.");
    return true;
}

}  // namespace Dionysen