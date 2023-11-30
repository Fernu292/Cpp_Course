cmake_minimum_required(VERSION 3.26)
project(OpenGL_Project1)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

include_directories(/usr/include/glm)

add_executable(OpenGL_Project1 main.cpp)

target_link_libraries(OpenGL_Project1 PRIVATE OpenGL::GL GLEW::GLEW glfw)
