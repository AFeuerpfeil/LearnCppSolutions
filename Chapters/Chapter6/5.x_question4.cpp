#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::cout << "Enter the name of person #1: ";
    std::string name1;
    std::getline(std::cin >> std::ws, name1);

    std::cout << "Enter the age of " << name1 << ": ";
    int age1;
    std::cin >> age1;

    std::cout << "Enter the name of person #2: ";
    std::string name2;
    std::getline(std::cin >> std::ws, name2);

    std::cout << "Enter the age of " << name2 << ": ";
    int age2;
    std::cin >> age2;

    std::string_view olderName;
    std::string_view youngerName;
    int olderAge, youngerAge;
    if (age1 > age2) {
        olderName = name1;
        olderAge = age1;
        youngerName = name2;
        youngerAge = age2;
    } else {
        olderName = name2;
        olderAge = age2;
        youngerName = name1;
        youngerAge = age1;
    }

    std::cout << olderName << " (age " << olderAge << ") is older than "
        << youngerName << " (age " << youngerAge << ").\n"; 

    return 0;
}
