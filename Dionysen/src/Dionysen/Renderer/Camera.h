//
// Created by dionysen on 23-12-31.
//

#ifndef ENGINE_LEARNING_CAMERA_H
#define ENGINE_LEARNING_CAMERA_H

#include "glm/glm.hpp"
namespace Dionysen
{
    class Camera
    {
      public:
        Camera() = default;
        explicit Camera(const glm::mat4& projection);

        virtual ~Camera() = default;

        const glm::mat4& GetProjection() const;

      protected:
        glm::mat4 m_Projection = glm::mat4(1.0f);
    };
}  // namespace Dionysen


#endif  // ENGINE_LEARNING_CAMERA_H
