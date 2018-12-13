/*
//18.12.09 경은하

#include <stdio.h>

double FtoC(double temp_F);

int main(void) {
	double temp_F;

	printf("화씨 온도를 입력해주세요 : ");
	scanf_s("%lf", &temp_F);

	printf("화씨온도 %f은 섭씨온도 %f에 해당합니다. \n", temp_F, FtoC(temp_F));

	return 0;
}

double FtoC(double temp_F) {
	double temp_C;

	temp_C = (temp_F - 32.0) / 1.8;

	return temp_C;
}
*/