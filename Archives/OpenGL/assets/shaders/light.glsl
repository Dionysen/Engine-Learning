// Flat Color Shader

#type vertex
#version 450 core

in vec3 a_Position;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;

void main()
{
    gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}

#type fragment
#version 450 core

uniform vec4 u_Color;
out vec4     color;

void main()
{
    color = vec4(1.0);
}