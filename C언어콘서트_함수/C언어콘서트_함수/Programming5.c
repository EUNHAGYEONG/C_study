/*
//주어진 함수가 소수이지를 검사하는 함수 prime()을 작성하라.
//이 함수를 이용하여 1부터 100 사이에 존재하는 소수들을 모두 출력하라.
//하나의 힌트는 소수라면 1과 자기 자신을 제외한 약수를 가지면 안 된다.
// 18.12.09 경은하

#include <stdio.h>

void prime();

int main(void) {
	
	prime();

	return 0;
}

void prime() {
	int i, j;
	int cnt = 0;

	for (i = 2; i < 101; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 0)
			printf("%d ", i);

		cnt = 0;
	}
}
*/