/*
//두 점 사이의 거리를 계산하는 함수를 작성하여 보자. 
//2차원 공간에서 두 점 (x1, y1), (x2, y2) 사이의 거리를 계산하는 dist_2d()를 작성하시오.
//18.11.23. 경은하

#include <stdio.h>
#include <math.h>
double dist_2d(int x1, int x2, int y1, int y2) {
	double distance;
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return distance;
}

int main(void) {
	int x1, x2, y1, y2;
	printf("첫번째 점의 좌표를 구하시오(x, y) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("두번째 점의 좌표를 구하시오(x, y) : ");
	scanf_s("%d %d", &x2, &y2);

	printf("두점 사이의 거리는 %f입니다. \n", dist_2d(x1, x2, y1, y2));
	return 0;
}
*/