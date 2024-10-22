#include <Dionysen.h>
#include "ODAExporterLayer.h"
#include <EntryPoint.h>
#include <Base.h>
class ODAExporter : public Dionysen::Application
{
  public:
    ODAExporter(const Dionysen::ApplicationSpecification& specification)
        : Dionysen::Application(specification)
    {
        PushLayer(new Dionysen::ODAExporterLayer);
    }
    ~ODAExporter()
    {
    }
};

Dionysen::Application* Dionysen::CreateApplication(Dionysen::ApplicationCommandLineArgs args)
{
    ApplicationSpecification spec;
    spec.Name             = "ODAExporter";
    spec.WorkingDirectory = ".";
    spec.CommandLineArgs  = args;
    return new ODAExporter(spec);
}
