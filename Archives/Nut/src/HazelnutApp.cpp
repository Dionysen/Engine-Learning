#include <Dionysen.h>
#include <EntryPoint.h>

#include "EditorLayer.h"

namespace Dionysen
{

    class Dionysennut : public Application
    {
      public:
        Dionysennut(const ApplicationSpecification& spec)
            : Application(spec)
        {
            PushLayer(new EditorLayer());
        }
    };

    Application* CreateApplication(ApplicationCommandLineArgs args)
    {
        ApplicationSpecification spec;
        spec.Name            = "Dionysennut";
        spec.CommandLineArgs = args;

        return new Dionysennut(spec);
    }

}  // namespace Dionysen
