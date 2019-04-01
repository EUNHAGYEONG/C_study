#include <stdio.h>

int main(void)
{
	int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("A+입니다. \n");
	else if (score >= 80)
		printf("A입니다. \n");
	else if (score >= 70)
		printf("B+입니다. \n");
	else if (score >= 60)
		printf("B입니다. \n");
	else if (score >= 50)
		printf("C+입니다. \n");
	else if (score >= 40)
		printf("C입니다. \n");
	else
		printf("F입니다. \n");

	return 0;
}