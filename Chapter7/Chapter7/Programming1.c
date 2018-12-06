/*
//배열 days[]를 아래와 같이 초기화하고 배열 원소의 값을 다음과 같이 출력하는 프로그램을 작성하시오.
//31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
#include <stdio.h>
#define SIZE 12

int main(void) {
	int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;

	for (i = 0; i < SIZE; i++)
		printf("%d월은 %d일까지 있습니다. \n", i+1, days[i]);

	system("PAUSE");
	return 0;
}
*/
