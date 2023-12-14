cmake_minimum_required(VERSION 3.27)
project(MMO_Engine)

set(CMAKE_CXX_STANDARD 20)

# Include GLFW and GLAD headers
include_directories("${PROJECT_SOURCE_DIR}/OpenGL_Libraries/glfw/include"
        "${PROJECT_SOURCE_DIR}/OpenGL_Libraries/glad/include")

# Add executable with main.cpp and glad.c
add_executable(MMO_Engine main.cpp "${PROJECT_SOURCE_DIR}/OpenGL_Libraries/glad/src/glad.c")

# Full path to the GLFW library
set(GLFW_LIBRARY "${PROJECT_SOURCE_DIR}/OpenGL_Libraries/glfw/lib-mingw-w64/libglfw3.a")

# Link GLFW library
target_link_libraries(MMO_Engine "${GLFW_LIBRARY}")
