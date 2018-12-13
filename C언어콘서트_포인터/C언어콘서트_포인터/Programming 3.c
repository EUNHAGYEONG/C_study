/*
//2차 방정식의 근을 계산하는 함수를 작성하고 이 함수를 호출하여서 2차 방정식의 근을 출력하는 프로그램을 작성해보자.
//18.12.12 경은하

#include <stdio.h>
#include <math.h>

void quadratic(int num1, int num2, int num3, double *xmius, double *xplus);

int main(void) {
	int a, b, c;
	int D = 0;
	double result_plus, result_minus;

	printf("2차방정식의 계수를 입력하세요 \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);

	D = b * b - 4 * a * c;

	quadratic(a, b, c, &result_plus, &result_minus);

	if (D > 0) {
		printf("2차방정식의 근 = %f \n", result_plus);
		printf("2차방정식의 근 = %f \n", result_minus);
	}
	else if (D == 0)
		printf("2차 방정식의 근 = %f \n", result_plus);

	else
		printf("위 식은 실근이 존재하지 않습니다. \n");

	return 0;
}

void quadratic(int num1, int num2, int num3, double *xmius, double *xplus)
{
	*xmius = (-num2 - sqrt(num2 * num2 - 4 * num1 * num3)) / (2.0 * num1);
	*xplus = (-num2 + sqrt(num2 * num2 - 4 * num1 * num3)) / (2.0 * num1);
}
*/