#ifndef GLFW_WINDOW
#ifdef DION_PLATFORM_WINDOWS

#include "dspch.h"
#include "Input.h"
#include "Application.h"
namespace Dionysen
{
    Input* Input::s_Instance = new Input();

    bool Input::IsKeyPressed(const KeyCode key)
    {
        auto* window = static_cast<HWND>(Application::Get().GetWindow().GetNativeWindow());
        auto  state  = GetAsyncKeyState(static_cast<int32_t>(key));
        return state & 0x8000;
    }

    bool Input::IsKeyReleased(const KeyCode key)
    {
        auto* window = static_cast<HWND>(Application::Get().GetWindow().GetNativeWindow());
        auto  state  = GetAsyncKeyState(static_cast<int32_t>(key));
        return !(state & 0x8000);
    }

    bool Input::IsMouseButtonPressed(const MouseCode button)
    {
        auto* window = static_cast<HWND>(Application::Get().GetWindow().GetNativeWindow());
        auto  state  = GetAsyncKeyState(static_cast<int32_t>(button));
        return state & 0x8000;
    }

    glm::vec2 Input::GetMousePosition()
    {
        POINT p;
        GetCursorPos(&p);
        return { (float)p.x, (float)p.y };
    }

    float Input::GetMouseX()
    {
        return GetMousePosition().x;
    }

    float Input::GetMouseY()
    {
        return GetMousePosition().y;
    }

}  // namespace Dionysen

#endif
#endif