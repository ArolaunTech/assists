#include <imgui.h>

#include "ui.h"
#include "../app.h"

void Application::initialize_ui_layouts() {
	this->layouts.clear();

	UILayout layout0;
	layout0.partitions.clear();
	layout0.windowIndices = std::vector<int> {0};
	this->layouts.push_back(layout0);

	UILayout layout1;
	layout1.partitions = std::vector<Partition> {
		Partition{0, ImGuiDir_Left, 0.2},
		Partition{0, ImGuiDir_Right, 0.25},
		Partition{2, ImGuiDir_Up, 0.5},
		Partition{2, ImGuiDir_Down, 0.5}
	};
	layout1.windowIndices = std::vector<int> {1};
	this->layouts.push_back(layout1);
}