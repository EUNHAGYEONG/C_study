/*
//프로그램 사용자로부터 숫자 n을 입력 받는다.
//그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해 보자.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int n;
	int k = 0;
	int result = 1;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &n);

	while (result < n) {
		result *= 2;
		k++;
	}

	printf("공식을 만족하는 k의 최댓값은 %d \n", k);

	return 0;
}
*/