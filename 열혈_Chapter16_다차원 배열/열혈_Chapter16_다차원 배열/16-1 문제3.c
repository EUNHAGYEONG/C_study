/*
성적관리 프로그램을 작성하자.
과목은 국어, 영어, 수학, 국사 이렇게 네 과목이고 학생은 철희, 철수, 영희, 영수 이렇게 네 사람이다.
프로그램 사용자로부터 이 네 사람의 네 과목 점수를 입력 받는다.
그리고 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장해야 한다.
저장이 끝났다면, 개인별 총점과 과목별 총점을 계산해서 다음 그림에서 보이는 배열의 위치에 저장해야 한다.
그리고 마지막에는 저장된 값의 검증을 위한 출력을 보여야 한다.
*/

//19.02.22 경은하
/*
#include <stdio.h>

int main(void)
{
	int score[5][5];
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("점수 입력(국영수국 순) : ");
			scanf_s("%d", &score[i][j]);
		}
	}

	int sum = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			sum += score[i][j];
		score[i][4] = sum;
		sum = 0;
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			sum += score[j][i];
		score[4][i] = sum;
		sum = 0;
	}

	for (i = 0; i < 4; i++) {
		sum += score[4][i];
	}

	score[4][4] = sum;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", score[i][j]);
		printf("\n");
	}

	return 0;
}
*/