#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include "app.h"

int main() {
	Application app;
	if (app.err > 0) {
		return app.err;
	}

	while(!glfwWindowShouldClose(app.window)) {
		app.idle();
    	glfwPollEvents();

    	app.render();
    	glfwSwapBuffers(app.window);
	}

	return 0;
}