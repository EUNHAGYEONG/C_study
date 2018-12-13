/*
//사용자로부터 5개의 실수 자료를 읽어서 평균과 표준 편차를 계산하는 프로그램을 작성하라.
//사용자로부터 받은 자료들은 배열에 저장하라.
//평균이란 n개의 실수가 주어져 있을 때, 다음과 같이 계산된다.
//표준 편차는 분사의 양의 제곱근으로 분산은 다음과 같이 계산된다.
//표준 편차는 자료가 평균값 주위에 어느 정도의 넓이로 분포하고 있는가를 나타내는 하나의 척도이다.
//18.12.08 경은하

#include <stdio.h>
#include <math.h>
#define SIZE 5

int main(void) {
	double list[SIZE];
	int i;
	double sum = 0, m = 0.0, v = 0.0, v_ = 0.0, sum_ = 0.0;

	for (i = 0; i < SIZE; i++) {
		printf("실수를 입력하시오 : ");
		scanf_s("%lf", &list[i]);

		sum += list[i];
	}

	m = sum / 5.0;
	
	for (i = 0; i < SIZE; i++)
		sum_ += (list[i] - m) * (list[i] - m);

	v = sum_ / 5.0;
	v_ = sqrt(v);

	printf("평균 : %f \n", m);
	printf("표준편차 : %f \n", v_);

	return 0;
}
*/