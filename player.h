#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int stamina;
    int attack;
    int x;
    int y;
    int firstStamina;

public:
    void set_name(string setName) {name = setName;}
    void set_stamina(int setStamina) {stamina = setStamina;}
    void set_attack(int setAttack) {attack = setAttack;}
    void set_x() {}
    void set_y() {}
    void set_firstStamina(int setFirstStamina) {firstStamina = setFirstStamina;}
    string get_name() {return name;}
    int get_stamina() {return stamina;}
    int get_attack() {return attack;}
    int get_x() {return x;}
    int get_y() {return y;}
    int get_firstStamina() {return firstStamina;}
};

#endif
