#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include "../app.h"

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

		ImGui::Text("Try selecting a tool from the \"Tools\" section to use it.");

		ImGui::PopStyleColor();

		if (ImGui::BeginMenuBar()) {
			if (ImGui::BeginMenu("Tools")) {
				if (ImGui::MenuItem("Transfer Window Planner")) {
				}
				ImGui::EndMenu();
			}
			ImGui::EndMenuBar();
		}

		ImGui::End();
		//ImGui::PopStyleColor();
		//ImGui::PopFont();
	}
	{
		ImGui::Begin("Hello World!");
		ImGui::Text("Test text");
		ImGui::End();
	}

	ImGui::Render();

	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.9, 0.9, 1.0, 1.0);

	ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}