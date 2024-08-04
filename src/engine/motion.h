#include <unordered_map>
#include <string>

#include "../configs/parser.h"
#include "types.h"

std::unordered_map<std::string,Vector3> calculateSystemPositions(std::unordered_map<std::string,Body>& system, double time);
Vector3 calculatePosition(std::string identifier, std::unordered_map<std::string,Body>& system, double time);
Vector3 calculateRelativePosition(Orbit& orbit, double time);