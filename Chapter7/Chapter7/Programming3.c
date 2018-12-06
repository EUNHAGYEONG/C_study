/*
//학생들의 시험 점수를 통계 처리하는 프로그램을 작성하여 보라. 각 학생들은 3번의 시험을 치른다.
#include <stdio.h>
int main(void) {
	int score[3][4] = { {1, 30, 10, 11}, {2, 40, 90, 32}, {3, 70, 65, 56} };
	int i, j, sum = 0;
	float avg;

	printf("학번\t시험 #1\t시험 #2\t시험 #3 \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", score[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 1; j < 4; j++) {
			sum += score[i][j];
		}
		avg = sum / 3.0;
		printf("학번 : %d, 평균 : %f \n", i+1, avg);
		sum = 0;
	}

	system("PAUSE");
	return 0;
}
*/