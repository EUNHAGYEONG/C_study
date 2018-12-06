/*
//주어진 정수의 약수를 모두 찾아내는 함수 get_divisor()를 작성하여 보라.
//18.11.22. 경은하
#include <stdio.h>
void get_divisor(int num) {
	int i, cnt = 0;
	int list[100];
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			list[cnt] = i;
			cnt++;
		}
	}
	printf("%d의 약수 = ", num);
	for (i = 0; i <= cnt; i++)
		printf("%d ", list[i]);
}

int main(void) {
	int num;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	get_divisor(num);
	return 0;
}
*/