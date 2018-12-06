/*
//주어진 정수가 소수인지를 검사하는 함수 prime()을 작성하라.
//이 함수를 이용하여 1부터 100 사이에 존재하는 소수들을 모두 출력하라.
//18.11.22. 경은하

#include <stdio.h>
void prime(int num) {
	int i;
	int cnt = 0;
	for (i = 2; i < num; i++) {
		if (num % i == 0)
			cnt++;
	}
	if (cnt == 0)
		printf("%d ", num);
}

int main(void) {
	int j;
	for (j = 2; j <= 100; j++) {
		prime(j);
	}
	return 0;
}
*/