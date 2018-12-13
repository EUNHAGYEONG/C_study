/*
//학생들의 시험 점수를 통계 처리하는 프로그램을 작성하여 보라. 각 학생들은 3번의 시험을 치른다.
//위의 표를 2차원 배열에 저장하라.
//각 학새아다 평균 점수를 출력하도록 하라.
//18.12.08 경은하

#include <stdio.h>

int main(void) {
	int scores[3][4] = {
		{1, 30, 10, 11}, {2, 40, 90, 32}, {3, 70, 65, 56} };
	int i, j;
	int sum = 0;
	double avg = 0.0;

	for (i = 0; i < 3; i++) {
		for (j = 1; j < 4; j++) {
			sum += scores[i][j];
		}
		avg = sum / 3.0;
		printf("%d번 학생의 평균 점수 : %.2f \n", i+1, avg);
		
		sum = 0;
		avg = 0.0;
	}

	return 0;
}
*/