#include "Player.hh"

Player::Player(std::string t, float a)
{
    team = t;
    HP = a;

}

Player::~Player()
{
}

void Character::GetTeam() const
{
    return team;
}

void Character::GetHP() const
{
    return HP;
}