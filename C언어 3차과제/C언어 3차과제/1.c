/*
//난수 발생함수 rand()를 사용하여 발생시킨 난수를 배열 A[100]에 직접 저장한 후, 
//이 배열의 요소를 처음부터 읽어서, 최대값(Max)과 최소값(min), 그리고 숫자의 합을 구하는 프로그램을 작성하시오.
//18.12.18 경은하

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void)
{
	srand(time(NULL));

	int A[SIZE];
	int i, max, min;
	int sum = 0;

	for (i = 0; i < SIZE; i++) {
		A[i] = rand() % 200;
		sum += A[i];
		printf("A[%d] = %d \n", i, A[i]);
	}

	max = A[0];
	min = A[0];

	for (i = 1; i < SIZE; i++) {
		if (max < A[i])
			max = A[i];
		if (min > A[i])
			min = A[i];
	}

	printf("max : %d, min = %d, sum = %d \n", max, min, sum);

	return 0;
}
*/