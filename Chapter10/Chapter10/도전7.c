/*
2018.11.11 경은하
//프로그램 사용자로부터 숫자 n을 입력 받는다. 그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void) {
	int result = 1;
	int n;
	int k = 0;
	printf("상수 n 입력 : ");
	scanf_s("%d", &n);

	while (result < n) {
		result *= 2;
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d \n", k);
	return 0;
}
*/