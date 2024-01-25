#pragma once

#include <GL/glew.h>
#include <iostream>
#include <ostream>

#include "Application.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include "Input.h"
#include "KeyCodes.h"
#include "KeyEvent.h"
#include "Layer.h"
#include "Log.h"
#include "PlatformUtils.h"
#include "WindowsWindow.h"
#include "Event.h"
#include "Renderer.h"

namespace Dionysen
{

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application* Application::s_Instance = nullptr;

    Application::Application()
    {
        DION_CORE_ASSERT(!s_Instance, "Application already exists!")
        s_Instance = this;

        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));  // ###

        Renderer::Init();

        m_ImGuiLayer = new ImGuiLayer();
        PushLayer(m_ImGuiLayer);
    }

    void Application::PushLayer(Layer* layer)
    {
        m_LayerStack.PushLayer(layer);
        layer->OnAttach();
    }
    void Application::PushOverlay(Layer* layer)
    {
        m_LayerStack.PushOverlay(layer);
        layer->OnAttach();
    }

    void Application::OnEvent(Event& e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
        dispatcher.Dispatch<WindowResizeEvent>(BIND_EVENT_FN(OnWindowResize));
        dispatcher.Dispatch<KeyPressedEvent>(BIND_EVENT_FN(OnKeyPressed));

        // std::cout << e.ToString() << std::endl;

        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin();)
        {
            (*--it)->OnEvent(e);
            if (e.isHandled())
                break;
        }
    }

    Application::~Application() = default;

    void Application::Run()
    {
        DION_CORE_INFO("Application::{0} is running!", m_appName);
        while (m_Running)
        {
            auto     time     = Time::GetTime();
            Timestep timestep = time - m_LastFrameTime;
            m_LastFrameTime   = time;

            glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            if (!m_Minimized)
            {
                // Update all layers
                for (Layer* layer : m_LayerStack)
                {
                    layer->OnUpdate(timestep);
                }

                // Render ImGuibackend and ImGui of all layers
                m_ImGuiLayer->Begin();
                for (Layer* layer : m_LayerStack)
                {
                    layer->OnImGuiRender();
                }
                m_ImGuiLayer->End();
            }
            m_Window->OnUpdate();  // Poll event and swap buffer
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent& e)
    {
        DION_CORE_INFO("Closing Window...");
        m_Running = false;
        return true;
    }

    bool Application::OnWindowResize(WindowResizeEvent& e)
    {
        if (e.GetWidth() == 0 || e.GetHeight() == 0)
        {
            m_Minimized = true;
            return false;
        }
        m_Minimized = false;
        return false;
    }

    bool Application::OnKeyPressed(KeyPressedEvent& e)
    {
        return true;
    }
}  // namespace Dionysen
