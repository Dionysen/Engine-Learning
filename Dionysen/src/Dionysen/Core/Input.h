#pragma clang diagnostic push
#pragma ide diagnostic   ignored "OCUnusedGlobalDeclarationInspection"

#pragma once
#include "Base.h"
#include "KeyCodes.h"
#include "MouseCodes.h"
#include "glm/glm.hpp"

namespace Dionysen
{
    class  Input
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
#pragma clang diagnostic pop