/*
//2�� �������� ���� ����ϴ� �Լ� quad_eqn()�� �ۼ��Ͻÿ�.
//quad_eqn() �Լ��� a, b, c�� ��Ÿ���� double ���� 3���� �μ��� �޴´�.
//�Ǻ����� ����� ��쿡�� ���� ����Ͻÿ�.
//���� �Ǻ����� ���� �����̸� �״� ���ٴ� �޽����� ����Ͻÿ�.
//18.12.09 ������

#include <stdio.h>
#include <math.h>

double quad_eqn_plus(int a, int b, int c);
double quad_eqn_minus(int a, int b, int c);

int main(void) {
	int a, b, c;
	double D;

	printf("a, b, c�� ���� �Է����ּ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (D < 0)
		printf("���� �����ϴ�. \n");
	else if (D == 0)
		printf("������������ ���� %f�Դϴ�. \n", quad_eqn_plus(a, b, c));
	else
		printf("������������ ���� %f %f �Դϴ�. \n", quad_eqn_plus(a, b, c), quad_eqn_minus(a, b, c));

	return 0;
}

double quad_eqn_plus(int a, int b, int c) {
	double result;

	result = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

	return result;
}

double quad_eqn_minus(int a, int b, int c) {
	double result;

	result = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

	return result;
}
*/