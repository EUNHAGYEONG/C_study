/*
//섭씨(Celsius) 온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의 함수와 그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의하고 이 두 함수를 호출하는 예제를 완성해보자.
//19.01.07 경은하
#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

int main(void)
{
	double Cel, Fah;
	int num;

	printf("1.화씨온도 입력, 2.섭씨온도 입력 ");
	scanf_s("%d", &num);

	if (num == 1) {
		printf("화씨온도 입력 : ");
		scanf_s("%lf", &Fah);

		Cel = FahToCel(Fah);

		printf("섭씨온도 : %f \n", Cel);
	}

	else if (num == 2) {
		printf("섭씨온도 입력 : ");
		scanf_s("%lf", &Cel);

		Fah = CelToFah(Cel);

		printf("화씨온도 : %f \n", Fah);
	}

	else {
		printf("다시 입력해주세요 : ");
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