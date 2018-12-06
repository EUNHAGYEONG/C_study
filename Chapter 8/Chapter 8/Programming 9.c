/*
//난수 생성 함수를 이용하여 컴퓨터로 여러 가지 문제를 시뮬레이션하는 것을 흔히 몬테 까를로 시뮬레이션이라고 한다.
//간단한 동전 던지기 게임을 시뮬레이션하여 보자.
//컴퓨터가 동전을 던지고 사용자는 앞뒤를 말한다.
//컴퓨터는 난수 생성 함수를 이용하여 난수를 생성한 후에 난수가 짝수이면 동전의 앞면으로 간주하고 홀수이면 동전의 뒷면으로 간주한다.
//이것을 몇 번 반복하여 승패를 기록한다.
//18.11.23. 경은하

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Monte_simul(void) {
	int user;
	int com;
	int num;

	while (1) {
		srand(time(NULL));
		num = 1 + rand() % 10;

		if (num % 2 == 0)
			com = 0;
		else
			com = 1;

		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1) : ");
		scanf_s("%d", &user);

		if (user == -1)
			break;

		if (com > user)
			printf("컴퓨터가 이겼습니다. \n");
		else if (com < user)
			printf("사용자가 이겼습니다. \n");
		else if (com == user)
			printf("비겼습니다. \n");
		
	}
}

int main(void) {
	Monte_simul();
	return 0;
}
*/