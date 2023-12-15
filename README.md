# MMO-Engine
Passion project to make a multiplayer game engine to build my game on, mostly serving as a dev kit for the game rather than a general-purpose engine.

The purpose of the project is to learn C++ as well as dive into some OpenGL stuff and learn to use their libraries.

# Current Goals (Top 3 things I'm currently working towards achieving on this project for the week):
- Render shape on the window.
- Move the rendered thing in the window.
- Render a specific model on the window.
  
# So far achieved:
*13/12/2023*
- Learning how to import libraries to the project with CMake.
- Compiling a working executable.
- Creating a blank window.

*14/12/2023*
- Learned some basic key input handling.
- Can now close the window when ESCAPE is pressed!
- Learned the purpose of buffer swapping
- Added GLAD Library to the project.

*15/12/2023*
- Changed the window size to 1920x1080.
- Added the correct viewport for the renderer.
- Registered the framebuffer_size_callback to resize the viewport correctly when the window size is  adjusted.
- Removed redundant glfwDestroyWindow(window);
- Rendered some color on the screen.
- Added function that takes in RGBA floats and clears the screen with that color.
