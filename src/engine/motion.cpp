#include <unordered_map>
#include <string>
#include <iostream>

#include "motion.h"
#include "types.h"
#include "../configs/parser.h"
#include "../debug/debug.h"
#include "consts.h"

Vector3 calculateRelativePosition(Orbit& orbit, double time) {
	Vector3 res;

	//double meanAnomaly = 2.0 * pi * (time-orbit.epoch)/orbit.period + orbit.meanAnomalyAtEpoch;
	//std::cout << meanAnomaly << "\n";
	//meanAnomaly = mod(meanAnomaly, 2.0 * pi);
	//std::cout << meanAnomaly << "\n";
	double meanMotion = std::sqrt(orbit.parentGravParameter/std::abs(orbit.sma * orbit.sma * orbit.sma));
	double meanAnomaly = meanMotion * (time - orbit.epoch) + orbit.meanAnomalyAtEpoch;

	double trueAnomaly;

	if (orbit.eccentricity <= 1.0) {
		double eccentricAnomaly = meanAnomaly;
		
		for (int i = 0; i < 5; i++) {
			double delta = (eccentricAnomaly - orbit.eccentricity * std::sin(eccentricAnomaly) - meanAnomaly) / 
				(1.0 - orbit.eccentricity * std::cos(eccentricAnomaly));
			if (delta > 1.0) delta = 1.0;
			if (delta < -1.0) delta = -1.0;
			eccentricAnomaly -= delta;
		}
		
		//std::cout << eccentricAnomaly << "\n";
		trueAnomaly = 2.0 * std::atan(
			std::sqrt((1.0 + orbit.eccentricity)/(1.0 - orbit.eccentricity)) * std::tan(eccentricAnomaly/2.0));
		//std::cout << trueAnomaly << "\n";
	} else {
		double eccentricAnomaly = std::log(meanAnomaly/orbit.eccentricity + std::sqrt(1.0 + meanAnomaly * meanAnomaly/(orbit.eccentricity * orbit.eccentricity)));
		
		for (int i = 0; i < 5; i++) {
			double delta = (orbit.eccentricity * std::sinh(eccentricAnomaly) -  eccentricAnomaly - meanAnomaly) /
				(orbit.eccentricity * std::cosh(eccentricAnomaly) - 1.0);
			if (delta > 1.0) delta = 1.0;
			if (delta < -1.0) delta = -1.0;
			eccentricAnomaly -= delta;
		}

		//std::cout << eccentricAnomaly << "\n";
		trueAnomaly = 2.0 * std::atan(
			std::sqrt((1.0 + orbit.eccentricity)/(orbit.eccentricity - 1.0)) * std::tanh(eccentricAnomaly/2.0)
		);
		//std::cout << trueAnomaly << "\n";
	}

	double dist = orbit.sma * (1.0 - orbit.eccentricity * orbit.eccentricity)/(1 + orbit.eccentricity * std::cos(trueAnomaly));

	res.x = dist * std::cos(trueAnomaly + orbit.argp);
	res.z = dist * std::sin(trueAnomaly + orbit.argp);
	res.y = res.z * std::sin(orbit.inclination);
	res.z *= std::cos(orbit.inclination);

	double cosLan = std::cos(orbit.lan);
	double sinLan = std::sin(orbit.lan);

	double newX = cosLan * res.x - sinLan * res.z;
	double newZ = cosLan * res.z + sinLan * res.x;

	res.x = newX;
	res.z = newZ;

	return res;
}

Vector3 calculatePosition(std::string identifier, std::unordered_map<std::string,Body>& system, double time) {
	if (identifier == "Sun") {
		return Vector3{0.0, 0.0, 0.0};
	}

	Orbit orbit = system[identifier].orbit;
	Vector3 relativePosition = calculateRelativePosition(orbit, time);
	Vector3 parentPos = calculatePosition(orbit.referenceBody, system, time);

	return add(parentPos, relativePosition);
}

Vector3 calculatePositionMemo(std::string identifier, std::unordered_map<std::string,Body>& system, double time, std::unordered_map<std::string,Vector3>* memo) {
	if (identifier == "Sun") {
		(*memo)["Sun"] = Vector3{0.0, 0.0, 0.0};
		return Vector3{0.0, 0.0, 0.0};
	}
	if (memo->find(identifier) != memo->end()) {
		return (*memo)[identifier];
	}

	Orbit orbit = system[identifier].orbit;
	Vector3 relativePosition = calculateRelativePosition(orbit, time);

	Vector3 parentPos;
	std::string parent = orbit.referenceBody;
	if (memo->find(parent) != memo->end()) {
		parentPos = (*memo)[parent];
	} else {
		parentPos = calculatePositionMemo(parent, system, time, memo);
	}

	Vector3 res = add(parentPos, relativePosition);
	(*memo)[identifier] = res;
	return res;
}

std::unordered_map<std::string,Vector3> calculateSystemPositions(std::unordered_map<std::string,Body>& system, double time) {
	std::unordered_map<std::string,Vector3> res;

	for (auto body : system) {
		if (res.find(body.first) != res.end()) {
			continue;
		}
		//log(body.first);
		calculatePositionMemo(body.first, system, time, &res);
	}
	return res;
}