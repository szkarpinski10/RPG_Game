#ifndef MAGE_H 
#define MAGE_H 
#include "Hero.h"


class Mage:public Hero{
public:
    Mage(std::string name);
    void attackTarget(Character& target) override;
};




#endif