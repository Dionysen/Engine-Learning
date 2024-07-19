// Flat Color Shader

#type vertex
#version 450 core

in vec3 a_Position;
in vec3 a_Normal;

out vec3 o_Normal;
out vec3 o_FragPosition;

uniform mat4 u_ViewProjection;
uniform mat4 u_Transform;


void main()
{
    o_Normal       = a_Normal;
    o_FragPosition = vec3(u_Transform * vec4(a_Position, 1.0));
    gl_Position    = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}

#type fragment
#version 450 core

uniform vec3 u_ObjectColor;
uniform vec3 u_ViewPos;

in vec3 o_Normal;
in vec3 o_FragPosition;

struct Material
{
    vec3  ambient;
    vec3  diffuse;
    vec3  specular;
    float shininess;
};

struct Light
{
    vec3 position;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

uniform Material u_Material;
uniform Light u_Light;

out vec4 color;

void main()
{
    // env light
    vec3  ambient         = u_Material.ambient * u_Light.ambient;
    // diffuse
    vec3 norm     = normalize(o_Normal);
    vec3 lightDir = normalize(u_Light.position - o_FragPosition);

    float diff    = max(dot(norm, lightDir), 0.0);
    vec3  diffuse = (diff * u_Material.diffuse) * u_Light.diffuse;

    // specular
    float specularStrength = 0.5;
    vec3  viewDir          = normalize(u_ViewPos - o_FragPosition);
    vec3  reflectDir       = reflect(-lightDir, norm);
    float spec     = pow(max(dot(viewDir, reflectDir), 0.0), u_Material.shininess);
    vec3  specular = (u_Material.specular * spec) * u_Light.specular;

    vec3 result = (ambient + diffuse + specular);

    color       = vec4(result, 1.0);
}