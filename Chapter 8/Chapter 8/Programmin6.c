/*
//거듭제곱을 계산하는 함수를 작성하여 보자. 정수 n과 k를 받아서 n의 k승을 계산하는 함수 ipower() 함수를 작성한다.
//이 함수를 호출하여 3의 0승부터 3의 5승까지의 값을 테이블의 형태로 출력하는 프로그램을 작성하시오.
//18.11.22. 경은하

#include <stdio.h>

long ipower(int n, int k) {
	int i;
	long result = 1;
	for (i = 0; i < k; i++)
		result *= n;
	return result;
}

int main(void) {
	int num;
	for (num = 0; num < 6; num++)
		printf("%d \n", ipower(3, num));
	return 0;
}
*/