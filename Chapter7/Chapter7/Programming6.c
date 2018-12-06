/*
//주사위를 60000번 던져서 그 결과를 배열로 요약해보자. 잘 만들어진 주사위라면 하나의 면이 나올 확률은 약 1/6이 되어야 한다.
//컴퓨터에서 주사위 던지기는 난수 발생 함수 rand()를 통하여 구현하라.
//2018.11.14 경은하
#include <stdio.h>
#include <stdlib.h>
#define DICE 6
int main(void) {
	int dice, dice_list[DICE] = { 0 }, i;

	for (i = 0; i < 60000; i++) {
		dice = rand() % 6 + 1;

		if (dice == 1)
			dice_list[0]++;
		else if (dice == 2)
			dice_list[1]++;
		else if (dice == 3)
			dice_list[2]++;
		else if (dice == 4)
			dice_list[3]++;
		else if (dice == 5)
			dice_list[4]++;
		else
			dice_list[5]++;
	}

	printf("================== \n");
	printf("면\t\t빈도\n");
	printf("================== \n");
	for (i = 0; i < 6; i++)
		printf("%d\t\t%d \n", i + 1, dice_list[i]);
	
	return 0;
}
*/
