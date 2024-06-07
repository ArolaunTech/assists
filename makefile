assistswin: src/main.cpp
	g++ src/main.cpp -o binaries/assists.exe -I include -L lib src/glad.c -lglfw3 -lopengl32 -lgdi32
assistsmacos: src/main.cpp
	g++ src/main.cpp -o binaries/assists -I include -L lib src/glad.c -lglfw
assistslinux: src/main.cpp
	g++ -o binaries/assistslinux `pkg-config --cflags glfw3` src/main.cpp `pkg-config --libs glfw3` -I include -L lib src/glad.c