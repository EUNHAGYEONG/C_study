/*
//1�� ���� ������ ����� �迭 A[100]�� ���ҵ��� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//��, ���� �˰����� ��ǰ���Ĺ��� ����Ѵ�.
//18.12.18 ������

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