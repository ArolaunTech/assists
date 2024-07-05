assists
=

Compilation instructions (incomplete)
-
### Requirements:
  - You need to have CMake installed to follow this guide.
### Instructions:
1. Download the source code of this repository. Put everything in a folder.
2. Download the source code for:
  - GLFW (source code at https://github.com/glfw/glfw). Name the folder containing GLFW source code "glfw-3.4" and put it in the main folder.
    - Important note for Linux users: download GLFW version 3.3 instead of the more recent 3.4 and put it in a folder called "glfw-3.3" in the main folder. 
  - ImGui (source code at https://github.com/ocornut/imgui). Name the folder containing ImGui source code "imgui-docking" and put it in the main folder.
  - GLAD (source code at https://glad.dav1d.de/). Choose the Core profile and gl version 4.6 before generating and downloading the code. Put the ```include``` folder in the main folder and put ```glad.c``` from the ```src``` folder into the ```src``` folder of the main folder.
3. ```cd``` into the main folder.
4. Run ```sh build.sh``` or run ```cmake .``` before running the makefile. Configure CMake as necessary and download any required libraries to fix any errors.
5. Run the executable to test it.