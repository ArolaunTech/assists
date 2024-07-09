#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <iostream>
#include <cstdint>

#include "app.h"
#include "debug/debug.h"
#include "configs/parser.h"

#include "fonts/poppinsRegular.h"
#include "render/shaders/planetVertex.h"
#include "render/shaders/planetFragment.h"

Application* current_app = nullptr;

void window_resize_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
	current_app->width = width;
	current_app->height = height;
	current_app->set_framebuffer_size(width, height);

	current_app->render();
	glfwSwapBuffers(current_app->window);
}

void error_callback(int error, const char* description) {
	std::cout << "Error code: " << error << ", Description: " << description << "\n";
}

Application::Application(): width(640), height(480), idleFPS(30.0), err(0), currentWindow(0) {
	if (!glfwInit()) {
		log("Failed to initialize GLFW.");
		this->err = -1;
		return;
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	this->window = glfwCreateWindow(this->width, this->height, "assists", NULL, NULL);
	if (!this->window) {
		log("Failed to create GLFW window.");
		glfwTerminate();
		this->err = -1;
		return;
	}

	glfwMakeContextCurrent(this->window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    	log("Failed to initialize GLAD");
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

	log("Successful window creation.");
	current_app = this;

	glViewport(0, 0, this->width, this->height);
	glfwSetFramebufferSizeCallback(this->window, window_resize_callback);

	this->generate_buffers();
	if (this->err > 0) {
		return;
	}

	this->planetShader = compile_and_link_shaders(planetVertexShaderCode, planetFragmentShaderCode);
	this->system = loadStockBodies();
}

Application::~Application() {
	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	glDeleteFramebuffers(1, &this->fbo);
	glDeleteTextures(1, &this->planetColorBuffer);
	glDeleteRenderbuffers(1, &this->rbo);

	glfwTerminate();
}