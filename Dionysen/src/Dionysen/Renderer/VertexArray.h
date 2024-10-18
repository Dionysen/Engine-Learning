//
// Created by dionysen on 23-12-31.
//

#ifndef ENGINE_LEARNING_VERTEXARRAY_H
#define ENGINE_LEARNING_VERTEXARRAY_H

#include <vector>
#include "Buffer.h"

namespace Dionysen
{
    class DION_API VertexArray
    {
      public:
        virtual ~VertexArray() = default;

        virtual void Bind() const   = 0;
        virtual void Unbind() const = 0;

        virtual void AddVertexBuffer(const Ref<VertexBuffer>& vertexBuffer) = 0;
        virtual void SetIndexBuffer(const Ref<IndexBuffer>& indexBuffer)    = 0;

        virtual const std::vector<Ref<VertexBuffer>>& GetVertexBuffers() const = 0;
        virtual const Ref<IndexBuffer>&               GetIndexBuffer() const   = 0;

        static Ref<VertexArray> Create();
    };


}  // namespace Dionysen
#endif  // ENGINE_LEARNING_VERTEXARRAY_H
