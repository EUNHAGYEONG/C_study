/*
2018.11.11 경은하
//인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의해보자. 예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
#include <stdio.h>

void Pibo(int num) {
	int pibo, i, first = -1, second = 1;

	for (i = 0; i < num; i++) {
		pibo = first + second;
		printf("%d, ", pibo);
		first = second;
		second = pibo;
	}
}

int main(void) {
	int num;
	
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);

	Pibo(num);
	
	return 0;
}
*/