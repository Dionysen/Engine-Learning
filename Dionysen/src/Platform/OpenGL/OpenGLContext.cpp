#pragma once
#include <GL/glew.h>
#include "OpenGLContext.h"
#include "Base.h"
#include "Log.h"

namespace Dionysen
{
    OpenGLContext::OpenGLContext(GLFWwindow* WindowHandle)
        : m_WindowHandle(WindowHandle)
    {
        DION_CORE_ASSERT(WindowHandle, "WindowHandle is null!")
    }
    void OpenGLContext::Init()
    {
        glfwMakeContextCurrent(m_WindowHandle);
        glewExperimental = GL_TRUE;
        unsigned int err = glewInit();
        DION_CORE_ASSERT(GLEW_OK == err, "Error initing Glew: ", err)

        DION_CORE_INFO("OpenGL Info:");
        DION_CORE_INFO("    Vender: {0}", (char*)glGetString(GL_VENDOR));
        DION_CORE_INFO("    Renderer: {0}", (char*)glGetString(GL_RENDERER));
        DION_CORE_INFO("    Version: {0}", (char*)glGetString(GL_VERSION));
        const std::string glVersion = (char*)glGetString(GL_VERSION);

        glGetError();
    }

    void OpenGLContext::SwapBuffers()
    {
        glfwSwapBuffers(m_WindowHandle);
    }

}  // namespace Dionysen
