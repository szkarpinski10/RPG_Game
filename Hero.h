#ifndef HERO_H
#define HERO_H
#include "Character.h"

class Hero: public Character{
    protected:
    int player_exp;
    int player_gold;

    public:
    Hero(std::string name,int hp,int attack,int armor,int maxHp,int player_exp,int player_gold);
    ~Hero()=default;

    //
    int get_player_exp()const{return player_exp; };
    int get_player_gold()const{return player_gold; };

    //metody 
    void attackTarget(Character& target) override;
};

#endif