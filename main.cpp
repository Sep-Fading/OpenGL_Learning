#include <iostream>
#include <GLFW/glfw3.h>

using namespace std;


int main() {
    // GLFW Library Init
    if (!glfwInit()) {
        // GLFW: Init failed
        cout << "GLFW: Initialization failed.";
        return -1;
    }

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

    // While window is not supposed to close.
    while (!glfwWindowShouldClose(window)){
        // Render here?

        // Not sure what this does have to look into it and read a bit.
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
