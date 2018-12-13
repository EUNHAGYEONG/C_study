/*
//1단부터 9단까지의 구구단을 2차원 배열에 저장한다.
//사용자로부터 구구다 중의 하나를 받아서 2차원 배열에서 찾는다.
//찾은 결과를 화면에 출력하는 프로그램을 작성한다.
//18.12.08 경은하

#include <stdio.h>

int main(void) {
	int gogo[9][9];
	int i, j;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++)
			gogo[i][j] = (i + 1) * (j + 1);
	}

	printf("알고싶은 구구단을 입력하시오(예 : 9 3) : ");
	scanf_s("%d %d", &i, &j);

	printf("%d X %d = %d \n", i, j, gogo[i - 1][j - 1]);

	return 0;
}
*/