/*
//�Ǽ� 3.14�� ������ ������ 3�� �Ҽ��� 0.14�� ����� �����ִ� �Լ��� �����غ���.
//18.12.12 ������

#include <stdio.h>

void get(double num, int *num_integer, double *num_demical);

int main(void) 
{
	int X_integer;
	double X, X_demical;

	printf("�Ǽ��� �Է����ּ��� : ");
	scanf_s("%lf", &X);

	get(X, &X_integer, &X_demical);

	printf("������ = %d \n", X_integer);
	printf("�Ǽ��� = %f \n", X_demical);

	return 0;
}

void get(double num, int *num_integer, double *num_demical)
{
	*num_integer = (int)num;
	*num_demical = num - (int)num;
}
*/