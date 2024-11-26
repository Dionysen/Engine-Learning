#type vertex

#version 450 core
layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec3 a_Normal;
layout(location = 2) in vec2 a_TexCoords;

out vec2 TexCoords;
out vec3 o_Position;
out vec3 o_Normal;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;

void main()
{
    TexCoords   = a_TexCoords;
    o_Normal    = mat3(transpose(inverse(model))) * a_Normal;
    o_Position  = vec3(u_ViewProjection * u_Transform * vec4(a_Position, 1.0));
    gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}

#type fragment

#version 450 core
out vec4 FragColor;

in vec2 TexCoords;
in vec3 o_Position;
in vec3 o_Normal;

uniform sampler2D texture_diffuse1;
uniform sampler2D texture_skybox;

uniform vec3 u_CameraPos;
uniform bool u_isReflect;

void main()
{
    // if (u_isReflect)
    // {
    vec3 I    = normalize(o_Position - u_CameraPos);
    vec3 R    = reflect(I, normalize(o_Normal));
    FragColor = vec4(texture(texture_skybox, R).rgb, 1.0);
    // }
    // else
    // {
    //     FragColor = texture(texture_diffuse1, TexCoords);
    //     // FragColor = vec4(0.3, 0.2, 0.1, 1.0);
    // }
}