/*
2018.11.11 경은하
//두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성 해보자.
#include <stdio.h>

int main(void) {
	int num1, num2, i = 1, GCD;
	printf("두 개의 정수를 입력해주세요 : ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 >= i && num2 >= i) {
		if (num1 % i == 0 && num2 % i == 0) {
			GCD = i;
		}
		i++;
	}
	printf("최대공약수 : %d \n", GCD);
	return 0;
}
*/