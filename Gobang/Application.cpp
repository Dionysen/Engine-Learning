#include "Dionysen.h"
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
    void OnEvent(Dionysen::Event& event) override
    {
        // DION_TRACE("{0}", event.GetName());
    }
    void OnUpdate(Dionysen::Timestep st) override
    {
        // DION_TRACE("ExampleLayer::Update");
    }
    ~ExampleLayer()
    {
    }

    void OnImGuiRender() override
    {
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
