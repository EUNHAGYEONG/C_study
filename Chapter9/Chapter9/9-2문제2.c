/*
2018.11.10 경은하
//섭씨 온도를 입력하면 화씨 온도를 반환하는 CelToFah라는 이름의 함수와 그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의하고 이 두 함수를 호출하는 예제를 완성해보자
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

	printf("온도의 종류를 구분해주세요(1:섭씨, 2:화씨) : ");
	scanf_s("%d", &num);

	printf("온도를 입력해주세오 :");
	scanf_s("%lf", &Temperature);

	if (num == 1) {
		printf("화씨온도로 바꾸면 %f입니다. \n", CelToFah(Temperature));
	}
	else if (num == 2) {
		printf("섭씨온도로 바꾸면 %f입니다. \n", FahToCel(Temperature));
	}
	else {
		printf("번호를 다시 입력해주세요 : ");
		scanf_s("%d", &num);
	}
	return 0;
}
*/