#include <iostream>

void fizzbuzz(int n) {
	for (int i = 1; i<=n; ++i) {
        if (i % 3 == 0)
            std::cout << "fizz";
        
        if (i % 5 == 0)
            std::cout << "buzz";
        
        if (i % 7 == 0)
            std::cout << "pop";

        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            std::cout << i;
        
		std::cout << "\n";
	}
	return;
}

int main() {
	fizzbuzz(150);
	return 0;
}
