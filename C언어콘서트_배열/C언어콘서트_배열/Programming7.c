/*
//배열을 이용하여 간단한 극장 예약 시스템을 작성해보자.
//아주 작은 극장이라서 좌석이 10개밖에 안 된다.
//사용자가 예약을 하려고 하면 먼저 자석 배치표를 보여준다.
//즉 예약이 끝난 좌석은 1로, 예약이 안 된 좌석은 0으로 나타낸다.
//18.12.08 경은하

#include <stdio.h>
#define SIZE 10

int main(void) {
	int seat[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i, seat_num;
	char user;

	while(1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) : ");
		scanf_s("%c", &user);

		if (user == 'y') {
			printf("============================== \n");
			printf("1 2 3 4 5 6 7 8 9 10 \n");
			printf("============================== \n");

			for (i = 0; i < SIZE; i++)
				printf("%d ", seat[i]);
			printf("\n");

			printf("몇번째 좌석을 예약하시겠습니까?");
			scanf_s("%d", &seat_num);
			seat[seat_num - 1] = 1;
		}
	}

	return 0;
}
*/