#include <unordered_map>
#include <vector>

#include <GLFW/glfw3.h>

#include "configs/parser.h"
#include "render/ui.h"

class Application {
private:
	unsigned int fbo;
	unsigned int planetColorBuffer;
	unsigned int rbo;
	unsigned int vbo;
	unsigned int vao;

	unsigned int planetShader;

	bool showDebug;

	std::vector<UILayout> layouts;

	void generate_buffers();
	unsigned int compile_and_link_shaders(char const * vertexShaderSource, char const * fragmentShaderSource);

	void initialize_ui_layouts();
public:
	double idleFPS;
	int width;
	int height;
	int err;
	int currentWindow;

	std::unordered_map<std::string, Body> system;

	GLFWwindow* window;

	Application();
	~Application();

	void render();
	void idle();

	void set_framebuffer_size(int bufferWidth, int bufferHeight);
};