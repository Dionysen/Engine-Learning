#include <Dionysen.h>
#include <EntryPoint.h>

#include "Test2.h"
#include "GameController.h"
#include "Test.h"
#include "Sandbox2D.h"

class Sandbox : public Dionysen::Application
{
  public:
    Sandbox(const Dionysen::ApplicationSpecification& specification)
        : Dionysen::Application(specification)
    {
        // PushLayer(new Test2());
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
