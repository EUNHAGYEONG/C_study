/*
//���� �߻��Լ� rand()�� ����Ͽ� �߻���Ų ������ �迭 A[100]�� ���� ������ ��, 
//�� �迭�� ��Ҹ� ó������ �о, �ִ밪(Max)�� �ּҰ�(min), �׸��� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//18.12.18 ������

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