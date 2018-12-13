/*
//18.12.13 경은하

#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	int x1, y1, x2, y2;
	double D;

	printf("점의 좌표를 입력하세요(x, y) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("점의 좌표를 입력하세요(x, y) : ");
	scanf_s("%d %d", &x2, &y2);

	struct point pt1 = { x1, y1 };
	struct point pt2 = { x2, y2 };

	D = sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y));
	printf("두 점 사이의 거리는 %f입니다. \n", D);

	return 0;
}
*/
