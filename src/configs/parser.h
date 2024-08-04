#include <string>
#include <unordered_map>

#ifndef PARSER_H
#define PARSER_H

struct Orbit {
	double sma;
	double eccentricity;
	double inclination;
	double lan;
	double argp;

	double meanAnomalyAtEpoch;
	double epoch;

	double period;
	double parentGravParameter;

	std::string referenceBody;
};

class Body {
public:
	std::string name;
	double gravParameter;
	double radius;

	double color[3]; //rgb, 0-1 range

	Orbit orbit;
};

std::unordered_map<std::string, Body> loadStockBodies();
#endif