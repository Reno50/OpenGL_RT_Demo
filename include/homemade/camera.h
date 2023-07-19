#ifndef CAMERA_H
#define CAMERA_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <vector>
#include <math.h>

// Defines several possible options for camera movement. Used as abstraction to stay away from window-system specific input methods
enum Camera_Movement {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT,
    JUMP
};

// Default camera values
const float YAW         = -90.0f;
const float PITCH       =  0.0f;
const float SPEED       =  0.5f;
const float SENSITIVITY =  0.1f;
const float ZOOM        =  45.0f;
const float ACCLIMIT    =  0.25f;

class Camera
{
public:
    // camera Attributes
    glm::vec3 Position;
    glm::vec3 Front;
    glm::vec3 Up;
    glm::vec3 Right;
    glm::vec3 WorldUp;
    glm::vec3 Acceleration;
    glm::vec3 Decceleration;
    glm::vec3 VelocityCap;
    glm::vec3 Velocity;
    glm::vec3 MovementSpeed;
    // euler Angles
    float Yaw;
    float Pitch;
    // camera options
    float MouseSensitivity;
    float Zoom;

    // constructor with vectors
    Camera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f), float yaw = YAW, float pitch = PITCH) : Front(glm::vec3(0.0f, 0.0f, -1.0f)), MovementSpeed(SPEED), MouseSensitivity(SENSITIVITY), Zoom(ZOOM)
    {
        Position = position;
        WorldUp = up;
        Yaw = yaw;
        Pitch = pitch;
        VelocityCap = glm::vec3(SPEED);
        Acceleration = glm::vec3(0.5f);
        Decceleration = glm::vec3(1.001f);
        updateCameraVectors();
    }

    // returns the view matrix calculated using Euler Angles and the LookAt Matrix
    glm::mat4 GetViewMatrix()
    {
        return glm::lookAt(Position, Position + Front, Up);
    }

    // processes input received from any keyboard-like input system
    void ProcessKeyboard(Camera_Movement direction, float deltaTime)
    {
        //Method 1
        glm::vec3 polarity = glm::vec3(Velocity[0]/abs(Velocity[0]), Velocity[1]/abs(Velocity[1]), Velocity[0]/abs(Velocity[0]));
        switch (direction) {
            case FORWARD:
                if (glm::distance(glm::vec3(0.0f), Velocity) <= glm::distance(glm::vec3(0.0f), VelocityCap)) {
                    Velocity += Acceleration[2] * Front;
                    Velocity[0] += (VelocityCap[0] - Velocity[0]) * polarity[0];
                    Velocity[1] += (VelocityCap[1] - Velocity[1]) * polarity[1];
                    Velocity[2] += (VelocityCap[2] - Velocity[2]) * polarity[2];
                }
                //Velocity -= Decceleration[2] * Front;
                break;
            case BACKWARD:
                if (glm::distance(glm::vec3(0.0f), Velocity) <= glm::distance(glm::vec3(0.0f), VelocityCap)) {
                    Velocity -= Acceleration[2] * Front;
                    Velocity[0] += (VelocityCap[0] - Velocity[0]) * polarity[0];
                    Velocity[1] += (VelocityCap[1] - Velocity[1]) * polarity[1];
                    Velocity[2] += (VelocityCap[2] - Velocity[2]) * polarity[2];
                }
                //Velocity += Decceleration[2] * Front;
                break;
            case LEFT:
                if (glm::distance(glm::vec3(0.0f), Velocity) <= glm::distance(glm::vec3(0.0f), VelocityCap)) {
                    Velocity -= glm::normalize(glm::cross(Front, Up)) * Acceleration[0];
                }
                //Velocity += glm::normalize(glm::cross(Front, Up)) * Decceleration[0];
                break;
            case RIGHT:
                if (glm::distance(glm::vec3(0.0f), Velocity) <= glm::distance(glm::vec3(0.0f), VelocityCap)) {
                    Velocity += glm::normalize(glm::cross(Front, Up)) * Acceleration[0];
                }
                //Velocity -= glm::normalize(glm::cross(Front, Up)) * Decceleration[0];
                break;
            case JUMP:
                break;
        }
    }

    void IntegrateMovement(float deltaTime) 
    {
        Position += Velocity*deltaTime; // A little simple but it works
        Velocity = Velocity / (Decceleration);
    }

    // processes input received from a mouse input system
    void ProcessMouseMovement(float xoffset, float yoffset, GLboolean constrainPitch = true)
    {
        xoffset *= MouseSensitivity;
        yoffset *= MouseSensitivity;

        Yaw += xoffset;
        Pitch += yoffset;

        // constrain pitch because duh
        if (constrainPitch)
        {
            if (Pitch > 45.0f) // I didn't know you could omit {} like this but it works
                Pitch = 45.0f;
            else if (Pitch < -45.0f)
                Pitch = -45.0f;
        }

        // update Front, Right and Up Vectors using the updated Euler angles
        updateCameraVectors();
    }

    // processes input received from a mouse scroll-wheel event
    void ProcessMouseScroll(float yoffset)
    {
        //Do absolutely nothing because using the scroll wheel for camera controls is weird
    }

private:
    // calculates the front vector from the Camera's (updated) Euler Angles
    void updateCameraVectors()
    {
        // calculate the new Front vector
        glm::vec3 front;
        front.x = cos(glm::radians(Yaw)) * cos(glm::radians(Pitch));
        front.y = sin(glm::radians(Pitch));
        front.z = sin(glm::radians(Yaw)) * cos(glm::radians(Pitch));
        Front = glm::normalize(front);
        // also re-calculate the Right and Up vector
        Right = glm::normalize(glm::cross(Front, WorldUp));  // normalize the vectors
        Up = glm::normalize(glm::cross(Right, Front)); // use the new right to calculate up
    }
};
#endif