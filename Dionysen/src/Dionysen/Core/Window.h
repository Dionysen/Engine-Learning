#pragma once

#include <utility>

#include "Base.h"
#include "Event.h"
#include "dspch.h"

namespace Dionysen
{
    class WindowProps
    {
      public:
        std::string Title;
        uint32_t    Width;
        uint32_t    Height;

        explicit WindowProps(std::string title = "Dionysen", uint32_t width = 1280, uint32_t height = 900)
            : Title(std::move(title))
            , Width(width)
            , Height(height)
        {
        }
    };

    class DION_API Window
    {
      public:
        using EventCallbackFn = std::function<void(Event&)>;  // Event callback function

        virtual ~Window() = default;

        virtual void OnUpdate() = 0;

        virtual uint32_t GetWidth() const = 0;

        virtual uint32_t GetHeight() const = 0;

        // Window attributes
        virtual void SetEventCallback(const EventCallbackFn& callback) = 0;

        virtual void SetVSync(bool enabled) = 0;

        virtual bool IsVSync() const = 0;

        virtual void* GetNativeWindow() const = 0;

        static Window* Create(const WindowProps& props = WindowProps());
    };

}  // namespace Dionysen
