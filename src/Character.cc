#include "Character.hh"

Character::Character(std::string n, int l)
{
    name = n;
    level = l;
}

Character::~Character()
{
}

void Character::GetName() const
{
    return name;
}

void Character::GetLevel() const
{
    return level;
}