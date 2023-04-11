#version 430
#extension GL_ARB_enhanced_layouts : enable

out vec4 FragColor;

in vec2 TexCoord;

layout (std430, binding = 2) buffer placeholder {
    float vertex_array[];
};

void main()
{
    FragColor = vec4(TexCoord, clamp((1-TexCoord.x-TexCoord.y), 0.0, 1.0), vertex_array[0]);
} 