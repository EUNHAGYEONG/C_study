/*
//f(x, y) = 1.5*x + 3.0*y를 계산하는 함수를 작성하고 테스트해본다.
//18.12.09 경은하
#include <stdio.h>

double compute(int x, int y);

int main(void) {
	int x, y;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	printf("f(x, y) = 1.5*x + 3.0*y는 %f 입니다. \n", compute(x, y));

	return 0;
}

double compute(int x, int y) {
	double result;

	result = 1.5 * x + 3.0 * y;
	return result;
}
*/