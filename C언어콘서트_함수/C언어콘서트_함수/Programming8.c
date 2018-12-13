/*
//2차 방정식의 근을 계산하는 함수 quad_eqn()를 작성하시오.
//quad_eqn() 함수는 a, b, c를 나타내는 double 형의 3개의 인수를 받는다.
//판별식이 양수인 경우에만 근을 출력하시오.
//만약 판별식의 값이 음수이면 그닝 없다는 메시지를 출력하시오.
//18.12.09 경은하

#include <stdio.h>
#include <math.h>

double quad_eqn_plus(int a, int b, int c);
double quad_eqn_minus(int a, int b, int c);

int main(void) {
	int a, b, c;
	double D;

	printf("a, b, c의 값을 입력해주세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (D < 0)
		printf("근이 없습니다. \n");
	else if (D == 0)
		printf("이차방정식의 근은 %f입니다. \n", quad_eqn_plus(a, b, c));
	else
		printf("이차방정식의 근은 %f %f 입니다. \n", quad_eqn_plus(a, b, c), quad_eqn_minus(a, b, c));

	return 0;
}

double quad_eqn_plus(int a, int b, int c) {
	double result;

	result = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

	return result;
}

double quad_eqn_minus(int a, int b, int c) {
	double result;

	result = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

	return result;
}
*/