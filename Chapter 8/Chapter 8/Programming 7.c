/*
//�� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��Ͽ� ����. 
//2���� �������� �� �� (x1, y1), (x2, y2) ������ �Ÿ��� ����ϴ� dist_2d()�� �ۼ��Ͻÿ�.
//18.11.23. ������

#include <stdio.h>
#include <math.h>
double dist_2d(int x1, int x2, int y1, int y2) {
	double distance;
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return distance;
}

int main(void) {
	int x1, x2, y1, y2;
	printf("ù��° ���� ��ǥ�� ���Ͻÿ�(x, y) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� ���Ͻÿ�(x, y) : ");
	scanf_s("%d %d", &x2, &y2);

	printf("���� ������ �Ÿ��� %f�Դϴ�. \n", dist_2d(x1, x2, y1, y2));
	return 0;
}
*/