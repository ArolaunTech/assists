#include <chrono>

#include "perft.h"

PerftAnalyzer::PerftAnalyzer() : nextTag(0) {}

TagID PerftAnalyzer::tagTime() {
	this->tags.push_back(std::chrono::steady_clock::now());
	return this->nextTag++;
}

std::chrono::duration<double> PerftAnalyzer::elapsed(TagID tag) {
	return std::chrono::steady_clock::now() - this->tags[tag];
}