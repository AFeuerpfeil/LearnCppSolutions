#include <iostream>
#include <cassert>
#include <random>


int make_guess(int num, int try_counter, int min, int max) {
    int x{0};

    while (true) {
        std::cout << "Guess a number between " << min << " and " << max << ": ";
        std::cin >> x;
        if (x < min || x > max) {
            std::cout << "Your guess is out of bounds. Try again.\n";
            continue;
        }
        break;
    } 
    std::cout << "#Guess " << try_counter << ": " << x << "\n";

    if (x < num) {
        std::cout << "Too low!\n";
        return -1;
    }
    else if (x > num) {
        std::cout << "Too high!\n";
        return 1;
    }
    else {
        std::cout << "Correct!\n";
        return 0;
    }
}


int main() {
    std::mt19937 mt{ std::random_device{}() };

    std::uniform_int_distribution die{1, 100};
start:
    int number_to_guess = die(mt);

    int min{1};
    int max{100};
    int result{ -1 };
    int tries{0};
    constexpr int max_tries{20};

    while (result != 0 && tries < max_tries) {
        ++tries;
        result = make_guess(number_to_guess, tries, min, max);
    }

    if (result != 0) {
        std::cout << "Sorry, you've used all your tries. The number was " << number_to_guess << ".\n";
    } else {
        std::cout << "You guessed the number in " << tries << " tries!\n";
        std::cout << "Do you want to play again? (y/n): ";
        char response;
        std::cin >> response;
        switch (response) {
        case 'n':
            return 0;
        case 'y':
            goto start; // Test use of goto instead of big while loop
            break;
        default:
            std::cout << "Invalid response. Exiting the game.\n";
            return 0;
        }
    }
    return 0;
}
