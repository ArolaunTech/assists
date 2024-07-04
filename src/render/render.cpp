#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <cstdint>

#include "../app.h"
#include "../debug/debug.h"
#include "meshes/planet.h"

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
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)(uintptr_t)0);
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

void Application::idle() {
	glfwWaitEventsTimeout(1.0/this->idleFPS);
}

void Application::render() {
	ImGuiIO& io = ImGui::GetIO();

	ImGui_ImplGlfw_NewFrame();
	ImGui_ImplOpenGL3_NewFrame();

    ImGui::NewFrame();

	{
		ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 0, 0, 255));
		//ImGui::PushFont(poppins_regular);
		ImGui::SetNextWindowPos(ImVec2(0.0, 0.0));
		ImGui::SetNextWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y));

		ImGui::Begin(
			"main",
			nullptr,
			ImGuiWindowFlags_NoMove | //NoInputs flag does not work due to needing to select menu
			ImGuiWindowFlags_NoBringToFrontOnFocus | 
			ImGuiWindowFlags_NoBackground |
			ImGuiWindowFlags_NoDecoration |
			ImGuiWindowFlags_MenuBar);

		switch (this->currentWindow) {
			case 0:
				ImGui::Text("Try selecting a tool from the \"Tools\" section to use it.");
				break;
			case 1:
				ImGui::Text("Transfer Window Planner\n----------------------");
				ImGui::Image(
					(void*)(uintptr_t)this->planetColorBuffer,
					ImGui::GetContentRegionAvail(),
					ImVec2(0, 1),
					ImVec2(1, 0)
				);
				break;
			default:
				ImGui::Text("An error has ocurred. Oh no!");
				break;
		}

		ImGui::PopStyleColor();

		if (ImGui::BeginMenuBar()) {
			if (ImGui::BeginMenu("Tools")) {
				if (ImGui::MenuItem("Transfer Window Planner")) {
					this->currentWindow = 1;
				}
				ImGui::EndMenu();
			}
			ImGui::EndMenuBar();
		}

		ImGui::End();
		//ImGui::PopStyleColor();
		//ImGui::PopFont();
	}

	ImGui::Render();

	glBindFramebuffer(GL_FRAMEBUFFER, this->fbo);

	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);

	glUseProgram(this->planetShader);
	glBindVertexArray(this->vao);
	glDrawArrays(GL_TRIANGLES, 0, 3);

	glBindFramebuffer(GL_FRAMEBUFFER, 0);
	glClearColor(0.9, 0.9, 0.9, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}