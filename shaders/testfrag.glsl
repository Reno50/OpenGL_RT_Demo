#version 330 core
out vec4 FragColor;
  
in vec3 vertexColor;
in vec2 TexCoord;

uniform sampler2D miscTexture;

void main()
{
    FragColor = texture(miscTexture, TexCoord);
} 