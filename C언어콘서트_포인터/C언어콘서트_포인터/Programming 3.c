/*
//2�� �������� ���� ����ϴ� �Լ��� �ۼ��ϰ� �� �Լ��� ȣ���Ͽ��� 2�� �������� ���� ����ϴ� ���α׷��� �ۼ��غ���.
//18.12.12 ������

#include <stdio.h>
#include <math.h>

void quadratic(int num1, int num2, int num3, double *xmius, double *xplus);

int main(void) {
	int a, b, c;
	int D = 0;
	double result_plus, result_minus;

	printf("2���������� ����� �Է��ϼ��� \n");
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);

	D = b * b - 4 * a * c;

	quadratic(a, b, c, &result_plus, &result_minus);

	if (D > 0) {
		printf("2���������� �� = %f \n", result_plus);
		printf("2���������� �� = %f \n", result_minus);
	}
	else if (D == 0)
		printf("2�� �������� �� = %f \n", result_plus);

	else
		printf("�� ���� �Ǳ��� �������� �ʽ��ϴ�. \n");

	return 0;
}

void quadratic(int num1, int num2, int num3, double *xmius, double *xplus)
{
	*xmius = (-num2 - sqrt(num2 * num2 - 4 * num1 * num3)) / (2.0 * num1);
	*xplus = (-num2 + sqrt(num2 * num2 - 4 * num1 * num3)) / (2.0 * num1);
}
*/