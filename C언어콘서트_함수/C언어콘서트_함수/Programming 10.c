/*
//덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
//이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자.
//각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.
//전역 변수를 사용하여 프로그램을 작성하라.
//18.12.09 경은하

#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mal(int a, int b);
int div(int a, int b);

int sum_num = 0;
int sub_num = 0;
int mal_num = 0;
int div_num = 0;

int main(void) {
	int num1, num2;
	int result;
	char com;

	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl+C) : ");
		scanf_s("%d %c %d", &num1, &com, &num2);

		if (com == '+') {
			sum_num++;
			result = sum(num1, num2);
			printf("덧셈은 총 %d번 호출되었습니다. \n", sum_num);
			printf("연산결과 : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '-') {
			sub_num++;
			result = sub(num1, num2);
			printf("뺄셈은 총 %d번 호출되었습니다. \n", sub_num);
			printf("연산결과 : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '*') {
			mal_num++;
			result = mal(num1, num2);
			printf("곱셈은 총 %d번 호출되었습니다. \n", mal_num);
			printf("연산결과 : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '/') {
			div_num++;
			result = div(num1, num2);
			printf("나눗셈은 총 %d번 호출되었습니다. \n", div_num);
			printf("연산결과 : %d %c %d = %d \n", num1, com, num2, result);
		}
	}

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mal(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}
*/