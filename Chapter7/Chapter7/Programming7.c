/*
//배열을 이용하여 간단한 극장 예약 시스템을 작성해보자.
//아주 작은 극장이라서 좌석이 10개밖에 안 된다.
//예약을 하려고 하면 먼저 좌석 배치표를 보여준다.
//즉 예약이 끝난 좌석은 1로, 예약이 안 된 좌석은 0으로 나타낸다.
//2018.11.14 경은하
#include <stdio.h>
#define SIZE 10

int main(void) {
	int seat[SIZE] = { 0 };
	int i, x;
	char response;

	for (i = 0; i < 10; i++)
		seat[i] = 0;

	printf("좌석을 예약하시겠습니까?(y 또는 n) :");
	scanf_s("%c", &response);

	while (1) {

		if (response == 'y') {
			printf("====================== \n");
			printf(" 1 2 3 4 5 6 7 8 9 10 \n");
			printf("====================== \n");
			for (i = 0; i < SIZE; i++)
				printf(" %d", seat[i]);

			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까 ");
			scanf_s("%d", &x);
			seat[x - 1] = 1;
			printf("예약 되었습니다. \n");

		}

		if (response == 'n')
			break;

		printf("좌석을 예약하시겠습니까?(y 또는 n) :");
		scanf_s("%c", &response);
	}

	return 0;
}
*/