/*
//덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
//이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자.
//각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.
//정적 지역 변수를 사용하여 프로그램을 작성하라.
//18.12.09 경은하

#include <stdio.h>

void sum(int a, int b);
void sub(int a, int b);
void mal(int a, int b);
void div(int a, int b);

int main(void) {
	int num1, num2;
	int result;
	char com=0;

	while (1) {
		scanf_s("%d", &num1);
		scanf_s("%c", &com);
		scanf_s("%d", &num2);

		if (com == '+')
			sum(num1, num2);
		else if (com == '-')
			sub(num1, num2);
		else if (com == '*')
			mal(num1, num2);
		else if (com == '/')
			div(num1, num2);
	}

	return 0;
}

void sum(int a, int b) {
	int result;
	static int sum_num = 0;

	sum_num++;
	result = a + b;

	printf("덧셈은 총 %d번 호출되었습니다. \n", sum_num);
	printf("연산 결과 : %d + %d = %d \n", a, b, result);
}

void sub(int a, int b) {
	int result;
	static int sub_num = 0;

	sub_num++;
	result = a - b;

	printf("뺄셈은 총 %d번 호출되었습니다. \n", sub_num);
	printf("연산 결과 : %d - %d = %d \n", a, b, result);
}

void mal(int a, int b) {
	int result;
	static int mal_num = 0;

	mal_num++;
	result = a * b;

	printf("곱셈은 총 %d번 호출되었습니다. \n", mal_num);
	printf("연산 결과 : %d * %d = %d \n", a, b, result);
}

void div(int a, int b) {
	int result;
	static int div_num = 0;

	div_num++;
	result = a / b;

	printf("나눗셈은 총 %d번 호출되었습니다. \n", div_num);
	printf("연산 결과 : %d / %d = %d \n", a, b, result);
}
*/