#include <iostream>

double readNumber() { 
	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	return x;
}

char readCharacter() {
	std::cout << "Enter +, -, *, or /: ";
	char x;
	std::cin >> x;
	return x;
}

void printOperation(double x, double y, char op, double res) {
	std::cout << x << " " << op << " " << y << " is " << res << std::endl;
}
	


int main() {
	double x { readNumber() };
	double y { readNumber() };
	char op {readCharacter() };

	if (op == '+') {
		printOperation(x, y, op, x+y);
	} else if (op == '-') {
		printOperation(x, y, op, x-y);
	} else if (op == '*') {
		printOperation(x, y, op, x*y);
	} else if (op == '/') {
		printOperation(x, y, op, x/y);
	}
	
	return 0;
}
