/*
//����, ����, ����, �������� �����ϴ� ���� ���α׷��� �ۼ��Ͽ� ����.
//�̹����� �� ������� �� ���� ���Ǿ������� ����ϰ� ����.
//�� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ����Ѵ�.
//(1) ���� ���� ������ ����Ͽ� ���α׷��� �ۼ��϶�.
//18.11.23.������
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

	printf("������ �Է��Ͻÿ�(����� Ctrl + C) : ");
	scanf_s("%d %c %d", &num1, &math, &num2);

	while (1) {
		if (math == '+') {
			number_sum++;
			result = Sum(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", number_sum);
			printf("���� ��� : %d + %d = %d \n", num1, num2, result);
		}

		else if (math == '-') {
			number_sub++;
			result = Sub(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", number_sub);
			printf("���� ��� : %d - %d = %d \n", num1, num2, result);
		}

		else if (math == '*') {
			number_mul++;
			result = Mul(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", number_mul);
			printf("���� ��� : %d * %d = %d \n", num1, num2, result);
		}

		else if (math == '/') {
			number_div++;
			result = Div(num1, num2);
			printf("�������� �� %d�� ȣ��Ǿ����ϴ�. \n", number_div);
			printf("���� ��� : %d / %d = %d \n", num1, num2, result);
		}
	}
	return 0;
}
*/