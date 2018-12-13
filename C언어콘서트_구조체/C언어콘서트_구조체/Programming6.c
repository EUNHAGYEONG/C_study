/*
//열거형을 사용하여 사람과 컴퓨터 사이의 가위, 바위, 보 게임을 구현해보자.
//18.12.13 경은하

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum game { siccor, rock, paper };

int main(void)
{
	srand(time(NULL));

	enum game com, user;

	com = rand() % 3;

	printf("가위(0), 바위(1), 보(2)를 입력하세요 : ");
	scanf_s("%d", &user);

	printf("com : %d \t", com);
	printf("user : %d \n", user);

	if ((com == 0 && user == 2) || (com == 1 && user == 0) || (com == 2 && user == 1))
		printf("컴퓨터가 이겼습니다. \n");
	else if (com == user)
		printf("비겼습니다. \n");
	else
		printf("사용자가 이겼습니다. \n");

	return 0;
}
*/