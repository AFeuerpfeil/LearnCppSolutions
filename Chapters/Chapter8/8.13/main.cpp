#include <iostream>

// This variable is visible to all functions in this file, but hidden from others
static unsigned int g_state = 0; 

void seedPRNG(unsigned int seed) {
    g_state = seed;
}

unsigned int getNextRandom() {
    g_state = 8253729 * g_state + 2396403;
    return g_state % 32768;
}

int main() {
    unsigned int x;
    std::cin >> x;
    seedPRNG(x); // Correctly updates the shared g_state
    
    for(int i=0; i<5; ++i)
        std::cout << getNextRandom() << '\t';
}
