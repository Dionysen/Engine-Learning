#include <Dionysen.h>
#include <EntryPoint.h>
#include "EditorLayer.h"
#include <Base.h>
namespace Dionysen
{

    class DionEditor : public Application
    {
      public:
        DionEditor(const ApplicationSpecification& specification)
            : Dionysen::Application(specification)
        {
            PushLayer(new EditorLayer);
        }
        ~DionEditor()
        {
        }
    };
    Application* CreateApplication(ApplicationCommandLineArgs args)
    {
        ApplicationSpecification spec;
        spec.Name             = "OpenGL";
        spec.WorkingDirectory = ".";
        spec.CommandLineArgs  = args;

        return new DionEditor(spec);
    }
}  // namespace Dionysen