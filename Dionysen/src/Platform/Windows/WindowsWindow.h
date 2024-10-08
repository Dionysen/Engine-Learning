#pragma once

#ifndef GLFW_WINDOW

#include "Window.h"
#include "GraphicsContext.h"
#include "imgui_impl_win32.h"
namespace Dionysen
{
    class WindowsWindow : public Window
    {
      public:
        explicit WindowsWindow(const WindowProps& props);
        ~WindowsWindow() override;

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

        static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

      private:
        HWND             m_Window;
        GraphicsContext* m_Context;
        HDC              m_Hdc;
        HGLRC            m_Hglrc;
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