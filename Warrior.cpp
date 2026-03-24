#include "Warrior.h"

Warrior::Warrior(std::string name):Hero(name,150,20,10,100,0,0,50,1.2) {}

void Warrior::attackTarget(Character& target){
    int dmg=attack+(rand()%5);
    target.takeDamage(dmg);
}