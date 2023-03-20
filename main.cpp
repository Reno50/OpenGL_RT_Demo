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

    float *pyraVertices = PyramidVerts(1.0f);

    int *pyraIndices = PyramidIndices();

    float vertices[20];

    int indices[12];

    for (int i = 0; i < 20; i++) {
        vertices[i] = pyraVertices[i];
    }

    for (int j = 0; j < 12; j++) {
        indices[j] = pyraIndices[j];
    }

    std::cout << indices[0] << indices[1] << vertices[0] << vertices[1] << std::endl;

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
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, catWidth, catHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, catData);
        glGenerateMipmap(GL_TEXTURE_2D); //This texture has to be RGBA
    }

    stbi_image_free(catData);


    //Model matrix
    float rotationAngle = 10.0f;
    glm::mat4 modelMat = glm::mat4(1.0f);
    //View matrix
    glm::mat4 viewMat = camera.GetViewMatrix();
    viewMat = glm::translate(viewMat, glm::vec3(0.0f, 0.0f, -5.0f)); //Move the entire scene backwards on the z axis, or move the camera forwards (away from z=0)
    //Keep in mind that the +z axis is backwards, imagine moving the screen closer to your face and thats pretty much it
    //Projection matrix
    glm::mat4 projectionMat = glm::perspective(glm::radians(camera.Zoom), 16.0f / 9.0f, 0.01f, 100.0f);

    //All the buffers
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
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(0));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    //Complicated way --> glUniform1i(glGetUniformLocation(mainShaders.ID, "forestTexture"), 0);
    //Simple way --> mainShaders.setInt("forestTexture", 0);
    
    mainShaders.use();
    mainShaders.setInt("forestTexture", 0);
    mainShaders.setInt("catTexture", 1);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    while(!glfwWindowShouldClose(window)) {

        //Timing
        float currentFrame = static_cast<float>(glfwGetTime());
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        //Input shenanigans function

        processInput(window);
        
        //Rendering stuff here

        glClearColor(0.5f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Clearin the depth buffer is important too

        //Transformation stuff

        rotationAngle = (float)glfwGetTime() * 15.0f;
        modelMat = glm::mat4(1.0f);
        //modelMat = glm::rotate(modelMat, glm::radians(rotationAngle), glm::vec3(1.0, 0.0, 0.0));

        unsigned int modelLocation = glGetUniformLocation(mainShaders.ID, "model");
        glUniformMatrix4fv(modelLocation, 1, GL_FALSE, glm::value_ptr(modelMat));
        unsigned int viewLocation = glGetUniformLocation(mainShaders.ID, "view");
        viewMat = camera.GetViewMatrix();
        glUniformMatrix4fv(viewLocation, 1, GL_FALSE, glm::value_ptr(viewMat));
        unsigned int projectionLocation = glGetUniformLocation(mainShaders.ID, "projection");
        glUniformMatrix4fv(projectionLocation, 1, GL_FALSE, glm::value_ptr(projectionMat));

        //Bind textures and activate shaders

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, forestTexture);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, catTexture);

        mainShaders.use();

        //Bind and render the vertex/element buffer

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elembufferobj);
        glBindVertexArray(vertarrayobj);
        glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_INT, 0);

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