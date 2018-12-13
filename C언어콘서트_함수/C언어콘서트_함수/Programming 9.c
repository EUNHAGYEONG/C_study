/*
//간단한 동전 던지기 게임을 시뮬레이션하여 보자.
//컴퓨터가 동전을 던지고 사용자는 앞뒤를 말한다.
//컴퓨터는 난수 생성 함수를 이용하여 난수를 생성한 후에 난수가 짝수이면 동전의 앞면으로 간주하고 홀수이면 동전의 뒷면으로 간주한다.
//이것을 몇 번 반복하여 승패를 기록한다.
//18.12.09 경은하
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	
	srand(time(NULL));
	int com, user;

	while (1) {
		com = rand() % 2;
		
		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1) : ");
		scanf_s("%d", &user);
		
		if (user == -1)
			break;

		if (com > user)
			printf("컴퓨터가 이겼습니다. \n");
		else if (com < user)
			printf("사용자가 이겼습니다. \n");
		else
			printf("비겼습니다. \n");
	}

	return 0;
}
*/