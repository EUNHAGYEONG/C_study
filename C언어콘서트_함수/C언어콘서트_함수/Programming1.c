/*
//f(x, y) = 1.5*x + 3.0*y�� ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�غ���.
//18.12.09 ������
#include <stdio.h>

double compute(int x, int y);

int main(void) {
	int x, y;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	printf("f(x, y) = 1.5*x + 3.0*y�� %f �Դϴ�. \n", compute(x, y));

	return 0;
}

double compute(int x, int y) {
	double result;

	result = 1.5 * x + 3.0 * y;
	return result;
}
*/