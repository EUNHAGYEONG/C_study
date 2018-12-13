/*
//재귀 호출을 이용하여 정수의 각 자리수를 출력하는 함수 show_digit(int x)를 작성하고 테스트하라.
//18.12.09 경은하

#include <stdio.h>
int show_digit(int x);

int main(void) {
	int number;
	
	printf("정수를 입력하시오 ; ");
	scanf_s("%d", &number);

	show_digit(number);

	return 0;
}

int show_digit(int x) {
	int a;
	int result;
	
	result = x % 10;
	a = x / 10;
	
	if (x == 0)
		return 0;
	else {
		show_digit(a);
		printf("%d ", result);
		return 0;
	}
}
*/