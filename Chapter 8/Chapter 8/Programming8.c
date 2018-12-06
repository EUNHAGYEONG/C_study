/*
//2차 방정식의 근을 계산하는 함수 quad_eqn()를 작성하시오.
//quad_eqn() 함수는 a, b, c를 나타내는 double형의 3개의 인수를 받는다.
//판별식이 양수인 경우에만 근을 출력하시오.
//만약 판별식의 값이 음수이면 근이 없다는 메세지를 출력하시오.
//18.11.23. 경은하
#include <stdio.h>
#include <math.h>
void quad_eqn(double a, double b, double c) {
	double D, result1, result2;
	D = b * b - a * c;
	if (D >= 0) {
		result1 = (-b + sqrt(b*b - 4.0*a*c)) / 2.0*a;
		result2 = (-b - sqrt(b*b - 4.0*a*c)) / 2.0*a;
		printf("이차방정식의 근은 %f, %f입니다. \n", result1, result2);
	}
	else
		printf("근이 존재하지 않습니다. \n");
}

int main(void) {
	double a, b, c;
	printf("a : ");
	scanf_s("%lf", &a);
	printf("b : ");
	scanf_s("%lf", &b);
	printf("c : ");
	scanf_s("%lf", &c);

	quad_eqn(a, b, c);

	return 0;
}
*/