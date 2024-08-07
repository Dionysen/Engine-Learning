// Flat Color Shader
#type vertex
#version 330 core
layout (location = 0) in vec3 aPosition;

out vec3 TexCoords;

uniform mat4 u_ViewProjection;

void main()
{
    TexCoords = aPosition;
    vec4 pos = u_ViewProjection * vec4(aPosition, 1.0);
    gl_Position = pos.xyww; 
}  


#type fragment
#version 330 core
out vec4 FragColor;

in vec3 TexCoords;

uniform samplerCube skybox;

void main()
{    
    FragColor = texture(skybox, TexCoords);
}