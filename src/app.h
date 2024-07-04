class Application {
private:
	unsigned int fbo;
	unsigned int planetColorBuffer;
	unsigned int rbo;
	unsigned int vbo;
	unsigned int vao;

	unsigned int planetShader;

	void generate_buffers();
	unsigned int compile_and_link_shaders(char const * vertexShaderSource, char const * fragmentShaderSource);
public:
	double idleFPS;
	int width;
	int height;
	int err;
	int currentWindow;

	GLFWwindow* window;

	Application();
	~Application();

	void render();
	void idle();

	void set_framebuffer_size(int bufferWidth, int bufferHeight);
};