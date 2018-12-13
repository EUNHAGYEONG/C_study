/*
//18.12.09 경은하
#include <stdio.h>

int com_sum(int n);

int main(void) {
	int n;
	
	printf("정수 어디까지 더하고 싶으신가요? : ");
	scanf_s("%d", &n);

	printf("1부터 %d까지의 합은 %d입니다. \n", n, com_sum(n));

	return 0;
}

int com_sum(int n) {
	int i;
	int sum = 0;

	for (i = 1; i < n + 1; i++) {
		sum += i;
	}

	return sum;
}
*/