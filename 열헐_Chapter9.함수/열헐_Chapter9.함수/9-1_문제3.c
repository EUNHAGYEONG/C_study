/*
//인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
//예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
//19.01.07 경은하

#include <stdio.h>

void pibo(int num);

int main(void)
{
	int A;
	
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &A);

	pibo(A);

	return 0;
}

void pibo(int num)
{
	int num1 = 0;
	int num2 = 1;
	int tmp, i;

	if (num == 1)
		printf("%d ", num1);
	else if (num == 2)
		printf("%d %d \n", num1, num2);

	else {
		printf("%d ", num1);
		printf("%d ", num2);

		for (i = 0; i < num - 2; i++) {
			tmp = num1 + num2;

			printf("%d ", tmp);

			num1 = num2;
			num2 = tmp;
		}
	}
}
*/