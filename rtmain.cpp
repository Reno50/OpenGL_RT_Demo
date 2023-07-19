#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>

#define STB_IMAGE_IMPLEMENTATION

#include <IMG/stb_image.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <homemade\shader_s.h>
#include <homemade\camera.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <homemade\constructshape.cpp>

using namespace std;

const unsigned int SCR_WIDTH = 960;
const unsigned int SCR_HEIGHT = 540;

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void processInput(GLFWwindow *window);

Camera camera(glm::vec3(0.0f, 0.0f, 3.0f));
float lastX = SCR_WIDTH / 2.0f;
float lastY = SCR_HEIGHT / 2.0f;
bool firstMouse = true;

float deltaTime = 0.0f;
float lastFrame = 0.0f;

struct shaderDat {
        float cameraPos[3];
        float cameraDir[3];
        float verticeData[9];
};

struct Vector {
    double x;
    double y;
    double z;

    Vector(double x, double y, double z) : x(x), y(y), z(z) {}
};

Vector normalize(Vector vector) {
    double magnitude = std::sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
    return Vector(vector.x / magnitude, vector.y / magnitude, vector.z / magnitude);
}

Vector anglesToVector(double pitch, double yaw, double roll) {
    double x = std::cos(yaw) * std::cos(pitch);
    double y = std::sin(roll) * std::sin(pitch) * std::cos(yaw) + std::cos(roll) * std::sin(yaw);
    double z = std::sin(roll) * std::sin(pitch) * std::sin(yaw) - std::cos(roll) * std::cos(yaw);
    return normalize(Vector(x, y, z));
}

Vector vectorToAngles(Vector vector) {
    double pitch = std::asin(vector.y);
    double yaw = std::atan2(vector.z, vector.x);
    double roll = std::atan2(-vector.x * std::sin(yaw) + vector.z * std::cos(yaw), vector.y);
    return Vector(pitch, yaw, roll);
}

