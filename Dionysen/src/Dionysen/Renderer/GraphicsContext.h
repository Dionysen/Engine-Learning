#pragma once
#include "dspch.h"

namespace Dionysen
{
    class GraphicsContext
    {
      public:
        virtual ~GraphicsContext() = default;

        virtual void Init()            = 0;
        virtual void DionSwapBuffers() = 0;

        static Scope<GraphicsContext> Create(void* window, void* hdc = nullptr, void* hglrc = nullptr);
    };
}  // namespace Dionysen
