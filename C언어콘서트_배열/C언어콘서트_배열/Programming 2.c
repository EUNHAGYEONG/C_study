/*
//사용자로부터 5개의 정수를 입력받아서 1차원 배열에 저장한다.
//1차원 배열에서 최댓값과 최솟값을 계산해서 출력해보자.
//18.12.08 경은하

#include <stdio.h>
#define SIZE 5

int main(void) {
	int list[SIZE];
	int i;
	int min, max;

	for (i = 0; i < SIZE; i++) {
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &list[i]);
	}

	min = list[0];
	max = list[0];

	for (i = 1; i < SIZE; i++) {
		if (min > list[i])
			min = list[i];
		if (max < list[i])
			max = list[i];
	}
	printf("최댓값 = %d 최솟값 = %d \n", max, min);

	return 0;
}
*/