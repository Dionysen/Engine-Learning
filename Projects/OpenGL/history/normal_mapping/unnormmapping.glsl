// Flat Color Shader

#type vertex
#version 450 core

layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec3 a_Normal;
layout(location = 2) in vec2 a_TexCoord;
layout(location = 3) in vec3 a_Tangent;
layout(location = 4) in vec3 a_Bitangent;


out vec3 o_Normal;
out vec3 o_FragPosition;
out vec2 o_TexCoord;
out vec3 o_TangentLightPos;
out vec3 o_TangentViewPos;
out vec3 o_TangentFragPos;

out vec3 o_LightPos;
out vec3 o_ViewPos;

uniform vec3 u_ViewPos;
uniform vec3 u_LightPos;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;

void main()
{
    o_Normal       = a_Normal;
    o_TexCoord     = a_TexCoord;
    o_FragPosition = vec3(u_Transform * vec4(a_Position, 1.0));
    gl_Position    = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);

    // mat3 normalMatrix = transpose(inverse(mat3(u_Transform)));
    // vec3 T            = normalize(normalMatrix * a_Tangent);
    // vec3 B            = normalize(normalMatrix * a_Bitangent);
    // vec3 N            = normalize(normalMatrix * a_Normal);

    // mat3 TBN = transpose(mat3(T, B, N));

    vec3 T = normalize(vec3(u_Transform * vec4(a_Tangent, 0.0)));
    vec3 N = normalize(vec3(u_Transform * vec4(a_Normal, 0.0)));
    // re-orthogonalize T with respect to N
    T = normalize(T - dot(T, N) * N);
    // then retrieve perpendicular vector B with the cross product of T and N
    vec3 B = cross(T, N);

    mat3 TBN = mat3(T, B, N);


    o_TangentLightPos = TBN * u_LightPos;
    o_TangentViewPos  = TBN * u_ViewPos;
    o_TangentFragPos  = TBN * o_FragPosition;

    o_LightPos = u_LightPos;
    o_ViewPos  = u_ViewPos;
}

#type fragment
#version 450 core

in vec3 o_Normal;
in vec3 o_FragPosition;
in vec2 o_TexCoord;
in vec3 o_TangentLightPos;
in vec3 o_TangentViewPos;
in vec3 o_TangentFragPos;
in vec3 o_LightPos;
in vec3 o_ViewPos;

struct Light
{
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

uniform bool u_NormalMapping;

uniform Light u_Light;

uniform sampler2D texture_diffuse1;
uniform sampler2D texture_normal1;
uniform sampler2D texture_specular1;

out vec4 color;

void main()
{
    if (u_NormalMapping)
    {
        // env light
        float ambientStrength = 0.1;
        vec3  ambient         = ambientStrength * u_Light.ambient * texture(texture_diffuse1, o_TexCoord).rgb;

        // diffuse
        vec3 normal = texture(texture_normal1, o_TexCoord).rgb;
        vec3 norm   = normalize(normal * 2.0 - 1.0);

        vec3 lightDir = normalize(o_TangentLightPos - o_TangentFragPos);

        float diff    = max(dot(norm, lightDir), 0.0);
        vec3  diffuse = diff * u_Light.diffuse * texture(texture_diffuse1, o_TexCoord).rgb;

        // specular
        float specularStrength = 0.5;
        vec3  viewDir          = normalize(o_TangentViewPos - o_TangentFragPos);
        vec3  reflectDir       = reflect(-lightDir, norm);
        vec3  halfwayDir       = normalize(lightDir + viewDir);

        float spec     = pow(max(dot(norm, halfwayDir), 0.0), 64);
        vec3  specular = specularStrength * spec * u_Light.specular * texture(texture_specular1, o_TexCoord).rgb;

        // result
        vec3 result = ambient + diffuse + specular;
        color       = vec4(result, 1.0);
    }
    else
    {
        float ambientStrength = 0.1;
        vec3  ambient         = ambientStrength * u_Light.ambient * texture(texture_diffuse1, o_TexCoord).rgb;


        vec3 norm     = normalize(o_Normal);
        vec3 lightDir = normalize(o_LightPos - o_FragPosition);

        float diff    = max(dot(norm, lightDir), 0.0);
        vec3  diffuse = diff * u_Light.diffuse * texture(texture_diffuse1, o_TexCoord).rgb;

        float specularStrength = 0.5;
        vec3  viewDir          = normalize(o_ViewPos - o_FragPosition);
        vec3  reflectDir       = reflect(-lightDir, norm);
        float spec             = pow(max(dot(viewDir, reflectDir), 0.0), 64);
        vec3  specular         = specularStrength * spec * u_Light.specular * texture(texture_specular1, o_TexCoord).rgb;

        vec3 result = ambient + diffuse + specular;
        color       = vec4(result, 1.0);
    }
}