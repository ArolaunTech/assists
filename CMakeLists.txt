cmake_minimum_required(VERSION 3.5)

set(CMAKE_OSX_DEPLOYMENT_TARGET "10.9" CACHE STRING "Minimum MacOS version" FORCE)
set(VS_WINDOWS_TARGET_PLATFORM_MIN_VERSION "6.1.7600.16385" CACHE STRING "Minimum Windows Version: Windows 7" FORCE)

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
include_directories("glfw-3.4/include/")

IF (WIN32)
	set(CMAKE_EXE_LINKER_FLAGS "-static")
ENDIF()

IF (APPLE)
	set(MACOSX_BUNDLE_ICON_FILE logo.icns)
	set_source_files_properties(logo/logo.icns PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")

	add_executable(assists MACOSX_BUNDLE src/main.cpp logo/logo.icns)
	add_executable(assistsdev src/main.cpp logo/logo.icns)

	target_link_libraries(assists glad glfw)
	target_link_libraries(assistsdev glad glfw)


ELSEIF (WIN32)
	add_executable(assists WIN32 src/main.cpp)
	add_executable(assistsdev src/main.cpp)

	target_link_libraries(assists glad glfw)
	target_link_libraries(assistsdev glad glfw)


ELSE ()
	add_executable(assists src/main.cpp)
	
	target_link_libraries(assists glad glfw)
ENDIF()