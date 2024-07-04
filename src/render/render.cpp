#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include "../app.h"

//#include "meshes/planet.h"

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
					(ImTextureID)this->planetColorBuffer,
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