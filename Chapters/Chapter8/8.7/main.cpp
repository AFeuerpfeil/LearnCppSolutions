#include <iostream>


int main() {
    char x{'a'};

    while (x <= 'z') {
        std::cout << x << " has ASCII value " << static_cast<int>(x) << '\n';
        ++x;
    }

    return 0;
}
