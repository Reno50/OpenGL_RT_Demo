#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include <IMG/stb_image.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <homemade\shader_s.h>

using namespace std;

const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

int main() {
    //Boilerplate borrowed from https://learnopengl.com/Getting-started/Hello-Window

    // Initializes all the glfw stuff
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "OpenGL", NULL, NULL);
    if (window == NULL) {
        //std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    //Load glad before any OpenGL stuff because glad manages pointers for OpenGL
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        //std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    //Construct the viewport
    glViewport(0, 0, 800, 600);

    float vertices[] = {  //Vertices (3) + Colors (3)
        -0.9f, -0.8f, 0.0f, 0.1f, 0.9f, 0.0f,//Bottom Left
        0.7f, -0.5f, 0.0f,  0.9f, 0.1f, 0.0f,//Bottom Right
        0.8f,  0.9f, 0.0f,  0.0f, 0.1f, 0.9f,//Top Right
        -0.5f, 0.6f, 0.0f,  0.9f, 0.9f, 0.0f //Top Left
    };  

    unsigned int indices[] = {
        0, 1, 3, //First Triangle
        1, 2, 3  //Second Triangle
        };

    unsigned int vertbufferobj, vertarrayobj, elembufferobj;

    glGenBuffers(1, &vertbufferobj);
    glGenBuffers(1, &elembufferobj);

    glGenVertexArrays(1, &vertarrayobj);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elembufferobj);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glBindVertexArray(vertarrayobj);
    glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    //Shader class stuff
    CreShader mainShaders = CreShader("shaders/testvert.glsl", "shaders/testfrag.glsl");

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3* sizeof(float)));
    glEnableVertexAttribArray(1);

    while(!glfwWindowShouldClose(window)) {

        //Input shenanigans function
        processInput(window);
        
        //Rendering stuff here
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        //Use the shader
        mainShaders.use();

        float timeValue = glfwGetTime();
        int resolution[2]; 
        glfwGetWindowSize(window, &resolution[0], &resolution[1]);

        mainShaders.setFloat("iTime", timeValue);
        mainShaders.setInt2("iResolution", resolution[0], resolution[1]);

        //Render the buffer
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elembufferobj);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        glfwSwapBuffers(window);
        glfwPollEvents();    
    }

    glDeleteVertexArrays(1, &vertarrayobj);
    glDeleteBuffers(1, &vertbufferobj);
    glDeleteBuffers(1, &elembufferobj);
    mainShaders.delet();

    glfwTerminate();
    return 0;
}

void processInput(GLFWwindow* window) {

    //Input shenanigans here
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
