/*
2018.11.10 ������
//�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���. �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.
#include <stdio.h>

void PrintfNumber(void) {
	printf("�� ���� ������ �Է��ϼ��� : ");
}

int ReadNumber(void) {
	int num;
	scanf_s("%d", &num);
	return num;
}

int GetMax(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else {
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}

int GetMin(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num2 > num3)
			return num3;
		else
			return num2;
	}
	else {
		if (num1 > num3)
			return num3;
		else
			return num1;
	}
}

int main(void) {
	int num1, num2, num3;

	PrintfNumber();
	num1 = ReadNumber();
	num2 = ReadNumber();
	num3 = ReadNumber();

	printf("�ִ��� %d�Դϴ�. \n", GetMax(num1, num2, num3));
	printf("�ּڰ��� %d�Դϴ�. \n", GetMin(num1, num2, num3));

	system("PAUSE");
	return 0;
}
*/