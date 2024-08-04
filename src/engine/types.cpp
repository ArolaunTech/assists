#include "types.h"

Vector3 add(Vector3 a, Vector3 b) {
	return Vector3{a.x + b.x, a.y + b.y, a.z + b.z};
}