/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int A[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
	int i, num, max, max_num;

	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		num = rand() % 10;
		A[1][num]++;
	}

	max = A[1][0];
	max_num = 0;

	for (i = 1; i < 10; i++) {
		if (max < A[1][i]) {
			max = A[1][i];
			max_num = i;
		}
	}

	printf("가장 많이 생성된 수 = %d \n", max_num);
	
	return 0;
}
*/