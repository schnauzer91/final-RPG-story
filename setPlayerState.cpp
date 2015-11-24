#include "set.h"
#include "player.h"

void setPlayerState (int nameLength) {

        int i;
        int stamina = 0;
        int attack = 5;

        nameLength = nameLength % 2;

        if (nameLength = 0) {
            stamina = 50;
        }
        else {
            stamina = 50 + 10;
        }

        Player player;
        player.stamina = stamina + 10;
        player.firstStamina = player.stamina;

        player.attack = attack;
}
