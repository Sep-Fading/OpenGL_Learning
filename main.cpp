#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

// Error call backs for GLFW
void error_callback(int error, const char* description){
    fprintf(stderr, "Error: %s\n", description);
}

// Input handling for the GLFW Window
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    // IF ESCAPE IS PRESSED EXIT WINDOW.
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}

int main() {
    // GLFW Library Init
    if (!glfwInit()) {
        // GLFW: Init failed
        cout << "GLFW: Initialization failed.";
        return -1;
    }

    glfwSetErrorCallback(error_callback);

    // Declaring Window Specifications
    GLFWwindow* window = glfwCreateWindow(800, 600, "MMO-Engine-TestBuild v.Init",
                                          nullptr, nullptr);

    if (!window) {
        // Problem with creating the window.
        cout << "GLFW: Window creation failed.";
        glfwTerminate();
        return -1;
    }

    // Makes the window the relevant one?
    glfwMakeContextCurrent(window);

    // GLAD Library Init
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)){
        cout << "GLAD: Initialization failed.";
        return -1;
    }

    // Sets the key_callback function to apply to this window.
    glfwSetKeyCallback(window, key_callback);

    // While window is not supposed to close.
    while (!glfwWindowShouldClose(window)){
        // Render here?

        glfwSwapBuffers(window); // This one swaps back and front buffer, back one is the one you
                                 // render to and front is what's being displayed.

        glfwPollEvents(); // This one still unsure
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}