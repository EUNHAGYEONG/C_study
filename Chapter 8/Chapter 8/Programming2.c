/*
//�μ� �߿��� �� ū ���� ��ȯ�ϴ� �Լ� get_bigger()�� ������ ���� �ۼ��ϰ� �̰��� �̿��ؼ� ����ڷκ��� ���� �Ǽ�
//�� �� �߿��� �� ū ���� ����ϴ� ���α׷��� �ۼ��غ���.
//18.11.22. ������

#include <stdio.h>
double get_bigger(double num1, double num2) {
	if (num1 > num2) return num1;
	else return num2;
}

int main(void) {
	double num1, num2;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�� ū���� %f�Դϴ�. \n", get_bigger(num1, num2));
	return 0;
}
*/
