cmake_minimum_required(VERSION 3.27)
project(MMO_Engine)

set(CMAKE_CXX_STANDARD 20)

# Include GLFW headers
include_directories("${PROJECT_SOURCE_DIR}/OpenGL_Libraries/GLFW/include")

add_executable(MMO_Engine main.cpp)


# Full path to the GLFW library
set(GLFW_LIBRARY "${PROJECT_SOURCE_DIR}/OpenGL_Libraries/GLFW/lib-mingw-w64/libglfw3.a")

# Link GLFW library
target_link_libraries(MMO_Engine "${GLFW_LIBRARY}")