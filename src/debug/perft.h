#include <vector>
#include <chrono>

typedef unsigned int TagID;

class PerftAnalyzer {
	private:
		TagID nextTag;
		std::vector<std::chrono::time_point<std::chrono::steady_clock>> tags;

	public:
		PerftAnalyzer();

		TagID tagTime();
		std::chrono::duration<double> elapsed(TagID tag);
};