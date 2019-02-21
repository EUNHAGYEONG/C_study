/*
//두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성해 보자.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i;
	int GCD;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	for (i = 1; i < num2 + 1; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			GCD = i;
	}

	printf("두 수의 최대공약수 : %d \n", GCD);

	return 0;
}
*/