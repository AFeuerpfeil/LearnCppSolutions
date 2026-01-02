#include <iostream>

int getNumber() {
    int x;
    std::cin >> x;
    return x;
}

int main() {
    int x { getNumber() };
    int y { getNumber() };

    if (x == y) {
        std::cout << x << " is equal to " << y << '\n';
    } else if (x < y) {
        std::cout << x << " is smaller than " << y << '\n';
    } else {
        std::cout << x << " is greater than " << y << '\n';
    }

    if (x == y) { 
        std::cout << x << " is equal to " << y << '\n';
    }

    if (x == y)
        std::cout << x << " is equal to " << y << '\n';
    
    return 0;
}
