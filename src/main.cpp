#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <iostream>

#include "render/render.h"
#include "fonts/poppinsRegular.h"

int WINDOW_WIDTH = 640;
int WINDOW_HEIGHT = 480;

void window_resize_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
	WINDOW_WIDTH = width;
	WINDOW_HEIGHT = height;

	ImGuiIO& io = ImGui::GetIO();
	render(io);
	glfwSwapBuffers(window);
}

void error_callback(int error, const char* description) {
	std::cout << "Error code: " << error << ", Description: " << description << "\n";
}

int main() {
	//initialization
	GLFWwindow* window;

	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW.\n";
		return -1;
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "assists", NULL, NULL);
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

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NavEnableKeyboard;
	io.ConfigFlags |= ImGuiConfigFlags_IsSRGB;

	ImFont* poppins_regular = io.Fonts->AddFontFromMemoryCompressedBase85TTF(poppinsRegular_compressed_data_base85, 18.0f);
	io.Fonts->Build();

	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init();

	std::cout << "Successful window creation.\n";

	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	glfwSetFramebufferSizeCallback(window, window_resize_callback);

	//main loop
	while(!glfwWindowShouldClose(window)) {
    	glfwPollEvents();

    	render(io);
    	glfwSwapBuffers(window);
	}

	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	glfwTerminate();
	return 0;
}