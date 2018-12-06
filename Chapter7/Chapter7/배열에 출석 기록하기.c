/*
#include <stdio.h>
#define STUDENTS 16

int main(void) {
	int check[STUDENTS], answer, i, count = 0;
	for (i = 0; i < STUDENTS; i++)
	{
		printf("%d번째 강의에 출석하셨나요?(출석은 1, 결석은 0) ; ", i+1);
		scanf_s("%d", &answer);

		check[i] = answer;
		
		if (check[i] == 0)
			count++;
	}

	if ((count / 16.0) >= 0.3)
		printf("수업 일수 부족입니다. 결석률 : < %f > \n", count / 16.0 * 100);
	else
		printf("학점을 받을 수 있습니다. 결석률 : <%f > \n", count / 16.0 * 100);

	system("PAUSE");
	return 0;
}
*/
