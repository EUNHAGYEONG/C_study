/*
//���� �µ��� ȭ�� �µ��� ��ȯ�Ͽ� ��ȯ�ϴ� �Լ� FtoC()�� �ۼ��ϰ� �׽�Ʈ�϶�.
//2018.11.21 ������

#include <stdio.h>
double FtoC(double temp_c);

double FtoC(double temp_c) {
	double temp_f;

	temp_f = (temp_c * 9.0 / 5.0) + 32.0;
	return temp_f;
}

int main(void) {
	double temp_c;
	
	printf("�����µ��� �Է����ּ��� : ");
	scanf_s("%lf", &temp_c);

	printf("�����µ� %f�� ȭ���µ� %f �Դϴ�. \n", temp_c, FtoC(temp_c));
	
	return 0;
}
*/