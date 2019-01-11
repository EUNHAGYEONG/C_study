/*
//10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자.
//참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다.
//따라서 3은 소수이다.
//그러나 4는 소수가 아니다.
//1, 2, 4로 나눠지기 때문이다.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int num = 2;
	int i;
	int cnt_total = 0;

	while (cnt_total < 10) {
		int cnt = 0;

		for (i = 2; i < num; i++) {
			if (num % i == 0)
				cnt++;
		}
		if (cnt == 0) {
			cnt_total++;
			printf("%d ", num);
		}
		
		num++;
		cnt = 0;
	}

	return 0;
}
*/