class Application {
public:
	double idleFPS;
	int width;
	int height;
	int err;

	GLFWwindow* window;

	Application();
	~Application();

	void render();
	void idle();
};