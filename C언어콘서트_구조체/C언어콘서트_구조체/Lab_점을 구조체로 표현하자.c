/*
//18.12.13 ������

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

	printf("���� ��ǥ�� �Է��ϼ���(x, y) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("���� ��ǥ�� �Է��ϼ���(x, y) : ");
	scanf_s("%d %d", &x2, &y2);

	struct point pt1 = { x1, y1 };
	struct point pt2 = { x2, y2 };

	D = sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y));
	printf("�� �� ������ �Ÿ��� %f�Դϴ�. \n", D);

	return 0;
}
*/
