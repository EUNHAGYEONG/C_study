/*
2018.11.11 경은하
//2의 n승을 구하는 함수를 재귀적으로 구현해보자.
#include <stdio.h>

int Two(int n) {
	if (n > 0) {
		return 2 * Two(n - 1);
	}
	else
		return 1;
}

int main(void) {
	int n;
	printf("정수 n을 입력하세요 : ");
	scanf_s("%d", &n);
	
	printf("%d \n", Two(n));
	return 0;
}
*/