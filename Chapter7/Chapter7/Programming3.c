/*
//�л����� ���� ������ ��� ó���ϴ� ���α׷��� �ۼ��Ͽ� ����. �� �л����� 3���� ������ ġ����.
#include <stdio.h>
int main(void) {
	int score[3][4] = { {1, 30, 10, 11}, {2, 40, 90, 32}, {3, 70, 65, 56} };
	int i, j, sum = 0;
	float avg;

	printf("�й�\t���� #1\t���� #2\t���� #3 \n");
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
		printf("�й� : %d, ��� : %f \n", i+1, avg);
		sum = 0;
	}

	system("PAUSE");
	return 0;
}
*/