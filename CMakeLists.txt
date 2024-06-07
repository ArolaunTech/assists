cmake_minimum_required(VERSION 3.5)

set(CMAKE_OSX_DEPLOYMENT_TARGET "10.9" CACHE STRING "Minimum MacOS version" FORCE)
project(assists
	VERSION 0.0.1
	DESCRIPTION "Space trajectory optimizer"
	LANGUAGES C CXX)

add_library(glad
	STATIC
	"include/glad/glad.h"
	"include/KHR/khrplatform.h"
	"src/glad.c")
target_include_directories(glad PUBLIC "include/")

add_subdirectory("glfw-3.4/")

add_executable(assists src/main.cpp)

target_link_libraries(assists glad glfw ${GLFW_LIBRARIES})