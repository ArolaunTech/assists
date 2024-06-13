cmake_minimum_required(VERSION 3.5)

set(CMAKE_OSX_DEPLOYMENT_TARGET "10.9" CACHE STRING "Minimum MacOS version" FORCE)
set(VS_WINDOWS_TARGET_PLATFORM_MIN_VERSION "6.1.7600.16385" CACHE STRING "Minimum Windows Version: Windows 7" FORCE)

project(assists
	VERSION 0.0.1
	DESCRIPTION "Space trajectory optimizer"
	LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

set(ASSISTS_SOURCES
	src/main.cpp
	src/render/render.cpp
)

add_library(glad
	STATIC
	"include/glad/glad.h"
	"include/KHR/khrplatform.h"
	"src/glad.c")
target_include_directories(glad PUBLIC "include/")

add_subdirectory("glfw-3.4/")
include_directories("glfw-3.4/include/")

add_library(imgui
	STATIC
	"imgui-1.90.8/imgui.cpp"
	"imgui-1.90.8/imgui_widgets.cpp"
	"imgui-1.90.8/imgui_tables.cpp"
	"imgui-1.90.8/imgui_draw.cpp"
	"imgui-1.90.8/imgui_demo.cpp"

	"imgui-1.90.8/backends/imgui_impl_glfw.cpp"
	"imgui-1.90.8/backends/imgui_impl_opengl3.cpp"

	"imgui-1.90.8/misc/cpp/imgui_stdlib.cpp"

	"imgui-1.90.8/imconfig.h"
	"imgui-1.90.8/imgui_internal.h"
	"imgui-1.90.8/imgui.h"
	"imgui-1.90.8/imstb_rectpack.h"
	"imgui-1.90.8/imstb_textedit.h"
	"imgui-1.90.8/imstb_truetype.h"

	"imgui-1.90.8/backends/imgui_impl_glfw.h"
	"imgui-1.90.8/backends/imgui_impl_opengl3.h"

	"imgui-1.90.8/misc/cpp/imgui_stdlib.h")
target_include_directories(imgui PUBLIC "imgui-1.90.8/")

IF (WIN32)
	set(CMAKE_EXE_LINKER_FLAGS "-static")
ENDIF()

IF (APPLE)
	set(MACOSX_BUNDLE_ICON_FILE logo.icns)
	set_source_files_properties(logo/logo.icns PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")
	set_source_files_properties(src/fonts/Poppins/Poppins-Regular.ttf PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")

	add_executable(assists MACOSX_BUNDLE ${ASSISTS_SOURCES} logo/logo.icns)

	target_link_libraries(assists glad glfw imgui)


ELSEIF (WIN32)
	add_executable(assists WIN32 ${ASSISTS_SOURCES} logo/logo.txt)

	target_link_libraries(assists glad glfw imgui)


ELSE ()
	add_executable(assists ${ASSISTS_SOURCES})
	
	target_link_libraries(assists glad glfw imgui)
ENDIF()