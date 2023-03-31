#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

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

    glEnable(GL_DEPTH_TEST);

    // Object vertices
    float objVertices[] = {
        0.0f, 1.0f, 0.0f, // Top left point
        1.0f, 1.0f, 0.0f, // Top right point
        0.0f, 0.0f, 0.0f, // Bottom left point
        1.0f, 1.0f, 0.0f, // Top right point
        0.0f, 0.0f, 0.0f, // Bottom left point
        1.0f, 0.0f, 0.0f  // Bottom right point
    }; 

    // Light vertices
    float lightVertices[] = {
        0.0f, 1.0f, 0.0f, // Top left point
        1.0f, 1.0f, 0.0f, // Top right point
        0.0f, 0.0f, 0.0f, // Bottom left point
        1.0f, 1.0f, 0.0f, // Top right point
        0.0f, 0.0f, 0.0f, // Bottom left point
        1.0f, 0.0f, 0.0f  // Bottom right point
    }; 

    //Model matrix
    glm::mat4 modelMat = glm::mat4(1.0f);
    //View matrix
    glm::mat4 viewMat = camera.GetViewMatrix();
    viewMat = glm::translate(viewMat, glm::vec3(0.0f, 0.0f, -5.0f)); //Move the entire scene backwards on the z axis, or move the camera forwards (away from z=0)
                                                                    //Keep in mind that the +z axis is backwards, imagine moving the screen closer to your face and thats pretty much it
    //Projection matrix
    glm::mat4 projectionMat = glm::perspective(glm::radians(camera.Zoom), 16.0f / 9.0f, 0.01f, 100.0f);

    //For the light source
    glm::mat4 lightSourceMat = glm::mat4(1.0f);
    

    //All the buffers for the object
    unsigned int vertbufferobj, vertarrayobj;

    glGenBuffers(1, &vertbufferobj);
    glGenVertexArrays(1, &vertarrayobj);

    glBindVertexArray(vertarrayobj);
    glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

    glBufferData(GL_ARRAY_BUFFER, sizeof(objVertices), objVertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)(0)); // Attrib index, # of datas(?) in attrib, type of attrib, normalized(?) usually false, stride (same for all attribs in same array), pointer to offset
    glEnableVertexAttribArray(0);

    //Buffers for the light vertices
    unsigned int lightVertArray, lightVertBuffer;// Light vertex buffer object and light vertex array object 
    glGenBuffers(1, &lightVertBuffer);
    glGenVertexArrays(1, &lightVertArray);
    
    glBindVertexArray(lightVertArray);
    glBindBuffer(GL_ARRAY_BUFFER, lightVertBuffer);

    glBufferData(GL_ARRAY_BUFFER, sizeof(lightVertices), lightVertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)(0));
    glEnableVertexAttribArray(0);

    //Shaders
    CreShader lightShader = CreShader("shaders/lightvert.glsl", "shaders/lightfrag.glsl");
    
    CreShader lightSourceShader = CreShader("shaders/lightvert.glsl", "shaders/lightsourcefrag.glsl");

    lightShader.use();
    lightShader.setVec3("objectColor", 1.0f, 0.5f, 0.31f);
    lightShader.setVec3("lightColor", 1.0f, 1.0f, 1.0f);

    lightSourceShader.use();
    lightSourceShader.setVec3("sourceColor", 0.3f, 0.9f, 0.3f);

    // Rebind the object buffers because it segfaults otherwise in the drawElements function??

    glBindVertexArray(vertarrayobj);
    glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    while(!glfwWindowShouldClose(window)) {

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
        lightShader.setVec3("objectColor", 1.0f, 0.5f, 0.31f);

        //Transformation stuff
        viewMat = camera.GetViewMatrix();

        modelMat = glm::mat4(1.0f);
        modelMat = glm::translate(modelMat, glm::vec3(0.0f, 0.0f, -1.5f));
        lightShader.setMat4f("model", modelMat);
        lightShader.setMat4f("view", viewMat);
        lightShader.setMat4f("projection", projectionMat);

        glBindVertexArray(vertarrayobj);
        glBindBuffer(GL_ARRAY_BUFFER, vertbufferobj);

        glDrawArrays(GL_TRIANGLES, 0, 18);

        //Now bind the light source object's buffers and shaders

        lightSourceShader.use();

        lightSourceShader.setVec3("sourceColor", 0.1f, 0.9f, 0.2f);

        //Transformation stuff
        lightSourceMat = glm::mat4(1.0f);
        glm::translate(lightSourceMat, glm::vec3(2.0f, 0.0f, 0.0f));

        lightSourceShader.setMat4f("model", lightSourceMat);
        lightSourceShader.setMat4f("view", viewMat);
        lightSourceShader.setMat4f("projection", projectionMat);
        
        glBindVertexArray(lightVertArray);
        glBindBuffer(GL_ARRAY_BUFFER, lightVertBuffer);

        glDrawArrays(GL_TRIANGLES, 0, 18);

        glfwSwapBuffers(window);
        glfwPollEvents();    
    }

    glDeleteVertexArrays(1, &vertarrayobj);
    glDeleteBuffers(1, &vertbufferobj);
    glDeleteBuffers(1, &lightVertBuffer);
    glDeleteVertexArrays(1, &lightVertArray);
    
    lightShader.delet();
    lightSourceShader.delet();

    glfwTerminate();
    return 0;
}

void processInput(GLFWwindow* window) {

    //Input shenanigans here
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(FORWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(BACKWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(LEFT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(RIGHT, deltaTime);
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
    camera.ProcessMouseMovement(xoffset, yoffset);
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    //Absolutely nothing happens here
    camera.ProcessMouseScroll(yoffset);
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