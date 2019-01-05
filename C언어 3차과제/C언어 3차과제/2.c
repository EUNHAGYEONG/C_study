/*
//1과 같이 정수가 저장된 배열 A[100]의 원소들을 오름차순으로 정렬하는 프로그램을 작성하시오.
//단, 정렬 알고리즘은 거품정렬법을 사용한다.
//18.12.18 경은하

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100

int main(void)
{
	int A[SIZE];
	int i, j, tmp;

	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		A[i] = rand() % 200;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1; j++) {
			if (A[j] > A[j + 1]) {
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < SIZE; i++)
		printf("%d \n", A[i]);

	return 0;
}
*/