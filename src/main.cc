#include <iostream>
#include "Character.hh"
#include "Player.hh"

void play()
{
    std::cout << "Player name is: "; << name << std::endl;
    std::cout << "Player level is: "; << level << std::endl;
    std::cout << "Player team is: "; << team << std::endl;
    std::cout << "Player HP is: "; << name << std::endl;
}

int main()
{
    std::string name;
    int level;
    std::string team;
    float HP;
    std::cout << "Enter name of the player: "; << std::endl;
    std::cin >> name;
    std::cout << "Enter level of the player: "; << std::endl;
    std::cin >> level;
    std::cout << "Enter team of the player: "; << std::endl;
    std::cin >> team;
    std::cout << "Enter HP of the player: "; << std::endl;
    std::cin >> HP;

    return 0;
}