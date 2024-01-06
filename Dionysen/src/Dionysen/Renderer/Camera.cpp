//
// Created by dionysen on 23-12-31.
//

#include "Camera.h"
Dionysen::Camera::Camera(const glm::mat4& projection)
    : m_Projection(projection)
{
}
const glm::mat4& Dionysen::Camera::GetProjection() const
{
    return m_Projection;
}
