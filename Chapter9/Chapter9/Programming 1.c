/*
//1���� �迭�� �޾Ƽ� �迭 ��ҵ��� ���� ����ϴ� �Լ� int get_array_sum(int *A, int size)�� �����ϰ� int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};�� ������ �׽�Ʈ�϶�
//18.11.28 ������
#include <stdio.h>
#define SIZE 10

int get_array_sum(int *A, int size);

int main(void) {
	int data[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int result = 0;

	result = get_array_sum(data, SIZE);

	printf("�迭 ����� �� = %d \n", result);

	return 0;
}

int get_array_sum(int *A, int size) {
	int i;
	int sum = 0;

	for (i = 0; i < size; i++) {
		sum += A[i];
	}

	return sum;
}
*/