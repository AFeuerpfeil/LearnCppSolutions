#include <iostream>
#include <string>
#include <string_view>


struct Monster {
    enum MonsterType {
        ogre,
        dragon,
        orc,
        giant_spider,
        slime,
    };
    MonsterType type {};
    std::string name {};
    int health {};
};

constexpr std::string_view getMonsterTypeString(Monster::MonsterType type)
{
	switch (type)
	{
	case Monster::ogre:          return "Ogre";
	case Monster::dragon:        return "Dragon";
	case Monster::orc:           return "Orc";
	case Monster::giant_spider:  return "Giant Spider";
	case Monster::slime:         return "Slime";
	}

	return "Unknown";
}


void printMonster(const Monster& monster) {
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main() {
    printMonster(Monster {Monster::MonsterType::ogre, "Greg", 134});
    return 0;
}
