#include <stdio.h>

int main(void)
{
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("A+�Դϴ�. \n");
	else if (score >= 80)
		printf("A�Դϴ�. \n");
	else if (score >= 70)
		printf("B+�Դϴ�. \n");
	else if (score >= 60)
		printf("B�Դϴ�. \n");
	else if (score >= 50)
		printf("C+�Դϴ�. \n");
	else if (score >= 40)
		printf("C�Դϴ�. \n");
	else
		printf("F�Դϴ�. \n");

	return 0;
}