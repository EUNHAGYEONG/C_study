/*
//18.12.08 경은하
#include <stdio.h>

int main(void) {
	int board[3][3] = {
		{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
	int x, y;
	int i = 0;

	while (1) {
		printf("(x, y) 좌표 : ");
		scanf_s("%d %d", &x, &y);

		if (i % 2 == 0)
			board[x][y] = 'X';
		else
			board[x][y] = 'O';

		for (x = 0; x < 3; x++) {
			for (y = 0; y < 3; y++) {
				printf("%c ", board[x][y]);
			}
			printf("\n");
		}
		i++;
	}

	return 0;
}
*/