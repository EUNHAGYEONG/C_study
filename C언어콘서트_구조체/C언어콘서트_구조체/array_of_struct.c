/*
//18.12.13 경은하

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
		printf("학번을 입력하시오 : ");
		scanf_s("%d", &list[i].number);

		printf("이름을 입력하시오 : ");
		gets_s(list[i].name, 10);
		
		fflush(stdin);

		printf("학점을 입력하시오 : ");
		scanf_s("%lf", &list[i].grade);

	}

	for (i = 0; i < 3; i++)
		printf("학번 : %d, 이름 : %s, 학점 : %f \n", list[i].number, list[i].name, list[i].grade);

	return 0;
}
*/