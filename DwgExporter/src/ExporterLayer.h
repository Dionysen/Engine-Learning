#pragma once

#include <Dionysen.h>

namespace Dionysen
{
    class ExporterLayer : public Layer
    {
      public:
        ExporterLayer();
        virtual ~ExporterLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;

        void OnUpdate(Timestep ts) override;
        void OnImGuiRender() override;
        void OnEvent(Event& e) override;
    };
}  // namespace Dionysen