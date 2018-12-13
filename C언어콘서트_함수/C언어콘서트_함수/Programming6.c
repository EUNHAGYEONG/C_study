/*
//거듭제곱을 계산하는 함수를 작성하여 보자.
//정수 n과 k를 받아서 n의 k제곱을 계산하는 함수 ipower() 함수를 작성한다.
//이 함수를 호출하여 3의 0제곱부터 3의 5제곱까지의 값을 테이블의 형태로 출력하는 프로그램을 작성하시오.
//18.12.09 경은하

#include <stdio.h>

int ipower(int n, int k);

int main(void) {
	int i;

	for (i = 0; i < 6; i++)
		printf("%d \n", ipower(3, i));

	return 0;
}

int ipower(int n, int k) {
	int result = 1;
	int i;

	for (i = 0; i < k; i++)
		result *= n;

	return result;
}
*/