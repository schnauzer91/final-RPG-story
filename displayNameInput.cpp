#include "display.h"
#include "check.h"
#include "player.h"
#include "set.h"

using namespace std;

Player player;

void displayNameInput() {

    char input [100];
    int inputChecker;
    int length;

    // 입력 루프
    do {
        system("cls");

        inputChecker = 1;

		cout << " 플레이어의 이름을 입력하십시오 " << endl;
		cout << " ※ 영문/숫자 20 문자까지 " << endl;

        do {
            cout << " > " << endl;
            cin >> input;
            length = strlen(input);
            if (length> 20) {
				cout << " 입력 문자가 너무 많습니다. " << endl;
			} else  if (length == 0 ) {
				cout << " 아무것도 입력되어 있지 않습니다. " << endl;
			} else {
				inputChecker = checkInputStr (input, length);
				if (inputChecker == 1 ) {
					cout << " 잘못된 문자가 사용되고 있습니다." << endl;
				}
			}
        } while (inputChecker);

        //Player player;
        //strcpy(player.name, input);

        player.set_name(input);
        player.get_name();
        // setPlayerState => 능력치를 직접 설정한다.
        setPlayerState(length);
        cout << " " << endl;

        cout << " " << endl;
        cout << " " << endl;

    } while (input [0] == 'n' );
}
