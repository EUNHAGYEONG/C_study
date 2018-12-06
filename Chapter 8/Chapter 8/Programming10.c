/*
//덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
//이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자.
//각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.
//(1) 정적 지역 변수를 사용하여 프로그램을 작성하라.
//18.11.23.경은하
#include <stdio.h>
static int number_sum = 0;
static int number_sub = 0;
static int number_mul = 0;
static int number_div = 0;

int Sum(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;
}

int Mul(int a, int b) {
	return a * b;
}

int Div(int a, int b) {
	return a / b;
}


int main(void) {
	int num1, num2, result;
	char math;

	printf("연산을 입력하시오(종료는 Ctrl + C) : ");
	scanf_s("%d %c %d", &num1, &math, &num2);

	while (1) {
		if (math == '+') {
			number_sum++;
			result = Sum(num1, num2);
			printf("덧셈은 총 %d번 호출되었습니다. \n", number_sum);
			printf("연산 결과 : %d + %d = %d \n", num1, num2, result);
		}

		else if (math == '-') {
			number_sub++;
			result = Sub(num1, num2);
			printf("뺄셈은 총 %d번 호출되었습니다. \n", number_sub);
			printf("연산 결과 : %d - %d = %d \n", num1, num2, result);
		}

		else if (math == '*') {
			number_mul++;
			result = Mul(num1, num2);
			printf("곱셈은 총 %d번 호출되었습니다. \n", number_mul);
			printf("연산 결과 : %d * %d = %d \n", num1, num2, result);
		}

		else if (math == '/') {
			number_div++;
			result = Div(num1, num2);
			printf("나눗셈은 총 %d번 호출되었습니다. \n", number_div);
			printf("연산 결과 : %d / %d = %d \n", num1, num2, result);
		}
	}
	return 0;
}
*/