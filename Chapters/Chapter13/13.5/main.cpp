#include <iostream>
#include <string_view>
#include <string>
#include <stdexcept>

namespace Animal {
    enum AnimalType {
        horse,
        dog,
        pig,
    };
}

constexpr std::string_view getAnimalName(Animal::AnimalType animal) {
    switch (animal) {
    case Animal::horse:
        return "horse";
    case Animal::dog:
        return "dog";
    case Animal::pig: 
        return "pig";
    }
}

std::ostream& operator<<(std::ostream& out, Animal::AnimalType animal) {
    return out << getAnimalName(animal);
}

constexpr Animal::AnimalType getAnimalFromString(std::string_view sv)
{
    if (sv == "horse")
        return Animal::horse;
    if (sv == "dog")   
        return Animal::dog;
    if (sv == "pig")
        return Animal::pig;
    throw std::invalid_argument("Not a valid animal!");
}

std::istream& operator>>(std::istream& in, Animal::AnimalType& animal) {
    std::string s{};
    in >> s;
    animal = getAnimalFromString(s);
    return in;
}

int main() {
    std::cout << "Input your animal name: ";
    Animal::AnimalType animal;
    std::cin >> animal;
    std::cout << "Your animal is a " << animal << ".\n";

    return 0;
}
