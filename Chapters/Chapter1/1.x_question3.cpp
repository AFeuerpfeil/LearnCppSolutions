#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int x, y;
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    std::cout << x << " + " << y << " is " << (x + y) << ".\n";
    std::cout << x << " - " << y << " is " << (x - y) << "." << std::endl;
    return 0;
}
