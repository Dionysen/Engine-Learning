//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_RENDERERAPI_H
#define ENGINE_LEARNING_RENDERERAPI_H

#pragma once

#include "VertexArray.h"
#include <glm/glm.hpp>
#include "Base.h"

namespace Dionysen
{

    class DION_API RendererAPI
    {
      public:
        enum class API
        {
            None   = 0,
            OpenGL = 1
        };

      public:
        virtual ~RendererAPI() = default;

        virtual void Init()                                                               = 0;
        virtual void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) = 0;
        virtual void SetClearColor(const glm::vec4& color)                                = 0;
        virtual void Clear()                                                              = 0;

        virtual void DrawIndexed(const Ref<VertexArray>& vertexArray, uint32_t indexCount = 0) = 0;
        virtual void DrawLines(const Ref<VertexArray>& vertexArray, uint32_t vertexCount)      = 0;

        virtual void SetLineWidth(float width) = 0;

        static API GetAPI()
        {
            return s_API;
        }
        static Scope<RendererAPI> Create();

      private:
        static API s_API;
    };

}  // namespace Dionysen



#endif  // ENGINE_LEARNING_RENDERERAPI_H
