#pragma once
#include "Dionysen.h"
#include "dspch.h"
#include "imgui.h"


class ExampleLayer : public Dionysen::Layer
{
  public:
    ExampleLayer()
        : Layer("Example")
    {
    }

    virtual void OnAttach() override{
        // DION_WARN("On attach");
    };
    virtual void OnDetach() override{
        // DION_WARN("On Detach");
    };

    void OnEvent(Dionysen::Event& event) override
    {

    }
    void OnUpdate(Dionysen::Timestep st) override
    {

        if (Dionysen::Input::IsKeyPressed(Dionysen::Key::Tab))
        {
            DION_INFO("TAB key is pressed!");
        }

        if(Dionysen::Input::IsMouseButtonPressed(Dionysen::Mouse::ButtonLeft))
        {
            DION_INFO("Mouse Position: {0} {1}", Dionysen::Input::GetMouseX(), Dionysen::Input::GetMouseY());
        }
    }
    ~ExampleLayer() = default;

    virtual void OnImGuiRender() override
    {
        ImGui::Begin("Dear ImGui");
        // ...
        ImGui::Text("Hello");
        ImGui::ShowDemoWindow();

        // Frame rate
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

        ImGui::Checkbox("VSync", &isVSync);
        Dionysen::Application::Get().GetWindow().SetVSync(isVSync);

        ImGui::End();
    }

  private:
    bool isVSync = true;
};

class Gobang : public Dionysen::Application
{
  public:
    Gobang()
    {
        DION_INFO("Create Gobang");
        m_appName = "Gobang";
        PushLayer(new ExampleLayer());
    }

    ~Gobang()
    {
    }
};

Dionysen::Application* Dionysen::CreateApplication()
{
    return new Gobang();
}
