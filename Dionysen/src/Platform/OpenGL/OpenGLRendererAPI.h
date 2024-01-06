//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_OPENGLRENDERERAPI_H
#define ENGINE_LEARNING_OPENGLRENDERERAPI_H


#pragma once

#include "RendererAPI.h"

namespace Dionysen
{

    class OpenGLRendererAPI : public RendererAPI
    {
      public:
        virtual void Init() override;
        virtual void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) override;

        virtual void SetClearColor(const glm::vec4& color) override;
        virtual void Clear() override;

        virtual void DrawIndexed(const Ref<VertexArray>& vertexArray, uint32_t indexCount = 0) override;
        virtual void DrawLines(const Ref<VertexArray>& vertexArray, uint32_t vertexCount) override;

        virtual void SetLineWidth(float width) override;
    };


}  // namespace Dionysen



#endif  // ENGINE_LEARNING_OPENGLRENDERERAPI_H
