/*
//18.12.13 ������

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	int i = 0;
	struct student list[3];

	for (i = 0; i < 3; i++)
	{
		printf("�й��� �Է��Ͻÿ� : ");
		scanf_s("%d", &list[i].number);

		printf("�̸��� �Է��Ͻÿ� : ");
		gets_s(list[i].name, 10);
		
		fflush(stdin);

		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%lf", &list[i].grade);

	}

	for (i = 0; i < 3; i++)
		printf("�й� : %d, �̸� : %s, ���� : %f \n", list[i].number, list[i].name, list[i].grade);

	return 0;
}
*/