#include "Enemy.h"

Enemy::Enemy(std::string name,int hp,int attack,int armor,int maxHp,int expReward,int goldReward, float attackSpeed, float attackRange)
:Character (name,hp,attack,armor,maxHp,attackRange,attackSpeed),
expReward(expReward),goldReward(goldReward) {}


void Enemy::attackTarget(Character& target){
    int enemyDamage=attack-target.get_armor();
    if (enemyDamage>0){
       target.takeDamage(enemyDamage);
    }
}

