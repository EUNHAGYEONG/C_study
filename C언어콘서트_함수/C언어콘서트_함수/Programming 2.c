/*
//두수 중에서 더 큰 수를 반환하는 함수 get_bigger()를 다음과 같이 작성하고 이것을 이용해서 사용자로부터 받은 실수 두 개 중에서 더 큰 수를 출력하는 프로그램을 작성해본다.
//18.12.09 경은하

#include <stdio.h>

double get_bigger(double x, double y);

int main(void) {
	double x, y;

	printf("두 개의 실수를 입력해주세요 : ");
	scanf_s("%lf %lf", &x, &y);

	printf("더 큰 실수는 %f입니다. \n", get_bigger(x, y));

	return 0;
}

double get_bigger(double x, double y) {
	if (x > y) return x;
	else return y;
}
*/