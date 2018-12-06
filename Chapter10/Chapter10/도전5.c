/*
2018.11.11 경은하
//10개의 소수를 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void) {
	int num = 2;
	int cnt1 = 0, cnt2 = 0;
	int i;

	while (cnt1 < 10) {
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				cnt2++;
				break;
			}
		}
		if (cnt2 == 0) {
			printf("%d ", num);
			cnt1++;
		}
		num++;
		cnt2 = 0;
	}
	return 0;
}
*/