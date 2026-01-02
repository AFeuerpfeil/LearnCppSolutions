#include <iostream>

void print(int x) {
    std::cout << x << '\n';
}

int main() {
    double x;
    std::cin >> x;
    
    print(x);

    print(static_cast<int>(x));
    
    return 0;
}
