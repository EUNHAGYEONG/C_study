/*
//����, ����, ����, �������� �����ϴ� ���� ���α׷��� �ۼ��Ͽ� ����.
//�̹����� �� ������� �� ���� ���Ǿ������� ����ϰ� ����.
//�� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ����Ѵ�.
//���� ������ ����Ͽ� ���α׷��� �ۼ��϶�.
//18.12.09 ������

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
		printf("������ �Է��Ͻÿ�(����� Ctrl+C) : ");
		scanf_s("%d %c %d", &num1, &com, &num2);

		if (com == '+') {
			sum_num++;
			result = sum(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", sum_num);
			printf("������ : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '-') {
			sub_num++;
			result = sub(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", sub_num);
			printf("������ : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '*') {
			mal_num++;
			result = mal(num1, num2);
			printf("������ �� %d�� ȣ��Ǿ����ϴ�. \n", mal_num);
			printf("������ : %d %c %d = %d \n", num1, com, num2, result);
		}
		else if (com == '/') {
			div_num++;
			result = div(num1, num2);
			printf("�������� �� %d�� ȣ��Ǿ����ϴ�. \n", div_num);
			printf("������ : %d %c %d = %d \n", num1, com, num2, result);
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