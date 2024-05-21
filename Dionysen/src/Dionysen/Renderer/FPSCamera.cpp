#include "FPSCamera.h"
#include "dspch.h"
#include "Input.h"
#include "KeyCodes.h"
#include "MouseCodes.h"
#include <GLFW/glfw3.h>
#include "Application.h"

namespace Dionysen
{
    FPSCamera::FPSCamera(glm::vec3 position, glm::vec3 up, float yaw, float pitch)
        : m_Front(glm::vec3(0.0f, 0.0f, -1.0f))
        , m_MovementSpeed(SPEED)
        , m_MouseSensitivity(SENSITIVITY)
    {
        m_Position = position;
        m_WorldUp  = up;
        m_Yaw      = yaw;
        m_Pitch    = pitch;
        updateCameraVectors();
    }

    FPSCamera::FPSCamera(float posX, float posY, float posZ, float upX, float upY, float upZ, float yaw, float pitch)
        : m_Front(glm::vec3(0.0f, 0.0f, -1.0f))
        , m_MovementSpeed(SPEED)
        , m_MouseSensitivity(SENSITIVITY)
    {
        m_Position = glm::vec3(posX, posY, posZ);
        m_WorldUp  = glm::vec3(upX, upY, upZ);
        m_Yaw      = yaw;
        m_Pitch    = pitch;
        updateCameraVectors();
    }

    glm::mat4 FPSCamera::GetViewMatrix() const
    {
        return glm::lookAt(m_Position, m_Position + m_Front, m_Up);
    }

    glm::mat4 FPSCamera::GetProjectionMatrix()
    {
        m_AspectRatio = m_ViewportWidth / m_ViewportHeight;
        return glm::perspective(glm::radians(m_FOV), m_AspectRatio, m_NearClip, m_FarClip);
    }

    glm::mat4 FPSCamera::GetViewProjectionMatrix()
    {
        return GetProjectionMatrix() * GetViewMatrix();
    }

    void FPSCamera::OnUpdate(Timestep ts)
    {
        // Move
        float velocity = m_MovementSpeed * ts;
        MovePosition(velocity);
    }

    void FPSCamera::OnEvent(Event& e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<KeyReleasedEvent>(DION_BIND_EVENT_FN(FPSCamera::OnKeyReleased));
        dispatcher.Dispatch<MouseMovedEvent>(DION_BIND_EVENT_FN(FPSCamera::OnMouseMoved));
        dispatcher.Dispatch<MouseScrolledEvent>(DION_BIND_EVENT_FN(FPSCamera::OnMouseScrolled));
    }

    void FPSCamera::OnResize(float width, float height)
    {
    }

    bool FPSCamera::OnKeyReleased(KeyReleasedEvent& e)
    {
        Application& app = Application::Get();
        if (Input::IsKeyPressed(Key::LeftAlt) && e.GetKeyCode() == Key::C)
        {
            if (!m_IsControlEnabled)
            {
                glfwSetInputMode((GLFWwindow*)app.GetWindow().GetNativeWindow(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
                m_IsControlEnabled = true;
            }
            else
            {
                glfwSetInputMode((GLFWwindow*)app.GetWindow().GetNativeWindow(), GLFW_CURSOR, GLFW_CURSOR_NORMAL);
                m_IsControlEnabled = false;
            }
        }
        return false;
    }

    bool FPSCamera::OnMouseMoved(MouseMovedEvent& e)
    {
        const glm::vec2& mouse = e.GetMousePosition();
        glm::vec2        delta = (mouse - m_InitialMousePosition) * 0.3f;
        m_InitialMousePosition = mouse;
        if (m_IsControlEnabled)
        {
            delta.x *= m_MouseSensitivity;
            delta.y *= m_MouseSensitivity;

            m_Yaw += delta.x;
            m_Pitch -= delta.y;

            // make sure that when pitch is out of bounds, screen doesn't get flipped

            if (m_Pitch > 89.0f)
                m_Pitch = 89.0f;
            if (m_Pitch < -89.0f)
                m_Pitch = -89.0f;

            // update Front, Right and Up Vectors using the updated Euler angles
            updateCameraVectors();
        }
        return true;
    }

    bool FPSCamera::OnMouseScrolled(MouseScrolledEvent& e)
    {
        if (m_IsControlEnabled)
        {
            m_FOV -= static_cast<float>(e.GetYOffset());
            if (m_FOV < 1.0f)
                m_FOV = 1.0f;
            if (m_FOV > 45.0f)
                m_FOV = 45.0f;
        }
        return true;
    }

    void FPSCamera::MovePosition(float velocity)
    {
        if (m_IsControlEnabled)
        {
            // Move
            if (Input::IsKeyPressed(Key::W))
                m_Position += m_Front * velocity;
            if (Input::IsKeyPressed(Key::S))
                m_Position -= m_Front * velocity;
            if (Input::IsKeyPressed(Key::A))
                m_Position -= m_Right * velocity;
            if (Input::IsKeyPressed(Key::D))
                m_Position += m_Right * velocity;

            // Up and Down
            if (Input::IsKeyPressed(Key::Space))
                m_Position += m_Up * velocity;
            if (Input::IsKeyPressed(Key::LeftControl))
                m_Position -= m_Up * velocity;

            // Faster
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::W))
                m_Position += m_Front * (10 * velocity);
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::S))
                m_Position -= m_Front * (10 * velocity);
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::A))
                m_Position -= m_Right * (10 * velocity);
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::D))
                m_Position += m_Right * (10 * velocity);
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::Space))
                m_Position += m_Up * (10 * velocity);
            if (Input::IsKeyPressed(Key::LeftShift) && Input::IsKeyPressed(Key::LeftControl))
                m_Position -= m_Up * (10 * velocity);
        }
    }

    void FPSCamera::updateCameraVectors()
    {
        // calculate the new Front vector
        glm::vec3 front{};
        front.x = cos(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));
        front.y = sin(glm::radians(m_Pitch));
        front.z = sin(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));
        m_Front = glm::normalize(front);
        // also re-calculate the Right and Up vector
        m_Right = glm::normalize(glm::cross(m_Front,
                                            m_WorldUp));  // normalize the vectors, because their length gets closer to 0 the more you look up or down
                                                          // which results in slower movement.
        m_Up = glm::normalize(glm::cross(m_Right, m_Front));
    }

}  // namespace Dionysen
