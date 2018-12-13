/*
//18.12.09 경은하
#include <stdio.h>

int get_integer() {
	int value;
	printf("정수를 입력해주세요 : ");
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

	printf("%d의 %d제곱은 %d 입니다. \n", x, y, power(x, y));

	return 0;
}
*/