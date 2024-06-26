#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <iostream>

#include "app.h"

#include "fonts/poppinsRegular.h"

Application* current_app = nullptr;

void window_resize_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
	current_app->width = width;
	current_app->height = height;

	current_app->render();
	glfwSwapBuffers(current_app->window);
}

void error_callback(int error, const char* description) {
	std::cout << "Error code: " << error << ", Description: " << description << "\n";
}

Application::Application(): width(640), height(480), idleFPS(30.0), err(0) {
	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW.\n";
		this->err = -1;
		return;
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	this->window = glfwCreateWindow(this->width, this->height, "assists", NULL, NULL);
	if (!this->window) {
		std::cout << "Failed to create GLFW window.\n";
		glfwTerminate();
		this->err = -1;
		return;
	}

	glfwMakeContextCurrent(this->window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    	std::cout << "Failed to initialize GLAD\n";
    	glfwTerminate();
		this->err = -1;
    	return;
	}

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = 
		ImGuiConfigFlags_NavEnableKeyboard |
		ImGuiConfigFlags_IsSRGB;

	ImFont* poppins_regular = io.Fonts->AddFontFromMemoryCompressedBase85TTF(poppinsRegular_compressed_data_base85, 18.0f);
	io.Fonts->Build();

	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init();

	std::cout << "Successful window creation.\n";
	current_app = this;

	glViewport(0, 0, this->width, this->height);
	glfwSetFramebufferSizeCallback(this->window, window_resize_callback);
}

Application::~Application() {
	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	glfwTerminate();
}