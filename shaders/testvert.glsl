#version 330 core
layout (location = 0) in vec3 aPos; // Vertex position
layout (location = 1) in vec3 aColor; // Vertex color
layout (location = 2) in vec2 aTexCoord; //Texture coord
  
out vec3 vertexColor; // specify a color output to the fragment shader
out vec2 TexCoord; // send texture coord to fragment shader

uniform mat4 transform;

void main()
{
    gl_Position = transform * vec4(aPos, 1.0);
    vertexColor = aColor;
    TexCoord = aTexCoord;
}