shaderDat loopStuff;

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

    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);  

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);

    //Load glad before any OpenGL stuff because glad manages pointers for OpenGL
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        //std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    //Construct the viewport
    glViewport(0, 0, 1600, 900);

    //glEnable(GL_DEPTH_TEST);

    // Object vertices
    float objVertices[] = {
        -1.0f, 1.0f, 0.0f, // Top left point
        0.0f, 1.0f,
        1.0f, 1.0f, 0.0f, // Top right point
        1.0f, 1.0f,
        -1.0f, -1.0f, 0.0f, // Bottom left point
        0.0f, 0.0f,
        1.0f, 1.0f, 0.0f, // Top right point
        1.0f, 1.0f,
        -1.0f, -1.0f, 0.0f, // Bottom left point
        0.0f, 0.0f,
        1.0f, -1.0f, 0.0f,  // Bottom right point
        1.0f, 0.0f
    }; 

    //All the buffers for the object
    unsigned int vertbufferobj, vertarrayobj;

    glGenBuffers(1, &vertbufferobj);
    glGenVertexArrays(1, &vertarrayobj);

    glBindVertexArray(vertarrayobj);
    glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

    glBufferData(GL_ARRAY_BUFFER, sizeof(objVertices), objVertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(0)); // Attrib index, # of datas(?) in attrib, type of attrib, normalized(?) usually false, stride (same for all attribs in same array), pointer to offset
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3* sizeof(float)));
    glEnableVertexAttribArray(1);

    //Shaders
    CreShader lightShader = CreShader("shaders/testvert.glsl", "shaders/testfrag.glsl");

    lightShader.use();

    // Rebind the object buffers because it segfaults otherwise in the drawElements function??

    glBindVertexArray(vertarrayobj);
    glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    // Fragment shader data
    GLuint fragVerticesBuffer = 0;
    glGenBuffers(1, &fragVerticesBuffer);
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, fragVerticesBuffer);

    glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(loopStuff), &loopStuff, GL_DYNAMIC_DRAW);
    glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 2, fragVerticesBuffer);
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0); // Unbind

    while(!glfwWindowShouldClose(window)) {

        // I don't have a better place to put it so it'll just have to be redone every frame for now
        // Basically every model in the scene will be combined into this array to send to the fragment shader
        // Eventually, I should just make an addModel() and removeModel() function

        loopStuff.verticeData[0] = 2.0;
        loopStuff.verticeData[1] = 3.0;
        loopStuff.verticeData[2] = 2.0;
        loopStuff.verticeData[3] = 5.0;
        loopStuff.verticeData[4] = 3.0;
        loopStuff.verticeData[5] = 2.0;
        loopStuff.verticeData[6] = 5.0;
        loopStuff.verticeData[7] = 5.0;
        loopStuff.verticeData[8] = 2.0;

        loopStuff.cameraDir[0] = 0.0;
        loopStuff.cameraDir[1] = 0.0;
        loopStuff.cameraDir[2] = 0.0;

        loopStuff.cameraPos[0] = 0.0;
        loopStuff.cameraPos[1] = 0.0;
        loopStuff.cameraPos[2] = 0.0;

        /* The old way
        glBindBuffer(GL_SHADER_STORAGE_BUFFER, fragVerticesBuffer); // Bind
        glBufferSubData(GL_SHADER_STORAGE_BUFFER, 0, sizeof(loopStuff), &loopStuff); // Write
        GLvoid* p = glMapBuffer(GL_SHADER_STORAGE_BUFFER, GL_WRITE_ONLY); // Map
        memcpy(p, &loopStuff, sizeof(loopStuff)); // Copy stuff into the map of the buffer? (I thought we already wrote the data to the buffer?)

        glUnmapBuffer(GL_SHADER_STORAGE_BUFFER); // Unmap
        glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0); // Unbind
        */

        // The new way
        glBindBuffer(GL_SHADER_STORAGE_BUFFER, fragVerticesBuffer); // Bind
        glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(loopStuff), &loopStuff, GL_DYNAMIC_DRAW); // Write
        glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0); // Unbind

        // Timing
        float currentFrame = static_cast<float>(glfwGetTime());
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        // Input shenanigans function

        processInput(window);
        
        // Rendering stuff here

        glClearColor(0.5f, 0.5f, 0.8f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clearin the depth buffer is important too
        
        lightShader.use();
        
        glBindVertexArray(vertarrayobj);
        glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

        glDrawArrays(GL_TRIANGLES, 0, 30);
        
        lightShader.setVec2("screenSize", SCR_WIDTH, SCR_HEIGHT);

        glfwSwapBuffers(window);
        glfwPollEvents();    
    }

    glDeleteVertexArrays(1, &vertarrayobj);
    glDeleteBuffers(1, &vertbufferobj);
    
    lightShader.delet();

    glfwTerminate();
    return 0;
}

void processInput(GLFWwindow* window) {

    //Input shenanigans here 
    
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        loopStuff.cameraDir[0] += 0.1;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        loopStuff.cameraDir[0] -= 0.1;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        loopStuff.cameraDir[1] += 0.1;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        loopStuff.cameraDir[1] -= 0.1;
    
    //if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
    //    camera.ProcessKeyboard(JUMP, deltaTime);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }
  
    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos; 
    lastX = xpos;
    lastY = ypos;
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    //Absolutely nothing happens here
}

void loadTexture(const std::string &filePath, unsigned int &texInt) // I have no idea if this works
{
    //Texture loading stuff
    stbi_set_flip_vertically_on_load(true);  

    int texWidth;
    int texHeight;
    int texChannelCount;
    unsigned char *texData = stbi_load("content/textures/test2.png", &texWidth, &texHeight, &texChannelCount, 0);

    glGenTextures(1, &texInt);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, texInt);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);//GL_LINEAR);

    if (texData) 
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, texWidth, texHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, texData);
        glGenerateMipmap(GL_TEXTURE_2D); //This texture has to be RGBA
    }

    stbi_image_free(texData);

}