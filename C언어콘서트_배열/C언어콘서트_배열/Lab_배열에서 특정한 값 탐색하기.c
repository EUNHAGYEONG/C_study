/*
//18.12.08 ������
#include <stdio.h>
#define SIZE 10

int main(void) {
	int nums[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int i;
	int num;

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (i = 0; i < SIZE; i++) {
		if (num == nums[i]) {
			printf("Ž�� ���� �ε��� : %d \n", i);
			break;
		}
	}

	return 0;
}
*/