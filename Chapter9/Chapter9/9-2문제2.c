/*
2018.11.10 ������
//���� �µ��� �Է��ϸ� ȭ�� �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ��� �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���
#include <stdio.h>

double CelToFah(double Cel) {
	double Fah;
	Fah = 1.8 * Cel + 32.0;

	return Fah;
}

double FahToCel(double Fah) {
	double Cel;
	Cel = (Fah - 32.0) / 1.8;

	return Cel;
}

int main(void) {
	int num;
	double Temperature;

	printf("�µ��� ������ �������ּ���(1:����, 2:ȭ��) : ");
	scanf_s("%d", &num);

	printf("�µ��� �Է����ּ��� :");
	scanf_s("%lf", &Temperature);

	if (num == 1) {
		printf("ȭ���µ��� �ٲٸ� %f�Դϴ�. \n", CelToFah(Temperature));
	}
	else if (num == 2) {
		printf("�����µ��� �ٲٸ� %f�Դϴ�. \n", FahToCel(Temperature));
	}
	else {
		printf("��ȣ�� �ٽ� �Է����ּ��� : ");
		scanf_s("%d", &num);
	}
	return 0;
}
*/