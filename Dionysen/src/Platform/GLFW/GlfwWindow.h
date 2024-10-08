#pragma once

#ifdef GLFW_WINDOW

#include "GLFW/glfw3.h"
#include "GraphicsContext.h"
#include "Window.h"
#include "GraphicsContext.h"

namespace Dionysen
{
    class GLFWWindow : public Window
    {
      public:
        explicit GLFWWindow(const WindowProps& props);
        ~GLFWWindow() override;

        void OnUpdate() override;

        inline unsigned int GetWidth() const override
        {
            return m_Data.Width;
        }
        inline unsigned int GetHeight() const override
        {
            return m_Data.Height;
        }

        inline void ResizeWindow(uint32_t width, uint32_t height) override;

        // Window attributes
        inline void SetEventCallback(const EventCallbackFn& callback) override
        {
            m_Data.EventCallback = callback;
        }

        void SetVSync(bool enabled) override;
        bool IsVSync() const override;

        inline void* GetNativeWindow() const override
        {
            return m_Window;
        }

      private:
        virtual void Init(const WindowProps& props);
        virtual void Shutdown();

      private:
        GLFWwindow*      m_Window;
        GraphicsContext* m_Context;

        struct WindowData
        {
            std::string     Title;
            unsigned int    Width, Height;
            bool            VSync;
            EventCallbackFn EventCallback;
        };
        WindowData m_Data;
    };
}  // namespace Dionysen

#endif