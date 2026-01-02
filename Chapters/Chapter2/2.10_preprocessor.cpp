#include <iostream>

#define MY_NAME "Alex"

#define PRINT_JOE

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

#if 0 // Don't compile anything starting here (Opposite: #if 1)
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}
