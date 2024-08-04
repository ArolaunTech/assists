#include <iostream>
#include <string>

void log(std::string message) {
	std::cout << message << "\n";
}

std::string getErrorMessage(int code) {
	return "An error has ocurred. Oh no! "
		"Please report this to the developer. "
		"Error code: " + std::to_string(code);
}