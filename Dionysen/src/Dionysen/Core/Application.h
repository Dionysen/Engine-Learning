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
    struct ApplicationCommandLineArgs
    {
        int    Count = 0;
        char** Args  = nullptr;

        const char* operator[](int index) const
        {
            DION_CORE_ASSERT(index < Count);
            return Args[index];
        }
    };

    struct ApplicationSpecification
    {
        std::string                Name = "Dionysen Application";
        std::string                WorkingDirectory;
        ApplicationCommandLineArgs CommandLineArgs;
    };

    class DION_API Application
    {
      public:
        Application(const ApplicationSpecification& specification);
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

        void Close()
        {
            m_Running = false;
        }

        ImGuiLayer* GetImGuiLayer()
        {
            return m_ImGuiLayer;
        }

        const ApplicationSpecification& GetSpecification() const
        {
            return m_Specification;
        }

        inline bool CloseWindow()
        {
            DION_CORE_INFO("Closing Window...");
            m_Running = false;
            return true;
        }
        void SubmitToMainThread(const std::function<void()>& function);

      protected:
        std::string m_appName;

      private:
        bool OnWindowClose(WindowCloseEvent& e);
        bool OnWindowResize(WindowResizeEvent& e);
        bool OnKeyPressed(KeyPressedEvent& e);

        void ExecuteMainThreadQueue();

        Scope<Window>            m_Window;
        ApplicationSpecification m_Specification;
        bool                     m_Running = true;
        LayerStack               m_LayerStack;
        float                    m_LastFrameTime = 0.0f;
        bool                     m_Minimized     = false;

        std::vector<std::function<void()>> m_MainThreadQueue;
        std::mutex                         m_MainThreadQueueMutex;

        static Application* s_Instance;
        ImGuiLayer*         m_ImGuiLayer;
    };

    // To be defined in CLIENT
    Application* CreateApplication(ApplicationCommandLineArgs args);
}  // namespace Dionysen
