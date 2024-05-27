#include "dspch.h"
#include "OpenGLUniformBuffer.h"

#include <GL/glew.h>

namespace Dionysen
{

    OpenGLUniformBuffer::OpenGLUniformBuffer(uint32_t size, uint32_t binding)
    {
#ifdef DION_PLATFORM_MACOSX
        glGenBuffers(1, &m_RendererID);
        glBufferData(m_RendererID, size, nullptr, GL_DYNAMIC_DRAW);
#else
        glCreateBuffers(1, &m_RendererID);
        glNamedBufferData(m_RendererID, size, nullptr, GL_DYNAMIC_DRAW);  // TODO: investigate usage hint
#endif

        glBindBufferBase(GL_UNIFORM_BUFFER, binding, m_RendererID);
    }

    OpenGLUniformBuffer::~OpenGLUniformBuffer()
    {
        glDeleteBuffers(1, &m_RendererID);
    }


    void OpenGLUniformBuffer::SetData(const void* data, uint32_t size, uint32_t offset)
    {
        glNamedBufferSubData(m_RendererID, offset, size, data);
    }

}  // namespace Dionysen
