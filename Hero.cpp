#include "Hero.h"

Hero::Hero(std::string name,int hp,int attack,int armor,int maxHp,int player_exp,int player_gold)
:Character (name,hp,attack,armor,maxHp),
player_exp(player_exp),player_gold(player_gold) {}


void Hero::attackTarget(Character& target){
    int heroDamage=attack-target.get_armor();
    if (heroDamage>0){
       target.takeDamage(heroDamage);
    }
}

