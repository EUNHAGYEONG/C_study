//2�� �������� ���� ����ϴ� �Լ��� �ۼ��ϰ� �� �Լ��� ȣ���Ͽ��� 2�� �������� ���� ����ϴ� ���α׷��� �ۼ��غ���.
//�Ű� ������ �����͸� ����ϸ� �Լ��� 2�� �̻��� ���� ��ȯ�� �� �ִ�.
//18. 11.29 ������

#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double *xplus, double *xmius);

int main(void) {
	int a = 0, b = 0, c = 0;
	double D = 0.0;

	printf("a, b, c�� ���� �Է����ּ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	D = b * b - 4 * a*c;

	if (D < 0)
		printf("�Ǳ��� �������� �ʽ��ϴ�. \n");
	else
		quadratic(a, b, c);

	return 0;
}