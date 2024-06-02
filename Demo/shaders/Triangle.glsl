// Flat Color Shader

#type vertex
#version 410 core
layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec2 a_TexCoord;

layout(location = 0) out vec2 TexCoord;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;

void main()
{
    TexCoord    = a_TexCoord;
    gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}


#type fragment
#version 410 core
layout(location = 0) in vec2 TexCoord;

layout(location = 0) out vec4 FragColor;

uniform vec4      u_Color;
uniform sampler2D u_Texture;

void main()
{
    FragColor = texture(u_Texture, TexCoord);
}