//--------------------------
// - Hazel 2D -
// Renderer2D Circle Shader
// --------------------------

#type vertex
#version 410 core

layout(location = 0) in vec3 a_WorldPosition;
layout(location = 1) in vec3 a_LocalPosition;
layout(location = 2) in vec4 a_Color;
layout(location = 3) in float a_Thickness;
layout(location = 4) in float a_Fade;
layout(location = 5) in int a_EntityID;

layout(std140) uniform Camera
{
    mat4 u_ViewProjection;
};

out vec3     v_LocalPosition;  // 将结构体中的成员单独定义
out vec4     v_Color;
out float    v_Thickness;
out float    v_Fade;
flat out int v_EntityID;


void main()
{
    v_LocalPosition = a_LocalPosition;
    v_Color         = a_Color;
    v_Thickness     = a_Thickness;
    v_Fade          = a_Fade;
    v_EntityID      = a_EntityID;

    gl_Position = u_ViewProjection * vec4(a_WorldPosition, 1.0);
}

#type fragment
#version 410 core

layout(location = 0) out vec4 o_Color;
layout(location = 1) out int o_EntityID;

in vec3     v_LocalPosition;  // 将结构体中的成员单独定义
in vec4     v_Color;
in float    v_Thickness;
in float    v_Fade;
flat in int v_EntityID;

void main()
{
    // Calculate distance and fill circle with white
    float distance = 1.0 - length(v_LocalPosition);
    float circle   = smoothstep(0.0, v_Fade, distance);
    circle *= smoothstep(v_Thickness + v_Fade, v_Thickness, distance);

    if (circle == 0.0)
        discard;

    // Set output color
    o_Color = v_Color;
    o_Color.a *= circle;

    o_EntityID = v_EntityID;
}
