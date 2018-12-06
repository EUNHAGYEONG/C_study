/*
//사용자로부터 5개의 정수를 입력받아서 1차원 배열에 저장한다. 1차원 배열에서 최댓값과 최솟값을 계산해서 출력해보자.
#include <stdio.h>
#define SIZE 5

int main(void) {
	int list[SIZE] = { 0 };
	int i, num, max, min;
	for (i = 0; i < SIZE; i++) {
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &num);

		list[i] = num;
	}

	max = list[0];
	min = list[0];

	for (i = 1; i < SIZE; i++) {
		if (max < list[i])
			max = list[i];
		if (min > list[i])
			min = list[i];
	}

	printf("최댓값 = %d, 최솟값 = %d \n", max, min);
	system("PAUSE");
	return 0;
}
*/