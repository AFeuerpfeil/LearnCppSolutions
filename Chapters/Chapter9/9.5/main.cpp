#include <cstdint>
#include <iostream>
#include <limits> // Required for std::numeric_limits

template<typename T>
void type_max() { // No need to take an argument if only the type matters
    std::cout << "The type " << typeid(T).name() << " ranges from "
              << std::numeric_limits<T>::lowest() << " up to "
              << std::numeric_limits<T>::max() << '\n';
}

int main() {
    // Pass the type inside < >
    type_max<int>();
    type_max<unsigned int>();
    type_max<short>();
    
    return 0;
}
