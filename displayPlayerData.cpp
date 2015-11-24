#include "display.h"
#include "player.h"

using namespace std;

void displayPlayerData() {

    Player player;

    cout << " 플레이어 이름 : " << player.name << endl;
    cout << " 체력 : " << player.stamina << endl;
    cout << " 공격력 : " << player.attack << endl;

}

