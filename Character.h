#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character{
    protected:
    std::string name;
    int hp;
    int attack;
    int armor;
    int maxHp;
    // int attackRange;
    // int aoe;
    //int speed;
    //int level;
    //int mana;
    //int stamina;
    
    public:
    //konstruktor
    Character(std::string name,int hp,int attack,int armor,int maxHp);
    //destruktor
    virtual ~Character()=default;

    // gettery 

    std::string get_name()const{return name;}

    int get_hp()const{return hp;}

    int get_attack()const{return attack;}
    
    int get_armor()const{return armor;}

    int get_maxHp()const{return maxHp;}
     
    // atak i otrzymywanie obrazen
    // metoda może być nadpisana przez klasy dzieci
    virtual void attackTarget(Character& target)=0;
    void takeDamage(int dmg);

    //leczenie   
    void heal(int amount);
    bool isAlive() const;

};


#endif