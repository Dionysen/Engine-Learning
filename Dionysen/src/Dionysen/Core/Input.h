#pragma once
#include "Base.h"
#include "KeyCodes.h"
#include "MouseCodes.h"
#include "glm/glm.hpp"

namespace Dionysen
{
    class DION_API Input
    {
      public:
        static bool      IsKeyPressed(KeyCode key);
        static bool      IsMouseButtonPressed(MouseCode button);
        static glm::vec2 GetMousePosition();
        static float     GetMouseX();
        static float     GetMouseY();

      private:
        static Input* s_Instance;
    };
}  // namespace Dionysen