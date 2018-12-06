//2차 방정식의 근을 계산하는 함수를 작성하고 이 함수를 호출하여서 2차 방정식의 근을 출력하는 프로그램을 작성해보자.
//매개 변수로 포인터를 사용하면 함수가 2개 이상의 값을 반환할 수 있다.
//18. 11.29 경은하

#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double *xplus, double *xmius);

int main(void) {
	int a = 0, b = 0, c = 0;
	double D = 0.0;

	printf("a, b, c의 값을 입력해주세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	D = b * b - 4 * a*c;

	if (D < 0)
		printf("실근이 존재하지 않습니다. \n");
	else
		quadratic(a, b, c);

	return 0;
}