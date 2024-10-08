#pragma once

#include "Layer.h"

namespace Dionysen
{
    class DION_API ImGuiLayer : public Layer
    {
      public:
        ImGuiLayer();
        ~ImGuiLayer() override;

        void OnAttach() override;
        void OnDetach() override;
        void OnEvent(Event& e) override;

        void Begin();
        void End();

        void BlockEvents(bool block)
        {
            m_BlockEvents = block;
        }

        void SetDarkThemeColors();

        uint32_t GetActiveWidgetID() const;

      private:
        bool m_BlockEvents = true;
    };
}  // namespace Dionysen