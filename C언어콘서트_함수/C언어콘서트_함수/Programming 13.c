
//다음을 계산하는 재귀적인 프로그램을 작성하시오.
//18.12.09 경은하
#include <stdio.h>

int triple(int number);

int main(void) {
	int X;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &X);

	triple(X);

	return 0;
}

int triple(int number) {
	int triple_result;
	int result;

	triple_result = number * number * number;
	
	if (number <= 0)
		return 0;
	else {
		result = triple(number - 1);
		return triple_result + result;
	}
}