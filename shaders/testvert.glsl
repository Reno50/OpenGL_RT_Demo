#version 330 core
layout (location = 0) in vec3 aPos; // Vertex position
layout (location = 1) in vec2 aTexCoord; // Texture coord

out vec2 TexCoord; // send texture coord to fragment shader

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4(aPos, 1.0);
    TexCoord = aTexCoord;
}