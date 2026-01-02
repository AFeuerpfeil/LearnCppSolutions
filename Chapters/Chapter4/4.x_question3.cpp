#include <iostream>

void printHeight(int t, double h) {
	if (h > 0)
		std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters\n";
	else 
		std::cout << "At " << t << " seconds, the ball is on the ground.\n";
}


int main() {
	double gravity_constant { 9.8 };
	
	double h;
    std::cout << "Enter the height of the tower in meters: ";
	std::cin >> h;

	double current_height;
	
	// height after 0 seconds:
	for (int t=0; t<= 5; t++) {
		current_height = h - gravity_constant / 2 * t * t;
		current_height = std::max(0.0, current_height);
		printHeight(t, current_height);
	}
	return 0;
}
