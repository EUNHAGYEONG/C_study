/*
//18.12.18 ������

#include <stdio.h>

int cube_sum(int number);

int main(void)
{
	int n, result;

	printf("������ �Է��Ͻÿ� : ");
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