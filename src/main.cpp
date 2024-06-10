#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int WINDOW_WIDTH = 640;
int WINDOW_HEIGHT = 480;

void window_resize_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
	WINDOW_WIDTH = width;
	WINDOW_HEIGHT = height;
}

void error_callback(int error, const char* description) {
	std::cout << "Error code: " << error << ", Description: " << description << "\n";
}

int main() {
	GLFWwindow* window;

	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW.\n";
		return -1;
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "init window", NULL, NULL);
	if (!window) {
		std::cout << "Failed to create GLFW window.\n";
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    	std::cout << "Failed to initialize GLAD\n";
    	return -1;
	}

	std::cout << "Successful window creation.\n";

	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	glfwSetFramebufferSizeCallback(window, window_resize_callback);

	while(!glfwWindowShouldClose(window))
	{
		//input

		//render
		glClearColor(0.2, 0.2, 0.3, 1.0);
		glClear(GL_COLOR_BUFFER_BIT);

		//call events
    	glfwSwapBuffers(window);
    	glfwPollEvents();    
	}

	glfwTerminate();
	return 0;
}