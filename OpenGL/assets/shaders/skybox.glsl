
// Skybox Color Shader

#type vertex
#version 450 core

in vec3 a_Position;
in vec2 a_TexCoord;

out vec o_TexCoord;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;

void main()
{
    gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}

#type fragment
#version 450 core

in vec2 o_TexCoord;

out vec4 color;

uniform samplerCube texture;

void main()
{
    color = vec4(texture(texture, o_TexCoord));
}