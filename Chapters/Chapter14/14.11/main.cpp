#include <iostream>
#include <string>


class Ball {
private:
    std::string m_color {"black"};
    double m_radius {10.0};

public:
    Ball(std::string color = "black", double radius = 10.0) : m_color {color}, m_radius {radius} {}
    Ball(double radius) : m_radius {radius} {}
};


int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
