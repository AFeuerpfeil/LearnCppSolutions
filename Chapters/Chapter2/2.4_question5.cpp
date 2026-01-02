#include <iostream>

int readNumber() {
    int x;
    std::cin >> x;
    return x;
}

int doubleNumber(int x) {
    return 2 * x;
}

int main() {
    std::cout << doubleNumber(readNumber()) << '\n';
}
