/*
//����(Celsius) �µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ��� �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
//19.01.07 ������
#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

int main(void)
{
	double Cel, Fah;
	int num;

	printf("1.ȭ���µ� �Է�, 2.�����µ� �Է� ");
	scanf_s("%d", &num);

	if (num == 1) {
		printf("ȭ���µ� �Է� : ");
		scanf_s("%lf", &Fah);

		Cel = FahToCel(Fah);

		printf("�����µ� : %f \n", Cel);
	}

	else if (num == 2) {
		printf("�����µ� �Է� : ");
		scanf_s("%lf", &Cel);

		Fah = CelToFah(Cel);

		printf("ȭ���µ� : %f \n", Fah);
	}

	else {
		printf("�ٽ� �Է����ּ��� : ");
		scanf_s("%d", &num);
	}

	return 0;
}

double CelToFah(double Cel)
{
	double Fah;

	Fah = 1.8 * Cel + 32.0;

	return Fah;
}

double FahToCel(double Fah)
{
	double Cel;

	Cel = (Fah - 32.0) / 1.8;

	return Cel;
}
*/