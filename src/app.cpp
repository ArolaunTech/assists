#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <iostream>

#include "app.h"
#include "debug/debug.h"

#include "fonts/poppinsRegular.h"
#include "render/shaders/planetVertex.h"
#include "render/shaders/planetFragment.h"
#include "render/meshes/planet.h"

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

void Application::init_glfw() {
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
}

void Application::init_glad() {
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    	log("Failed to initialize GLAD");
    	glfwTerminate();
		this->err = -1;
	}
}

void Application::init_imgui() {
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
}

void Application::set_framebuffer_size(int bufferWidth, int bufferHeight) {
	glBindTexture(GL_TEXTURE_2D, this->planetColorBuffer);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, bufferWidth, bufferHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glBindTexture(GL_TEXTURE_2D, 0);

	glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, this->planetColorBuffer, 0);

	glBindRenderbuffer(GL_RENDERBUFFER, this->rbo);
	glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, bufferWidth, bufferHeight);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);

	glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, this->rbo);
}

void Application::generate_buffers() {
	//generate framebuffer
	glGenFramebuffers(1, &this->fbo);
	glBindFramebuffer(GL_FRAMEBUFFER, this->fbo);

	glGenTextures(1, &this->planetColorBuffer);
	glGenRenderbuffers(1, &this->rbo);

	set_framebuffer_size(this->width, this->height);

	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
		log("Failed to complete framebuffer");
		this->err = 1;
	}
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

	//vertex buffer
	glGenBuffers(1, &this->vbo);

	glBindBuffer(GL_ARRAY_BUFFER, this->vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(planetMesh), planetMesh, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glGenVertexArrays(1, &this->vao);

	glBindVertexArray(this->vao);
	glBindBuffer(GL_ARRAY_BUFFER, this->vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(planetMesh), planetMesh, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindVertexArray(0);
}

unsigned int Application::compile_and_link_shaders(char const * vertexShaderSource, char const * fragmentShaderSource) {
	unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);

	int success;
	char info[512];
	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

	if (!success) {
		glGetShaderInfoLog(vertexShader, 512, NULL, info);
		log("Failed to compile vertex shader. OpenGL log: ");
		log(info);
		this->err = 1;
		return 0;
	}

	unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);

	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
	if (!success) {
		glGetShaderInfoLog(fragmentShader, 512, NULL, info);
		log("Failed to compile fragment shader. OpenGL log: ");
		log(info);
		this->err = 1;
		return 0;
	}

	unsigned int shader = glCreateProgram();
	glAttachShader(shader, vertexShader);
	glAttachShader(shader, fragmentShader);
	glLinkProgram(shader);

	glGetProgramiv(shader, GL_LINK_STATUS, &success);
	if (!success) {
		glGetProgramInfoLog(shader, 512, NULL, info);
		log("Failed to link shader. OpenGL log: ");
		log(info);
		this->err = 1;
		return 0;
	}

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	return shader;
}

Application::Application(): width(640), height(480), idleFPS(30.0), err(0), currentWindow(0) {
	this->init_glfw();
	if (this->err > 0) {
		return;
	}

	this->init_glad();
	if (this->err > 0) {
		return;
	}

	this->init_imgui();

	log("Successful window creation.");
	current_app = this;

	glViewport(0, 0, this->width, this->height);
	glfwSetFramebufferSizeCallback(this->window, window_resize_callback);

	this->generate_buffers();

	this->planetShader = compile_and_link_shaders(planetVertexShaderCode, planetFragmentShaderCode);
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