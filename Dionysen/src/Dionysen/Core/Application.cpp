#include <GL/glew.h>
#include "Application.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include "KeyCodes.h"
#include "KeyEvent.h"
#include "Layer.h"
#include "Log.h"
#include "PlatformUtils.h"
#include "WindowsWindow.h"
#include "Event.h"
#include "Renderer.h"
#include "OpenGLShader.h"

namespace Dionysen
{
    Application* Application::s_Instance = nullptr;

    Application::Application(const ApplicationSpecification& specification)
        : m_Specification(specification)
    {
        DION_CORE_ASSERT(!s_Instance, "Application already exists!")
        s_Instance = this;

        // Set working directory here
        // if (!m_Specification.WorkingDirectory.empty())
        //     std::filesystem::current_path(m_Specification.WorkingDirectory);

        m_Window = Window::Create(WindowProps(m_Specification.Name));
        m_Window->SetEventCallback(DION_BIND_EVENT_FN(OnEvent));  // ###

        OpenGLShader::SetLogShader(false);
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
        dispatcher.Dispatch<WindowCloseEvent>(DION_BIND_EVENT_FN(OnWindowClose));
        dispatcher.Dispatch<WindowResizeEvent>(DION_BIND_EVENT_FN(OnWindowResize));
        dispatcher.Dispatch<KeyPressedEvent>(DION_BIND_EVENT_FN(OnKeyPressed));

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
        DION_CORE_INFO("Application::{0} is running!", m_Specification.Name);
        while (m_Running)
        {
            auto     time     = Time::GetTime();
            Timestep timestep = time - m_LastFrameTime;
            m_LastFrameTime   = time;

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

    void Application::SubmitToMainThread(const std::function<void()>& function)
    {
        std::scoped_lock<std::mutex> lock(m_MainThreadQueueMutex);
        m_MainThreadQueue.emplace_back(function);
    }

    void Application::ExecuteMainThreadQueue()
    {
        std::scoped_lock<std::mutex> lock(m_MainThreadQueueMutex);

        for (auto& func : m_MainThreadQueue)
            func();

        m_MainThreadQueue.clear();
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
        if (e.GetKeyCode() == Key::Escape)
            this->Close();
        return true;
    }
}  // namespace Dionysen
