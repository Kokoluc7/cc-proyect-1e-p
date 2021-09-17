#pragma once
#include <string>

class Character
{
private:
    std::string name;
    int level;
public:
    Character(const std::string n, int l)
    {
        name = n;
        level = l;
    }
    ~Character();

    void setName(const std::string n)
    {
        name = n;
    }

    void setLevel(const int l)
    {
        level = l;
    }


};
