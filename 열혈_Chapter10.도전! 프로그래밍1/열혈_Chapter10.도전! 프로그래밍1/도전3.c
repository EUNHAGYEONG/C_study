/*
//�� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷��� �ۼ��� ����.
//19.01.09 ������

#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i;
	int GCD;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	for (i = 1; i < num2 + 1; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			GCD = i;
	}

	printf("�� ���� �ִ����� : %d \n", GCD);

	return 0;
}
*/