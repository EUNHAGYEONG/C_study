/*
//18.12.08 경은하
#include <stdio.h>
#define SIZE 10

int main(void) {
	int prices[10] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int min = prices[0];
	int i;
	
	printf("[ ");
	
	for (i = 0; i < SIZE; i++) {	
		printf("%d ", prices[i]);
	}

	printf("] \n");

	for (i = 1; i < SIZE; i++) {
		if (min > prices[i])
			min = prices[i];
	}

	printf("최소값은 %d입니다. \n", min);

	return 0;
}
*/