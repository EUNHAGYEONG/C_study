/*
//�� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��Ͽ� ����.
//2���� �������� �� �� (x1, y1)�� (x2, y2) ������ �Ÿ��� ����ϴ� dist_2d()�� �ۼ��Ͻÿ�.
//������ ���� �� �� ������ �Ÿ��� ����ϴ� ������ ����϶�.
//18.12. 09 ������

#include <stdio.h>
#include <math.h>

int dist_2d(int x1, int x2, int y1, int y2);

int main(void) {
	int x1, y1, x2, y2;
	int result;

	printf("(x1, y1), (x2, y2) = ");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);

	result = dist_2d(x1, x2, y1, y2);

	printf("�� �� ������ �Ÿ��� %d�Դϴ�. \n", result);

	return 0;
}

int dist_2d(int x1, int x2, int y1, int y2) {
	int d;

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return d;
}
*/