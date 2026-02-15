#include <iostream>
#include <string_view>
#include <string>
#include <stdexcept>


enum class Animal {
    pig,
    chicken,
    goat, 
    cat,
    dog,
    duck
};

std::string_view animalName(Animal animal) {
    switch (animal) {
    case Animal::pig:       return "pig";
    case Animal::chicken:   return "chicken";
    case Animal::goat:      return "goat";
    case Animal::cat:       return "cat";
    case Animal::dog:       return "dog";
    case Animal::duck:      return "duck";
    }
    throw std::invalid_argument("This is not a valid animal.");
}

constexpr Animal getAnimalFromString(std::string_view sv)
{
    if (sv == "pig")
        return Animal::pig;
    if (sv == "chicken")   
        return Animal::chicken;
    if (sv == "goat")
        return Animal::goat;
    if (sv == "cat")
        return Animal::cat;
    if (sv == "dog")
        return Animal::dog;
    if (sv == "duck")
        return Animal::duck;
    throw std::invalid_argument("Not a valid animal!");
}

std::ostream& operator<<(std::ostream& out, Animal animal) {
    return out << animalName(animal);
}

std::istream& operator>>(std::istream& in, Animal& animal) {
    std::string s{};
    in >> s;
    animal = getAnimalFromString(s);
    return in;
}

int numberOfLegs(Animal animal) {
    switch (animal) {
    case Animal::pig:       return 4;
    case Animal::chicken:   return 2;
    case Animal::goat:      return 4;
    case Animal::cat:       return 4;
    case Animal::dog:       return 4;
    case Animal::duck:      return 2;
    }
    throw std::invalid_argument("This is not a valid animal.");
}

int main() {
    std::cout << "Write your animal: ";
    Animal animal;
    std::cin >> animal;
    std::cout << "A " << animal << " has " << numberOfLegs(animal) << " legs.\n";

}
