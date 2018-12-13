/*
//실수 3.14를 보내면 정수부 3과 소수부 0.14를 나누어서 보내주는 함수를 구현해보자.
//18.12.12 경은하

#include <stdio.h>

void get(double num, int *num_integer, double *num_demical);

int main(void) 
{
	int X_integer;
	double X, X_demical;

	printf("실수를 입력해주세요 : ");
	scanf_s("%lf", &X);

	get(X, &X_integer, &X_demical);

	printf("정수부 = %d \n", X_integer);
	printf("실수부 = %f \n", X_demical);

	return 0;
}

void get(double num, int *num_integer, double *num_demical)
{
	*num_integer = (int)num;
	*num_demical = num - (int)num;
}
*/