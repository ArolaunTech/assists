#include <string>
#include <vector>

#ifndef PARSER_H
#define PARSER_H
class Body {
public:
	std::string name;
	double gravParameter;
	double radius;
};

std::vector<Body> loadStockBodies();
#endif