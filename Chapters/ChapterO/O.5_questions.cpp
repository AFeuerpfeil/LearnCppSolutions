#include <cstdint>
#include <iostream>

int main() {
    int x_temp;
    std::cout << "Enter a number between 0 and 255: ";
    std::cin >> x_temp;
    std::uint8_t x {static_cast<std::uint8_t>(x_temp)};
    
    for (int i{ 7 }; i >= 0; --i) {
        std::cout << ((x & (1 << i)) ? '1' : '0');
    }
    std::cout << '\n';
    for (int i{ 7 }; i >= 0; --i) {
        bool flag{x >= (1 << i)};
        if (flag) {
            x -= (1 << i);
        }
        std::cout << (flag ? '1' : '0');
    }
    std::cout << std::endl;
    return 0;
}
