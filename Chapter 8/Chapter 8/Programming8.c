/*
//2�� �������� ���� ����ϴ� �Լ� quad_eqn()�� �ۼ��Ͻÿ�.
//quad_eqn() �Լ��� a, b, c�� ��Ÿ���� double���� 3���� �μ��� �޴´�.
//�Ǻ����� ����� ��쿡�� ���� ����Ͻÿ�.
//���� �Ǻ����� ���� �����̸� ���� ���ٴ� �޼����� ����Ͻÿ�.
//18.11.23. ������
#include <stdio.h>
#include <math.h>
void quad_eqn(double a, double b, double c) {
	double D, result1, result2;
	D = b * b - a * c;
	if (D >= 0) {
		result1 = (-b + sqrt(b*b - 4.0*a*c)) / 2.0*a;
		result2 = (-b - sqrt(b*b - 4.0*a*c)) / 2.0*a;
		printf("������������ ���� %f, %f�Դϴ�. \n", result1, result2);
	}
	else
		printf("���� �������� �ʽ��ϴ�. \n");
}

int main(void) {
	double a, b, c;
	printf("a : ");
	scanf_s("%lf", &a);
	printf("b : ");
	scanf_s("%lf", &b);
	printf("c : ");
	scanf_s("%lf", &c);

	quad_eqn(a, b, c);

	return 0;
}
*/