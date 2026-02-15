#include <iostream>
#include <cstdint>  // to define the specific integral type of the enum

namespace Monster {
    enum MonsterType : std::int16_t {
        orc = -3, // = ... is the signed int associated with that enumerator (Automatically asigned 0,1,2..., if not given)
        goblin, // gets automatically assigned the value of orc + 1, i.e. -2 here
    };
}

int main() {
    Monster::MonsterType monster {Monster::goblin};
    Monster::MonsterType monster2 {};
    monster2 = static_cast<Monster::MonsterType>(-3);

    std::cout << monster;
    std::cout << monster2;

    return 0;
}
