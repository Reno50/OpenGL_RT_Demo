#version 330 core
out vec4 FragColor;

#uniform vec3 sourceColor;

void main()
{
    FragColor = vec4(0.5f, 0.9f, 0.5f, 1.0); // set all 4 vector values to 1.0
}