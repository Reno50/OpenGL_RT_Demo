#version 330 core
out vec4 FragColor;
  
in vec3 vertexColor;
in vec2 TexCoord;

uniform sampler2D forestTexture;
uniform sampler2D catTexture;

void main()
{
    FragColor = texture(catTexture, TexCoord);
} 