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
	o_Normal = a_Normal;
	o_FragPosition = vec3(u_Transform * vec4(a_Position, 1.0));
	gl_Position = u_ViewProjection * u_Transform * vec4(a_Position, 1.0);
}

#type fragment
#version 450 core

uniform vec3 u_ObjectColor;
uniform vec3 u_LightColor;
uniform vec3 u_LightPos;
uniform vec3 u_ViewPos;

in vec3 o_Normal;
in vec3 o_FragPosition;

out vec4 color;

void main()
{
	// env light
	float ambientStrength = 0.1;
	vec3 ambient = ambientStrength * u_LightColor;

	// diffuse
	vec3 norm = normalize(o_Normal);
	vec3 lightDir = normalize(u_LightPos - o_FragPosition);

	float diff = max(dot(norm, lightDir), 0.0);
	vec3 diffuse = diff * u_LightColor;

	// specular
	float specularStrength = 0.5;
	vec3 viewDir = normalize(u_ViewPos - o_FragPosition);
	vec3 reflectDir = reflect(-lightDir, norm);

	float spec = pow(max(dot(viewDir, reflectDir), 0.0), 64);
	vec3 specular = specularStrength * spec * u_LightColor;

	vec3 result = (ambient + diffuse + specular) * u_ObjectColor;
	color = vec4(result, 1.0);
}