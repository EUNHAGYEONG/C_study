/*
//18.12.08 경은하
#include <stdio.h>
#define SIZE 10

int main(void) {
	int nums[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int i;
	int num;

	printf("탐색할 값을 입력하시오 : ");
	scanf_s("%d", &num);

	for (i = 0; i < SIZE; i++) {
		if (num == nums[i]) {
			printf("탐색 성공 인덱스 : %d \n", i);
			break;
		}
	}

	return 0;
}
*/