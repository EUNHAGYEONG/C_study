/*
//f(x, y) = 1.5*x + 3.0*y�� ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�غ���.
//18.11.22. ������

#include <stdio.h>

double function(int x, int y) {
	double result;

	result = 1.5 * x + 3.0 * y;
	return result;
}

int main(void) {
	int x, y;
	printf("���� �� ���� �Է����ּ��� : ");
	scanf_s("%d %d", &x, &y);

	printf("x = %d, y = %d, f(x, y) = %f \n", x, y, function(x, y));

	return 0;
}
*/