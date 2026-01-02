#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    b();

    return 0;
}
