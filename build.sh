printf "\033[1m Building application \n======================\033[0m\n\n"

#Find if cmake lists exist in current directory
if [ -e CMakeLists.txt ]; then
	printf " - Successfully found CMakeLists.txt\n"
else
	printf "\033[0;31m\033[1mERROR:\033[0m\n"
	printf " Not able to find CMakeLists.txt. Try executing the script from the folder containing the source code.\n"
	exit 1
fi

rm libglad.a
rm libimgui.a
rm glfw-3.4/src/libglfw3.a
printf " - Successfully removed library files\n\033[1m - Running CMake:\033[0m\n"

cmake .
printf "\033[1m - Running build files:\033[0m\n"

if [[ "$OSTYPE" == "msys" ]]; then
	mingw32-make
else
	make
fi
printf "\033[1m - Successfully built application\033[0m\n"