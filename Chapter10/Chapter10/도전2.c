/*
//프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
//예를 들어서 3과 5를 입력하면 3, 4, 5단이 출력되어야 한다.
#include <stdio.h> 

void gogo(int i, int j) {
	int num, k;
	for (num = i; num < j + 1; num++) {
		printf("[%d단] \n", num);
		for (k = 1; k < 10; k++) {
			printf("%d X %d = %d \n", num, k, num*k);
		}
		printf("======================================= \n");
		printf("\n");
	}
}

int main(void) {
	int a, b;
	printf("출력하고 싶은 구구단의 범위를 입력해주세요 : ");
	scanf_s("%d %d", &a, &b);

	gogo(a, b);
	return 0;
}
*/