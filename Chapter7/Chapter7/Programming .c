/*
//사용자로부터 5개의 실수 자료를 읽어서 평균과 표준 편차를 계산하는 프로그램을 작성하라.
//사용자로부터 받은 자료들은 배열에 저장하라.
//18.11.21 경은하
#include <stdio.h>
#define SIZE 5
#include <math.h>

int main(void) {
	double number[SIZE] = { 0 };
	double num, m = 0.0, v = 0.0, s_v = 0.0;
	int i, sum_m = 0, sum_v = 0;

	for (i = 0; i < 5; i++) {
		printf("실수를 입력해주세요 : ");
		scanf_s("%lf", &num);

		sum_m += num;
	}

	m = sum_m / 5.0;
	
	for (i = 0; i < 5; i++) 
		sum_v += ((number[i] - m) * (number[i] - m));

	v = sum_v / 5.0;

	s_v = sqrt(v);

	printf("평균 : %f \n", m);
	printf("표준편차 : %f \n", s_v);

	return 0;
}
*/