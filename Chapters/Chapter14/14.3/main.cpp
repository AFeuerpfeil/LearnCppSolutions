#include <iostream>

class IntPair {
public:
    int m_x{};
    int m_y{};

    void print() const {
        std::cout << "Pair(" << m_x << ", " << m_y << ")\n";
    }

    bool isEqual(IntPair a) const {
        return (m_x == a.m_x && m_y == a.m_y);
    }
};

int main() {
	const IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

	return 0;
}
