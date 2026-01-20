#include <iostream>
#include <random>
#include <chrono>


int main() {


	std::mt19937_64 mt{ static_cast<std::mt19937::result_type>(
		std::chrono::high_resolution_clock::now().time_since_epoch().count()
		) };

	for(int i = 0; i <= 100; ++i) {
		std::cout << mt() << "\n";
	}

	return 0;
}
