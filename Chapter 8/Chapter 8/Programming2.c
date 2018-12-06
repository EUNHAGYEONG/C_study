/*
//두수 중에서 더 큰 수를 반환하는 함수 get_bigger()를 다음과 같이 작성하고 이것을 이용해서 사용자로부터 받은 실수
//두 개 중에서 더 큰 수를 출력하는 프로그램을 작성해본다.
//18.11.22. 경은하

#include <stdio.h>
double get_bigger(double num1, double num2) {
	if (num1 > num2) return num1;
	else return num2;
}

int main(void) {
	double num1, num2;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("더 큰수는 %f입니다. \n", get_bigger(num1, num2));
	return 0;
}
*/
