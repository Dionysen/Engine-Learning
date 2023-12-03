#include "Dionysen.h"
#include "GLFW/glfw3.h"
#include "ImGuiLayer.h"

#include "Layer.h"
#include "Log.h"
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
    }
    ~ExampleLayer() = default;

    virtual void OnImGuiRender() override
    {
        ImGui::Begin("Dear ImGui");
        // ...
        ImGui::Text("Hello");

        // Frame rate
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();
    }
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
