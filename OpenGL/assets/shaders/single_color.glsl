
#type vertex

#version 330 core
layout(location = 0) in vec3 aPos;
layout(location = 1) in vec3 aNormal;
layout(location = 2) in vec2 aTexCoords;

out vec2 TexCoords;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

uniform vec3 u_ViewPos;


out vec3 Normal;
void     main()
{
    Normal      = mat3(transpose(inverse(model))) * aNormal;
    TexCoords   = aTexCoords;
    float dis   = distance(u_ViewPos, vec3(0.0, 0.0, 0.0));
    gl_Position = projection * view * (model * vec4(aPos, 1.0) + vec4(0.1 / dis * Normal, 0));
}



#type fragment

#version 330 core
out vec4 FragColor;

void main()
{
    FragColor = vec4(0.04, 0.28, 0.26, 1.0);
}