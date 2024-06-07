cmake_minimum_required(VERSION 3.5)

project(assists
	VERSION 0.0.1
	DESCRIPTION "Space trajectory optimizer"
	LANGUAGES C CXX)

add_executable(assists MACOSX_BUNDLE src/main.cpp)