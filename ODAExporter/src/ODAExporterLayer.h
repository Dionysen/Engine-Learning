#pragma once

#include <Dionysen.h>

namespace Dionysen
{
    class ODAExporterLayer : public Layer
    {
      public:
        ODAExporterLayer();
        virtual ~ODAExporterLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;

        void OnUpdate(Timestep ts) override;
        void OnImGuiRender() override;
        void OnEvent(Event& e) override;
    };
}  // namespace Dionysen