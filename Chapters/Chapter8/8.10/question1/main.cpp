#include <iostream>

int main() {
    for (int i = 0; i <= 20; ++i) {
        if (i % 2 == 0) 
            std::cout << i << " ";
    }
    std::cout << '\n';

    for (int i = 0; i <= 20; i += 2) {
        std::cout << i << " ";
    }

    return 0;
}
