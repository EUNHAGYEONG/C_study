/*
//두 점 사이의 거리를 계산하는 함수를 작성하여 보자.
//2차원 공간에서 두 점 (x1, y1)와 (x2, y2) 사이의 거리를 계산하는 dist_2d()를 작성하시오.
//다음과 같은 두 점 사이의 거리를 계산하는 공식을 사용하라.
//18.12. 09 경은하

#include <stdio.h>
#include <math.h>

int dist_2d(int x1, int x2, int y1, int y2);

int main(void) {
	int x1, y1, x2, y2;
	int result;

	printf("(x1, y1), (x2, y2) = ");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);

	result = dist_2d(x1, x2, y1, y2);

	printf("두 점 사이의 거리는 %d입니다. \n", result);

	return 0;
}

int dist_2d(int x1, int x2, int y1, int y2) {
	int d;

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return d;
}
*/