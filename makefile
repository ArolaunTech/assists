assistswin: main.cpp
	g++ main.cpp -o binaries/assists.exe -I include -L lib glad.c -lglfw3 -lopengl32 -lgdi32
assistsmacos: main.cpp
	g++ main.cpp -o binaries/assists -I include -L lib glad.c -lglfw