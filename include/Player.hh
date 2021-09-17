#pragma once
#include <string>

class Player
{
private:
    std::string team;
    float HP;
public:
    Player( const std::string t, float a)
    {
        team = t;
        HP = a;
    }
    ~Player();

    void setTeam(const std::string t)
    {
        team = t;
    }
    
    void setHP(const float a)
    {
        HP = a;
    }

};
