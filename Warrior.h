#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"


class Warrior:public Hero{
public:
    Warrior(std::string name);
    void attackTarget(Character& target) override;
};




#endif