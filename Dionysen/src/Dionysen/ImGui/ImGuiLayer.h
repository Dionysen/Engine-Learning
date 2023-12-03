#pragma once

#include "Layer.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

namespace Dionysen
{
    class DION_API ImGuiLayer : public Layer
    {
      public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetach();
        void OnEvent(Event& e);

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