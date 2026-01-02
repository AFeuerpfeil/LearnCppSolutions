#include <iostream>

void printASCII(int x) {
    std::cout << "The ASCII code is: " << x << std::endl;
}

int main() {
	std::cout << "Enter a single character: ";
	char x;
	std::cin >> x;
	std::cout << "You entered '" << x << "', which has ASCII code " << static_cast<int>(x) << "." << std::endl;

    printASCII(x);

    int c { x };
    std::cout << "You entered '" << x << "', which has ASCII code " << c << "." << std::endl;
	return 0;
}
