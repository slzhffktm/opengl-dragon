//include header file for glfw library so that we can use OpenGL
#define GLFW_DLL
#include "../glfw-3.2.1/include/GLFW/glfw3.h"
#include <stdlib.h>  //needed for exit function
#include <iostream>
using namespace std;

void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

void draw_pentagon() {
    glClearColor (1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(10);
    glLineWidth(2.5);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glColor3d(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(300.0,300.0,0.0);
    glVertex3f(500.0,300.0,0.0);
    glVertex3f(600.0,400.0,0.0);
    glVertex3f(400.0,500.0,0.0);
    glVertex3f(200.0,400.0,0.0);
    glVertex3f(300.0,300.0,0.0);
    glEnd();
}

int main()
{
    if (!glfwInit())
    {
        printf("Error tak ada glfwnya\n");
    }

    glfwSetErrorCallback(error_callback);
    GLFWwindow* window = glfwCreateWindow(1024, 1024, "My Title", NULL, NULL);
    if (!window)
    {
        printf("Error: gagal bikin glfw window\n");
    }

    // Program
    glfwMakeContextCurrent(window);
    glOrtho(0.0f, 1024, 0.0f, 1024, 0.0f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        // Draw gears
        draw_pentagon();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}