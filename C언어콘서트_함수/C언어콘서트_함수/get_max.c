/*
//18.12.09 경은하
#include <stdio.h>

int get_integer() {
	int value;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &value);

	return value;
}

int get_max(int x, int y) {
	if (x > y) return x;
	else return y;
}

int main(void) {
	int num1, num2;

	num1 = get_integer();
	num2 = get_integer();

	printf("%d \n", get_max(num1, num2));

	return 0;
}
*/