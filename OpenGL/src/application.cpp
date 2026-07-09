#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "vertexBuffer.h"

int main(void)
{
    GLFWwindow* window;

	std::cout << "Starting OpenGME <<< \n" << std::endl;

	std::cout << "          " << "Initializing GLFW...\n" << std::endl;
    if (!glfwInit()) {
        std::cout << "          " << "          " << "Error initializing GLFW!\n" << std::endl;
        return -1;
    } else {
		std::cout << "          " << "          " << "GLFW initialized successfully!\n" << std::endl;
    }

    std::cout << "          " << "Creating window...\n" << std::endl;
    window = glfwCreateWindow(640, 480, "OpenGME", NULL, NULL);
    if (!window)
    {
		std::cout << "          " << "          " << "Error creating window!\n" << std::endl;
        glfwTerminate();
        return -1;
    } else {
		std::cout << "          " << "          " << "Window created successfully!\n" << std::endl;
    }

    std::cout << "          " << "Generating OpenGL context...\n" << std::endl;
    glfwMakeContextCurrent(window);
    std::cout << "          " << "Initializing GLEW...\n" << std::endl;
    if (glewInit() != GLEW_OK) {
        std::cout << "          " << "          " << "Error initializing GLEW!\n" << std::endl;
        return -1;
    } else {
        std::cout << "          " << "          " << "GLEW initialized successfully!\n" << std::endl;
        std::cout << "          " << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;
	}

    std::cout << "\n>>>\n\n" << "OpenGME initialized successfully!\n" << std::endl;

	std::cout << "  ______  " << std::endl;
    std::cout << " //----\\\\" << std::endl;
    std::cout << " ||    || " << std::endl;
    std::cout << " ||    || " << "_____  " << " _____" << " __    __"   << "" << std::endl;
    std::cout << " ||    || " << "||---\\ "<< " |+---" << " |\\\\   ||" << "" << std::endl;
    std::cout << " ||    || " << "||___/ " << " ||   " << " ||\\\\  ||" << "" << std::endl;
    std::cout << " ||    || " << "||     " << " ||===" << " || \\\\ ||" << "" << std::endl;
    std::cout << " ||____|| " << "||     " << " ||   " << " ||  \\\\||" << "" << std::endl;
    std::cout << " \\\\____// "<<"||     " << " ||___" << " ||   \\\\|" << "" << std::endl;
    
	unsigned int uint = 0;

    vertexBuffer vb(1, uint);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

		glDrawArrays(GL_TRIANGLES, uint, 3);
		

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}