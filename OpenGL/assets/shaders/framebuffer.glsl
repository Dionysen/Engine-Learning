#type vertex
#version 330 core
layout(location = 0) in vec2 aPos;
layout(location = 1) in vec2 aTexCoords;

out vec2 TexCoords;

void main()
{
    TexCoords   = aTexCoords;
    gl_Position = vec4(aPos.x, aPos.y, 0.0, 1.0);
}

#type fragment
#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;
uniform int       u_Gray;

const float offset = 1.0 / 300.0;

void main()
{
    vec3  col = texture(screenTexture, TexCoords).rgb;
    float average;

    if (u_Gray == 0)
    {
        FragColor = vec4(col, 1.0f);
    }
    if (u_Gray == 1)
    {
        average   = (col.r + col.g + col.b) / 3.0;
        FragColor = vec4(average, average, average, 1.0);
    }
    if (u_Gray == 2)
    {
        average   = 0.2126 * col.r + 0.7152 * col.g + 0.0722 * col.b;
        FragColor = vec4(average, average, average, 1.0);
    }
    if (u_Gray == 3)
    {
        float kernel[9]  = float[](-1, -1, -1, -1, 9, -1, -1, -1, -1);
        vec2  offsets[9] = vec2[](vec2(-offset, offset),   // 左上
                                 vec2(0.0f, offset),      // 正上
                                 vec2(offset, offset),    // 右上
                                 vec2(-offset, 0.0f),     // 左
                                 vec2(0.0f, 0.0f),        // 中
                                 vec2(offset, 0.0f),      // 右
                                 vec2(-offset, -offset),  // 左下
                                 vec2(0.0f, -offset),     // 正下
                                 vec2(offset, -offset)    // 右下
        );
        vec3  sampleTex[9];
        for (int i = 0; i < 9; i++)
        {
            sampleTex[i] = vec3(texture(screenTexture, TexCoords.st + offsets[i]));
        }
        vec3 col = vec3(0.0);
        for (int i = 0; i < 9; i++)
            col += sampleTex[i] * kernel[i];

        FragColor = vec4(col, 1.0);
    }
    if (u_Gray == 4)
    {
        float kernel[9]  = float[](1.0 / 16, 2.0 / 16, 1.0 / 16, 2.0 / 16, 4.0 / 16, 2.0 / 16, 1.0 / 16, 2.0 / 16, 1.0 / 16);
        vec2  offsets[9] = vec2[](vec2(-offset, offset),   // 左上
                                 vec2(0.0f, offset),      // 正上
                                 vec2(offset, offset),    // 右上
                                 vec2(-offset, 0.0f),     // 左
                                 vec2(0.0f, 0.0f),        // 中
                                 vec2(offset, 0.0f),      // 右
                                 vec2(-offset, -offset),  // 左下
                                 vec2(0.0f, -offset),     // 正下
                                 vec2(offset, -offset)    // 右下
        );
        vec3  sampleTex[9];
        for (int i = 0; i < 9; i++)
        {
            sampleTex[i] = vec3(texture(screenTexture, TexCoords.st + offsets[i]));
        }
        vec3 col = vec3(0.0);
        for (int i = 0; i < 9; i++)
            col += sampleTex[i] * kernel[i];

        FragColor = vec4(col, 1.0);
    }
    if (u_Gray == 5)
    {
        float kernel[9]  = float[](1, 1, 1, 1, -8, 1, 1, 1, 1);
        vec2  offsets[9] = vec2[](vec2(-offset, offset),   // 左上
                                 vec2(0.0f, offset),      // 正上
                                 vec2(offset, offset),    // 右上
                                 vec2(-offset, 0.0f),     // 左
                                 vec2(0.0f, 0.0f),        // 中
                                 vec2(offset, 0.0f),      // 右
                                 vec2(-offset, -offset),  // 左下
                                 vec2(0.0f, -offset),     // 正下
                                 vec2(offset, -offset)    // 右下
        );
        vec3  sampleTex[9];
        for (int i = 0; i < 9; i++)
        {
            sampleTex[i] = vec3(texture(screenTexture, TexCoords.st + offsets[i]));
        }
        vec3 col = vec3(0.0);
        for (int i = 0; i < 9; i++)
            col += sampleTex[i] * kernel[i];

        FragColor = vec4(col, 1.0);
    }
}
