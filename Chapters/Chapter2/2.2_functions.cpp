#include <iostream>

// int is the return type
int returnNumber(int x)
{
    return x;
}

int main()
{
    std::cout << returnNumber(5) << '\n'; // prints 5
    std::cout << returnNumber(6) + 2 << '\n'; // prints 8

    return 0;
}
