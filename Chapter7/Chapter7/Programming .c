/*
//����ڷκ��� 5���� �Ǽ� �ڷḦ �о ��հ� ǥ�� ������ ����ϴ� ���α׷��� �ۼ��϶�.
//����ڷκ��� ���� �ڷ���� �迭�� �����϶�.
//18.11.21 ������
#include <stdio.h>
#define SIZE 5
#include <math.h>

int main(void) {
	double number[SIZE] = { 0 };
	double num, m = 0.0, v = 0.0, s_v = 0.0;
	int i, sum_m = 0, sum_v = 0;

	for (i = 0; i < 5; i++) {
		printf("�Ǽ��� �Է����ּ��� : ");
		scanf_s("%lf", &num);

		sum_m += num;
	}

	m = sum_m / 5.0;
	
	for (i = 0; i < 5; i++) 
		sum_v += ((number[i] - m) * (number[i] - m));

	v = sum_v / 5.0;

	s_v = sqrt(v);

	printf("��� : %f \n", m);
	printf("ǥ������ : %f \n", s_v);

	return 0;
}
*/