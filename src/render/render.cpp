#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>
//#include "../../imgui-1.90.8/imgui.h"
//#include "../../imgui-1.90.8/backends/imgui_impl_glfw.h"
//#include "../../imgui-1.90.8/backends/imgui_impl_opengl3.h"

#include "render.h"

bool* p_open = nullptr;

void render() {
	ImGuiIO& io = ImGui::GetIO();
	ImFont* poppins_regular = io.Fonts->AddFontFromFileTTF("../Resources/Poppins-Regular.ttf", 14);
	io.Fonts->Build();

	ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();

    ImGui::NewFrame();

	{
		//ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 0, 0, 255));
		ImGui::PushFont(poppins_regular);

		ImGui::SetNextWindowPos(ImVec2(0.0, 0.0));
		ImGui::SetNextWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y));

		ImGui::Begin(
			"Hello World!",
			p_open,
			ImGuiWindowFlags_NoInputs | 
			ImGuiWindowFlags_NoBackground |
			ImGuiWindowFlags_NoDecoration);
		ImGui::Text("Testing text");
		ImGui::End();

		//ImGui::PopStyleColor();
		ImGui::PopFont();
	}

	ImGui::Render();

	glClearColor(0.9, 0.9, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}