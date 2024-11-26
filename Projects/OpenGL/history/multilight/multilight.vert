// Flat Color Shader

#version 450 core

in vec3 a_Position;
in vec3 a_Normal;
in vec2 a_TexCoords;

out vec3 o_Normal;
out vec3 o_FragPosition;
out vec2 o_TexCoords;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;


void main()
{
    o_Normal       = mat3(transpose(inverse(u_Transform))) * a_Normal;
    o_TexCoords    = a_TexCoords;
    o_FragPosition = vec3(u_Transform * vec4(a_Position, 1.0));
    gl_Position    = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}
