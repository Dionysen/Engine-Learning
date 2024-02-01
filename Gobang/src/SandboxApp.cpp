#include <Dionysen.h>
#include <EntryPoint.h>

#include "Sandbox2D.h"
#include "GameController.h"

class Sandbox : public Dionysen::Application
{
  public:
    Sandbox(const Dionysen::ApplicationSpecification& specification)
        : Dionysen::Application(specification)
    {
        // PushLayer(new ExampleLayer());
        PushLayer(new Sandbox2D());
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
