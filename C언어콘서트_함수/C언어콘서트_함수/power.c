/*
//18.12.09 ������
#include <stdio.h>

int get_integer() {
	int value;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &value);

	return value;
}

int power(int x, int y) {
	int i;
	int result = 1;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}

int main(void) {
	int x, y;

	x = get_integer();
	y = get_integer();

	printf("%d�� %d������ %d �Դϴ�. \n", x, y, power(x, y));

	return 0;
}
*/