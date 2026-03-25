#ifndef ENEMY_H 
#define ENEMY_H 
#include "Character.h"

class Enemy:public Character{
    protected:
    int expReward;
    int goldReward;

    public:
    Enemy(std::string name,int hp,int attack,int armor,int maxHp,int expReward,int goldReward, float attackRange,float attackSpeed );
    ~Enemy()=default;
    
    // getter
    int get_expReward()const{return expReward;}
    int get_goldReward()const{return goldReward;}

    //metody
    void attackTarget(Character& target) override;

};

#endif