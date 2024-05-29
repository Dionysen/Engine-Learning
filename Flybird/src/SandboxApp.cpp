#include <Dionysen.h>
#include <EntryPoint.h>
#include "GameLayer.h"

class Sandbox : public Dionysen::Application
{
  public:
    Sandbox(const Dionysen::ApplicationSpecification& specification)
        : Dionysen::Application(specification)
    {
        PushLayer(new GameLayer());
        // PushLayer(new Dionysen::EditorLayer());
    }

    ~Sandbox()
    {
    }
};

Dionysen::Application* Dionysen::CreateApplication(Dionysen::ApplicationCommandLineArgs args)
{
    ApplicationSpecification spec;
    spec.Name             = "Sandbox";
    spec.WorkingDirectory = ".";
    spec.CommandLineArgs  = args;

    return new Sandbox(spec);
}
