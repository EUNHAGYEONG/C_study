/*
//�μ� �߿��� �� ū ���� ��ȯ�ϴ� �Լ� get_bigger()�� ������ ���� �ۼ��ϰ� �̰��� �̿��ؼ� ����ڷκ��� ���� �Ǽ� �� �� �߿��� �� ū ���� ����ϴ� ���α׷��� �ۼ��غ���.
//18.12.09 ������

#include <stdio.h>

double get_bigger(double x, double y);

int main(void) {
	double x, y;

	printf("�� ���� �Ǽ��� �Է����ּ��� : ");
	scanf_s("%lf %lf", &x, &y);

	printf("�� ū �Ǽ��� %f�Դϴ�. \n", get_bigger(x, y));

	return 0;
}

double get_bigger(double x, double y) {
	if (x > y) return x;
	else return y;
}
*/