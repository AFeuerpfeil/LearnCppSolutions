#include <iostream>
#include "foo.hpp"

void print(int x, int y)
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

int main() {
    print(3);       // uses default argument for y
    print(3, 7);    // uses provided argument for y

    return 0;
}
