/*
//두 개의 복소수를 더하는 프로그램을 작성해보자.
//a+bi와 c+di의 덧셈은 다음과 같다.
//복소수는 구조체를 사용하여 표현해보자.
//18.12.13 경은하

#include <stdio.h>

struct complex_number {
	int a;
	int b;
};

int main(void)
{
	struct complex_number num1, num2, result;

	printf("첫번째 복소수를 입력하시오(a, b) : ");
	scanf_s("%d %d", &num1.a, &num1.b);
	printf("두번째 복소수를 입력하시오(a, b) : ");
	scanf_s("%d %d", &num2.a, &num2.b);

	result.a = num1.a + num2.a;
	result.b = num1.b + num2.b;

	printf("%d + %di \n", result.a, result.b);
	
	return 0;
}
*/