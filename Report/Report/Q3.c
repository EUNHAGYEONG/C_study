#include <stdio.h>
#define PI 3.141592

double circleA(double radius);
double circleC(double radius);

int main(void)
{
	int user;
	double r, result;

	printf("[���� ����]�� [���� �ѷ�] �� �˰� ���� ����? (���� ���� : 1, ���� �ѷ� : 2)");
	scanf_s("%d", &user);

	if (user == 1) {
		printf("�������� �Է��ϼ��� : ");
		scanf_s("%lf", &r);
		result = circleA(r);
		printf("�������� %.2lf�� ���� ������ %.2lf�Դϴ�. \n", r, result);
	}
	else if (user == 2) {
		printf("�������� �Է��ϼ��� : ");
		scanf_s("%lf", &r);
		result = circleC(r);
		printf("�������� %.2lf�� ���� �ѷ��� %.2lf�Դϴ�. \n", r, result);
	}
	else
		printf("�� �� �ϳ��� ������! \n");

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