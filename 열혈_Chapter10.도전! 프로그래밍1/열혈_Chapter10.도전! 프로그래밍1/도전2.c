/*
//프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
//예를 들어서 프로그램 사용자가 3과 5를 입력하면 3단, 4단, 5단이 출력되어야 하고, 2와 4를 입력하면 2단, 3단, 4단이 출력되어야 한다.
//단 한가지 조건이 있다.
//사용자는 두 개의 숫자를 입력할 때에 입력 순서에 자유로워야 한다. 
//즉 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i, j;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		for (i = num2; i <= num1; i++) {
			for (j = 1; j < 10; j++) {
				printf("%d X %d = %d \n", i, j, i*j);
			}
			printf("\n");
		}
	}

	else {
		for (i = num1; i <= num2; i++) {
			for (j = 1; j < 10; j++) {
				printf("%d X %d = %d \n", i, j, i*j);
			}
			printf("\n");
		}
	}

	return 0;
}
*/