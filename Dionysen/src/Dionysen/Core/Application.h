#pragma once

#include "ApplicationEvent.h"
#include "Base.h"
#include "Event.h"
#include "KeyEvent.h"
#include "Layer.h"
#include "LayerStack.h"
#include "WindowsWindow.h"
#include "ImGuiLayer.h"
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

        static Application& Get()
        {
            return *s_Instance;
        }
        Window& GetWindow()
        {
            return *m_Window;
        }

        inline bool CloseWindow()
        {
            DION_CORE_INFO("Closing Window...");
            m_Running = false;
            return true;
        }

      protected:
        std::string m_appName;

      private:
        bool OnWindowClose(WindowCloseEvent& e);
        bool OnWindowResize(WindowResizeEvent& e);
        bool OnKeyPressed(KeyPressedEvent& e);

        std::unique_ptr<Window> m_Window;

        bool       m_Running = true;
        LayerStack m_LayerStack;
        float      m_LastFrameTime = 0.0f;
        bool       m_Minimized     = false;

        static Application* s_Instance;
        ImGuiLayer*         m_ImGuiLayer;
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}  // namespace Dionysen
