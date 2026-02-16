#include <iostream>
#include <string_view>
struct Fraction {
    int numerator {};
    int denominator {};
};

constexpr Fraction operator*(const Fraction& x, const Fraction& y) {
    return Fraction {x.numerator * y.numerator, x.denominator * y.denominator};
}

std::ostream& operator<<(std::ostream& out, const Fraction& x) {
    return out << x.numerator << "/" << x.denominator;
}

int main() {
    Fraction x {2, 3};
    Fraction y {3, 9};
    std::cout << Fraction {7, 3} << "\n";
    std::cout << x * y << "\n";
    return 0;
}
