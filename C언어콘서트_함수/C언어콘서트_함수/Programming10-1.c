/*
//����, ����, ����, �������� �����ϴ� ���� ���α׷��� �ۼ��Ͽ� ����.
//�̹����� �� ������� �� ���� ���Ǿ������� ����ϰ� ����.
//�� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ����Ѵ�.
//���� ���� ������ ����Ͽ� ���α׷��� �ۼ��϶�.
//18.12.09 ������

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

	printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", sum_num);
	printf("���� ��� : %d + %d = %d \n", a, b, result);
}

void sub(int a, int b) {
	int result;
	static int sub_num = 0;

	sub_num++;
	result = a - b;

	printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", sub_num);
	printf("���� ��� : %d - %d = %d \n", a, b, result);
}

void mal(int a, int b) {
	int result;
	static int mal_num = 0;

	mal_num++;
	result = a * b;

	printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", mal_num);
	printf("���� ��� : %d * %d = %d \n", a, b, result);
}

void div(int a, int b) {
	int result;
	static int div_num = 0;

	div_num++;
	result = a / b;

	printf("�������� �� %d�� ȣ��Ǿ����ϴ�. \n", div_num);
	printf("���� ��� : %d / %d = %d \n", a, b, result);
}
*/