#include "screens.h"

using namespace std;

void titleScreen() {

    system("cls");

    int choice = 0;

    do {
        vector<string> v;

        v.push_back("New Game");
        v.push_back("Exit");

        choice = arrayList(v);

        switch (choice)
        {
        case 1:
            newGame();
            break;
        case 2:
            exitGame();
            break;
        default:
            choice = 0;
            cout << "잘못된 입력입니다." << endl;
        }
    }
    while (choice == 0);
}

