/*
//18.12.18 경은하

#include <stdio.h>

int cube_sum(int number);

int main(void)
{
	int n, result;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	result = cube_sum(n);

	printf("%d \n", result);
}

int cube_sum(int number)
{
	int cube;

	cube = number * number * number;

	if (number <= 0)
		return 0;
	else
		return cube + cube_sum(number - 1);
}
*/