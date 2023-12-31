#pragma once
#include "Application.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include <GL/glew.h>
#include "Layer.h"
#include "PlatformUtils.h"
#include "WindowsWindow.h"
#include "Event.h"

namespace Dionysen
{
    Application* Application::s_Instance = nullptr;

    const char* vertexShaderSource   = "#version 330 core\n"
                                       "layout (location = 0) in vec3 aPos;\n"
                                       "void main()\n"
                                       "{\n"
                                       "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
                                       "}\0";
    const char* fragmentShaderSource = "#version 330 core\n"
                                       "out vec4 FragColor;\n"
                                       "void main()\n"
                                       "{\n"
                                       "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
                                       "}\n\0";


#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application::Application()
    {
        DION_CORE_ASSERT(!s_Instance, "Application already exists!")
        s_Instance = this;

        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));  // ###

        m_ImGuiLayer = new ImGuiLayer();
        PushLayer(m_ImGuiLayer);


        unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
        glCompileShader(vertexShader);
        // check for shader compile errors
        int  success;
        char infoLog[512];
        glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
        }
        // fragment shader
        unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
        glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
        glCompileShader(fragmentShader);
        // check for shader compile errors
        glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
        }
        // link shaders
        shaderProgram = glCreateProgram();
        glAttachShader(shaderProgram, vertexShader);
        glAttachShader(shaderProgram, fragmentShader);
        glLinkProgram(shaderProgram);
        // check for linking errors
        glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
        if (!success)
        {
            glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
        }
        glDeleteShader(vertexShader);
        glDeleteShader(fragmentShader);

        float vertices[] = {
            0.5f,  0.5f,  0.0f,  // top right
            0.5f,  -0.5f, 0.0f,  // bottom right
            -0.5f, -0.5f, 0.0f,  // bottom left
            -0.5f, 0.5f,  0.0f   // top left
        };
        unsigned int indices[] = {
            // note that we start from 0!
            0, 1, 3,  // first Triangle
            1, 2, 3   // second Triangle
        };

        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);
        glGenBuffers(1, &EBO);
        glBindVertexArray(VAO);

        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindVertexArray(0);
    }

    void Application::PushLayer(Layer* layer)
    {
        m_LayerStack.PushLayer(layer);
        layer->OnAttach();
    }
    void Application::PushOverlay(Layer* layer)
    {
        m_LayerStack.PushOverlay(layer);
        layer->OnAttach();
    }

    void Application::OnEvent(Event& e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
        dispatcher.Dispatch<WindowResizeEvent>(BIND_EVENT_FN(OnWindowResize));

        // Print event for debug
        // DION_CORE_TRACE("{0}", e.ToString());

        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin();)
        {
            (*--it)->OnEvent(e);
            if (e.isHandled())
                break;
        }
    }

    Application::~Application() = default;

    void Application::Run()
    {
        DION_CORE_INFO("Application::{0} is running!", m_appName);
        while (m_Running)
        {
            auto     time     = Time::GetTime();
            Timestep timestep = time - m_LastFrameTime;
            m_LastFrameTime   = time;

            glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glUseProgram(shaderProgram);
            glBindVertexArray(VAO);
            glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);

            if (!m_Minimized)
            {
                // Update all layers
                for (Layer* layer : m_LayerStack)
                {
                    layer->OnUpdate(timestep);
                }

                // Render ImGuibackend and ImGui of all layers
                m_ImGuiLayer->Begin();
                for (Layer* layer : m_LayerStack)
                {
                    layer->OnImGuiRender();
                }
                m_ImGuiLayer->End();
            }
            m_Window->OnUpdate();  // Poll event and swap buffer
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent& e)
    {
        DION_CORE_WARN("Closing Window...");
        m_Running = false;
        return true;
    }

    bool Application::OnWindowResize(WindowResizeEvent& e)
    {
        if (e.GetWidth() == 0 || e.GetHeight() == 0)
        {
            m_Minimized = true;
            return false;
        }
        m_Minimized = false;
        return false;
    }
}  // namespace Dionysen
