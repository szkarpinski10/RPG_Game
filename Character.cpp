#include "character.h"
#include <iostream>

Character::Character(std::string name,int hp, int attack,int armor,int maxHp,float attackRange, float attackSpeed)
: name(name), hp(hp), maxHp(maxHp),attack(attack),armor(armor),attackSpeed(attackSpeed),attackRange(attackRange) {}

//funkcje jakiest atm
void Character::takeDamage(int dmg){
    hp=std::max(0,hp-dmg);
}

void Character::heal(int amount){
    hp=std::min(maxHp,hp+amount);
}

bool Character::isAlive()const{
    if (hp<=0){
    return false;
    }
    return true;
}