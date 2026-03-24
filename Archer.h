#ifndef ARCHER_H 
#define ARCHER_H 
#include "Hero.h"


class Archer:public Hero{
public:
    Archer(std::string name);
    void attackTarget(Character& target) override;
};




#endif