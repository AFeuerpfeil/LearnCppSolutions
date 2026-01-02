#include <iostream>

int main() {
    std::cout << 2 << '\n';
    std::cout << -2.2343 << '\n';
    std::cout << 'A' << '\n';
    std::cout << "Hello, World!" << std::endl;

    int a, b;
    std::cout << "Enter two integers:\n";
    std::cin >> a >> b;
    int sum = a + b;
    std::cout << a << " + " << b << " = " << sum << '\n';

    int x = 5;      // copy-initialization
    int y { 5 };    // direct-list-initialization
    int z ( 5 );    // direct-initialization
    int w {};       // value-initialization (initialized to zero)
    int u;          // default-initialization (uninitialized)

    std::cout << x << y << z << w << u << std::endl;
    // Value- and direct-list-initializations are recommended 

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if  unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';
    return 0;
}
