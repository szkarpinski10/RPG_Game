#include "Archer.h"

Archer::Archer(std::string name):Hero(name,100,15,5,100,0,0,300,0.6){}

void Archer::attackTarget(Character& target){
    int dmg=attack+(rand()%10);
    int bonusDmg=target.get_armor(); 

    if(rand()%100<20){
        dmg=dmg+bonusDmg;
    }
    target.takeDamage(dmg);
}