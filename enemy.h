#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include <iostream>
#include <string>

class Enemy{
public:
    char name[20];
    int stamina;
    int attack;
    int x;
    int y;
    int firstStamina;
};

class Slime: public Enemy {


};

class Goblin: public Enemy {


};

class Harpy: public Enemy {


};

class Gargoyle: public Enemy {


};

class MaWang: public Enemy {


};


#endif

