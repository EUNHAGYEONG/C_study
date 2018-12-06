/*
//1차원 배열을 받아서 배열 요소들의 합을 계산하는 함수 int get_array_sum(int *A, int size)을 구현하고 int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};을 가지고 테스트하라
//18.11.28 경은하
#include <stdio.h>
#define SIZE 10

int get_array_sum(int *A, int size);

int main(void) {
	int data[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int result = 0;

	result = get_array_sum(data, SIZE);

	printf("배열 요소의 합 = %d \n", result);

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