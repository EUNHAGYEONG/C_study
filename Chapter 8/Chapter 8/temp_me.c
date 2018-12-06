/*
//섭씨 온도를 화씨 온도로 변환하여 반환하는 함수 FtoC()를 작성하고 테스트하라.
//2018.11.21 경은하

#include <stdio.h>
double FtoC(double temp_c);

double FtoC(double temp_c) {
	double temp_f;

	temp_f = (temp_c * 9.0 / 5.0) + 32.0;
	return temp_f;
}

int main(void) {
	double temp_c;
	
	printf("섭씨온도를 입력해주세요 : ");
	scanf_s("%lf", &temp_c);

	printf("섭씨온도 %f는 화씨온도 %f 입니다. \n", temp_c, FtoC(temp_c));
	
	return 0;
}
*/