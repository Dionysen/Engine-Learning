#pragma once
#include "Event.h"
#include "Layer.h"
#include "TimeStep.h"
#include <Dionysen.h>

namespace Dionysen
{
    class EditorLayer : public Layer
    {
      public:
        EditorLayer();
        virtual ~EditorLayer();

        void OnAttach() override;
        void OnDetach() override;

        void OnUpdate(Timestep ts) override;
        void OnImGuiRender() override;
        void OnEvent(Event& e) override;

      private:
        void setupMenuBar();
        void setupToolbar();
    };
}  // namespace Dionysen
