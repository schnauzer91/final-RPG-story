#include "check.h"

int checkInputStr (char str [20], int length) {

    int i;					 // 루프 용 변수

	for (i = 0 ; i <length; i ++) {
		if ((str [i] < '0' || '9' < str [i]) && (str [i] < 'a' || 'z' < str[i])
            && (str[i] < 'A' || 'Z' < str [i])) {
			// 잘못된 문자가 사용되고 있기 때문에 1을 반환
			return 1;
		}
	}
	// 여기까지 오면 모든 유효한 문자이므로 0을 반환
	return 0;
}
