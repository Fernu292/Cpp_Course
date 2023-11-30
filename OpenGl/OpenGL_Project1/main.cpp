// main.cpp
#include <GLFW/glfw3.h>

int main() {
    // Inicializar GLFW
    if (!glfwInit()) {
        return -1;
    }

    // Crear una ventana
    GLFWwindow* window = glfwCreateWindow(800, 600, "Ventana de OpenGL", nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Establecer la ventana como el contexto actual de OpenGL
    glfwMakeContextCurrent(window);

    // Bucle principal
    while (!glfwWindowShouldClose(window)) {
        // Colocar aquí el código de renderizado de OpenGL

        // Intercambiar los buffers frontal y trasero
        glfwSwapBuffers(window);

        // Gestionar eventos
        glfwPollEvents();
    }

    // Limpiar y cerrar GLFW
    glfwTerminate();

    return 0;
}
