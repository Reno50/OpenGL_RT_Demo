#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#define STB_IMAGE_IMPLEMENTATION

#include <IMG/stb_image.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <homemade\shader_s.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

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

    double x = 0.1;
    x = glm::acos(x);

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

    float vertices[] = {  //Vertices (3) + Colors (3) + Tex Coords (2)
        -0.8f, -0.9f, 0.0f,   0.1f, 0.9f, 0.0f,   0.0f, 0.0f,//Bottom Left
        0.5f, -0.6f, 0.0f,    0.9f, 0.1f, 0.0f,   1.0f, 0.0f,//Bottom Right
        0.8f,  0.9f, 0.0f,    0.0f, 0.1f, 0.9f,   1.0f, 1.0f,//Top Right
        -0.5f, 0.6f, 0.0f,    0.9f, 0.9f, 0.0f,   0.0f, 1.0f //Top Left
    };  

    unsigned int indices[] = {
        0, 1, 3, //First Triangle
        1, 2, 3  //Second Triangle
        };

    //Texture loading stuff
    stbi_set_flip_vertically_on_load(true);  

    int forestWidth;
    int forestHeight;
    int forestChannelCount;
    unsigned char *forestData = stbi_load("content/textures/test.png", &forestWidth, &forestHeight, &forestChannelCount, 0);

    unsigned int forestTexture;
    glGenTextures(1, &forestTexture);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, forestTexture);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);	
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);//GL_LINEAR);   

    if(forestData)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, forestWidth, forestHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, forestData);
        glGenerateMipmap(GL_TEXTURE_2D);
    }

    stbi_image_free(forestData);

    //I should probably loop this process at some point

    int catWidth;
    int catHeight;
    int catChannelCount;
    unsigned char *catData = stbi_load("content/textures/test2.png", &catWidth, &catHeight, &catChannelCount, 0);

    unsigned int catTexture;
    glGenTextures(1, &catTexture);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, catTexture);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);//GL_LINEAR);

    if (catData) 
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, catWidth, catHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, catData); //Some PNGs use RGBA, very important for functional textures
        glGenerateMipmap(GL_TEXTURE_2D);
    }

    stbi_image_free(catData);


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
    //Attrib index, # of datas(?) in attrib, type of attrib, normalized(?) usually false, stride (same for all attribs in same array, pointer to offset)
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(0));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
    glEnableVertexAttribArray(2);

    //Complicated way --> glUniform1i(glGetUniformLocation(mainShaders.ID, "forestTexture"), 0);
    //Simple way --> mainShaders.setInt("forestTexture", 0);
    
    mainShaders.use();
    mainShaders.setInt("forestTexture", 0);
    mainShaders.setInt("catTexture", 1);

    while(!glfwWindowShouldClose(window)) {

        //Input shenanigans function
        processInput(window);
        
        //Rendering stuff here
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        //Bind textures and activate shaders

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, forestTexture);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, catTexture);

        mainShaders.use();

        //Bind and render the vertex/element buffer

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elembufferobj);
        glBindVertexArray(vertarrayobj);
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
