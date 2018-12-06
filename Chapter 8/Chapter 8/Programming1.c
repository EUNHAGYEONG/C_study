/*
//f(x, y) = 1.5*x + 3.0*y를 계산하는 함수를 작성하고 테스트해본다.
//18.11.22. 경은하

#include <stdio.h>

double function(int x, int y) {
	double result;

	result = 1.5 * x + 3.0 * y;
	return result;
}

int main(void) {
	int x, y;
	printf("정수 두 개를 입력해주세요 : ");
	scanf_s("%d %d", &x, &y);

	printf("x = %d, y = %d, f(x, y) = %f \n", x, y, function(x, y));

	return 0;
}
*/