/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("주사위 굴리기 게임을 시작합니다. ^0^ \n");
	
	srand(time(NULL));
	int com = rand() % 6 + 1;

	printf("컴퓨터가 굴린 주사위는 %d 입니다. \n", com);
	printf("자~ 이제 주사위를 굴려보세요(y, n) : ");

	char a;
	
	
	scanf_s("%c", &a);
	printf("\n");
	
	int user;

	if (a == 'y')
		user = rand() % 6 + 1;

	printf("당신이 굴린 주사위는 %d 입니다. \n", user);

	if (com > user)
		printf("\"내가 이김. 야! 이마 대라 이마.\"");
	else if (com < user)
		printf("\"내가 졌다. ㅠㅠ 한 번만 봐주면 안 돼?\"");
	else
		printf("\"아쉽군, 비기다니.. \"");

	return 0;
}
*/