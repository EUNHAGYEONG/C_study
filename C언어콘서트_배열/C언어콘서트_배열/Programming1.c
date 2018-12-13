/*
//배열 days[]를 아래와 같이 초기화하고 배열 원소의 값을 다음과 같이 출력하는 프로그램을 작성하시오.
//18.12.08 경은하
#include <stdio.h>

int main(void) {
	int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;

	for (i = 0; i < 12; i++)
		printf("%d월은 %d일까지 있습니다. \n", i + 1, days[i]);
	
	return 0;
}
*/