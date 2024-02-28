#ifndef FPSCAMERA_H
#define FPSCAMERA_H

#include <glm/gtc/matrix_transform.hpp>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <vector>
#include "Camera.h"
#include "Timestep.h"
#include "ApplicationEvent.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

namespace Dionysen
{
    // Defines several possible options for camera movement. Used as abstraction to stay away from window-system specific input methods
    enum Camera_Movement
    {
        FORWARD = 0,
        BACKWARD,
        LEFT,
        RIGHT,
        UP,
        DOWN,
        FASTER_FORWARD,
        FASTER_BACKWARD,
        FASTER_LEFT,
        FASTER_RIGHT,
        FASTER_UP,
        FASTER_DOWN
    };

    // Default camera values
    const float YAW         = -90.0f;
    const float PITCH       = 0.0f;
    const float SPEED       = 2.5f;
    const float SENSITIVITY = 0.2f;

    // An abstract camera class that processes input and calculates the corresponding Euler Angles, Vectors and Matrices for use in OpenGL
    class FPSCamera : public Camera
    {
      public:
        // constructor with vectors
        FPSCamera(glm::vec3 position, glm::vec3 up, float yaw, float pitch);
        // constructor with scalar values
        FPSCamera(float posX, float posY, float posZ, float upX, float upY, float upZ, float yaw, float pitch);

        // returns the view matrix calculated using Euler Angles and the LookAt Matrix
        glm::mat4 GetViewMatrix() const;
        glm::mat4 GetProjectionMatrix();
        glm::mat4 GetViewProjection();

        void OnUpdate(Timestep ts);
        void OnEvent(Event& e);

        void OnResize(float width, float height);

        inline void SetViewportSize(float width, float height)
        {
            m_ViewportWidth  = width;
            m_ViewportHeight = height;
            updateCameraVectors();
        }

      protected:
        bool OnKeyReleased(KeyReleasedEvent& e);
        bool OnMouseMoved(MouseMovedEvent& e);
        bool OnMouseScrolled(MouseScrolledEvent& e);
        void MovePosition(float velocity);

      private:
        float m_FOV = 45.0f, m_AspectRatio = 1.778f, m_NearClip = 0.1f, m_FarClip = 1000.0f;

        // camera Attributes
        glm::vec3 m_Front;
        glm::vec3 m_Up;
        glm::vec3 m_Right;
        glm::vec3 m_WorldUp;

        glm::mat4 m_ViewMatrix;
        glm::vec3 m_Position = { 0.0f, 0.0f, 3.0f };

        // camera options
        float     m_MovementSpeed;
        float     m_MouseSensitivity     = 0.2f;
        glm::vec2 m_InitialMousePosition = { 0.0f, 0.0f };
        bool      m_IsControlEnabled     = false;
        // euler Angles
        float m_Pitch = 0.0f, m_Yaw = 0.0f;

        // viewport
        float m_ViewportWidth = 1280, m_ViewportHeight = 720;

        // calculates the front vector from the Camera's (updated) Euler Angles
        void updateCameraVectors();
    };

}  // namespace Dionysen

#endif  // FPSCAMERA_H