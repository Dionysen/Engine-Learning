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
#include "imgui.h"

namespace Dionysen
{

    Application* Application::s_Instance = nullptr;

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application::Application()
    {
        DION_CORE_ASSERT(!s_Instance, "Application already exists!");
        s_Instance = this;

        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));  // ###

        m_ImGuiLayer = new ImGuiLayer();
        PushOverlay(m_ImGuiLayer);
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

        // Print event for debug
        // DION_CORE_TRACE("{0}", e.ToString());

        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin();)
        {
            (*--it)->OnEvent(e);
            if (e.isHandled())
                break;
        }
    }

    Application::~Application()
    {
    }
    void Application::Run()
    {
        float    time     = Time::GetTime();
        Timestep timestep = time - m_LastFrameTime;
        m_LastFrameTime   = time;

        DION_CORE_INFO("Application::{0} is running!", m_appName);

        while (m_Running)
        {
            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            if (!m_Minimized)
            {
                for (Layer* layer : m_LayerStack)
                {
                    layer->OnUpdate(timestep);
                }

                // imgui
                {
                    m_ImGuiLayer->Begin();

                    ImGui::Begin("App");
                    ImGui::End();

                    ImGui::Begin("Example");
                    ImGui::ShowDemoWindow();
                    ImGui::Text("Welcome to my Scene!");
                    ImGui::Text("Press \"Alt + C\" to visiable cursor or not.");
                    // Frame rate
                    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
                    ImGui::End();

                    for (Layer* layer : m_LayerStack)
                        layer->OnImGuiRender();

                    m_ImGuiLayer->End();
                }
            }

            m_Window->OnUpdate();  // Poll event and swap buffer
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent& e)
    {
        DION_CORE_WARN("Setting running is false ...");
        m_Running = false;
        DION_CORE_WARN("Finished.");
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
}  // namespace Dionysen