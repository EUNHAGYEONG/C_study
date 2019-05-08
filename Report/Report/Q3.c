#include <stdio.h>
#define PI 3.141592

double circleA(double radius);
double circleC(double radius);

int main(void)
{
	int user;
	double r, result;

	printf("[원의 면적]과 [원의 둘레] 중 알고 싶은 값은? (원의 면적 : 1, 원의 둘레 : 2)");
	scanf_s("%d", &user);

	if (user == 1) {
		printf("반지름을 입력하세요 : ");
		scanf_s("%lf", &r);
		result = circleA(r);
		printf("반지름이 %.2lf인 원의 면적은 %.2lf입니다. \n", r, result);
	}
	else if (user == 2) {
		printf("반지름을 입력하세요 : ");
		scanf_s("%lf", &r);
		result = circleC(r);
		printf("반지름이 %.2lf인 원의 둘레는 %.2lf입니다. \n", r, result);
	}
	else
		printf("둘 중 하나만 고르세요! \n");

	return 0;

}

double circleA(double radius)
{
	double area;
	area = PI * radius * radius;

	return area;
}

double circleC(double radius)
{
	double circum;
	circum = 2.0 * PI * radius;

	return circum;
}