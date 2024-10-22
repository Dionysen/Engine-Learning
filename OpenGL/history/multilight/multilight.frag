#version 450 core

uniform vec3 u_ObjectColor;
uniform vec3 u_ViewPos;

in vec3 o_Normal;
in vec3 o_FragPosition;
in vec2 o_TexCoords;

struct Material {
    sampler2D diffuse;
    sampler2D specular;    
    float shininess;
};

struct Light
{
    vec3 position;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;

    float constant;
    float linear;
    float quadratic;
};


struct DirLight {
    vec3 direction;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};  

struct PointLight {
    vec3 position;

    float constant;
    float linear;
    float quadratic;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};  
#define NR_POINT_LIGHTS 4
uniform PointLight pointLights[NR_POINT_LIGHTS];


uniform DirLight u_DirLight;

uniform Material u_Material;
uniform Light u_Light;

out vec4 color;


vec3 CalcPointLight(PointLight light, vec3 normal, vec3 fragPos, vec3 viewDir)
{
    vec3 lightDir = normalize(light.position - fragPos);
    // 漫反射着色
    float diff = max(dot(normal, lightDir), 0.0);
    // 镜面光着色
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), u_Material.shininess);
    // 衰减
    float distance    = length(light.position - fragPos);
    float attenuation = 1.0 / (light.constant + light.linear * distance + 
                 light.quadratic * (distance * distance));    
    // 合并结果
    vec3 ambient  = light.ambient  * vec3(texture(u_Material.diffuse, o_TexCoords));
    vec3 diffuse  = light.diffuse  * diff * vec3(texture(u_Material.diffuse, o_TexCoords));
    vec3 specular = light.specular * spec * vec3(texture(u_Material.specular, o_TexCoords));
    ambient  *= attenuation;
    diffuse  *= attenuation;
    specular *= attenuation;
    return (ambient + diffuse + specular);
}


vec3 CalcDirLight(DirLight light, vec3 normal, vec3 viewDir)
{
    vec3 lightDir = normalize(-light.direction);
    // 漫反射着色
    float diff = max(dot(normal, lightDir), 0.0);
    // 镜面光着色
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), u_Material.shininess);
    // 合并结果
    vec3 ambient  = light.ambient  * vec3(texture(u_Material.diffuse, o_TexCoords));
    vec3 diffuse  = light.diffuse  * diff * vec3(texture(u_Material.diffuse, o_TexCoords));
    vec3 specular = light.specular * spec * vec3(texture(u_Material.specular, o_TexCoords));
    return (ambient + diffuse + specular);
}


void main()
{
   // 属性
    vec3 norm = normalize(o_Normal);
    vec3 viewDir = normalize(u_ViewPos - o_FragPosition);

    // 第一阶段：定向光照
    vec3 result = CalcDirLight(u_DirLight, norm, viewDir);
    // 第二阶段：点光源
    for(int i = 0; i < NR_POINT_LIGHTS; i++)
        result += CalcPointLight(pointLights[i], norm, o_FragPosition, viewDir);    
    // 第三阶段：聚光
    //result += CalcSpotLight(spotLight, norm, FragPos, viewDir);    

    color = vec4(result, 1.0);
}