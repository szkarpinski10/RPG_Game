#include "Hero.h"

Hero::Hero(std::string name,int hp,int attack,int armor,int maxHp,int player_exp,int player_gold,float attackRange,float attackSpeed)
:Character (name,hp,attack,armor,maxHp,attackRange,attackSpeed),
player_exp(player_exp),player_gold(player_gold),level(1){}


void Hero::gainExp(int exp){
    player_exp+=exp;
}
void Hero::gainGold(int gold){
    player_gold+=gold;
}

void Hero::levelUp(){
    player_exp=0;
    level++;
    attack+=1;
    armor+=1;
    maxHp+=1;
    hp=maxHp;
}