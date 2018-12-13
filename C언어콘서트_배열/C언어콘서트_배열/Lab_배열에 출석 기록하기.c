/*
//18.12.08 경은하
#include <stdio.h>
#define SIZE 16

int main(void) {
	int absents[SIZE];
	int cnt = 0;
	int i = 0;
	double result = 0.0;

	for (i = 0; i < SIZE; i++) {
		printf("%d번째 강의에 출석하셨나요<출석은 1, 결석은 0> : ", i + 1);
		scanf_s("%d", &absents[i]);

		if (absents[i] == 0)
			cnt++;
	}

	result = cnt / 16.0;

	if (result > 0.3)
		printf("수업 일수 부족입니다. \n");
	
	return 0;
}
*/