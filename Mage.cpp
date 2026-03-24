#include "Mage.h"

Mage::Mage(std::string name):Hero(name,80,25,3,80,0,0,250,1.5){}

void Mage::attackTarget(Character& target){
    int dmg=attack+(rand()%10);
    if(rand()%100<20){
        dmg*=2;
    }
    target.takeDamage(dmg);
}