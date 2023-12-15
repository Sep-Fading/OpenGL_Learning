#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

void ClearWithColor(float red, float green, float blue, float alpha);

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

// Viewport resizer based on window adjustments.
void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    glViewport(0,0, width, height);
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
    GLFWwindow* window = glfwCreateWindow(1920, 1080, "MMO-Engine-TestBuild v.Init",
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

    // Setting the viewport for the renderer.
    glViewport(0,0,1920,1080);
    // Letting GLFW know we want to call this function on every window resize by registering it.
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Sets the key_callback function to apply to this window.
    glfwSetKeyCallback(window, key_callback);

    // While window is not supposed to close.
    while (!glfwWindowShouldClose(window)){
        // Render here
        ClearWithColor(0.2f, 0.3f, 0.3f, 1.0f);


        // --------------------------------------------------------------------

        glfwSwapBuffers(window); // This one swaps back and front buffer, back one is the one you
                                 // render to and front is what's being displayed.

        glfwPollEvents(); // Checks if events are triggered, updates window state and calls the corresponding functions.
    }

    glfwTerminate();
    return 0;
}

// Clears the screen with specified color.
void ClearWithColor(float red, float green, float blue, float alpha) {
    glClearColor(red, green, blue, alpha);
    glClear(GL_COLOR_BUFFER_BIT);
}
