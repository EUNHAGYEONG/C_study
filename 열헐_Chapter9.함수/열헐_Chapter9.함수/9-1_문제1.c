/*
//�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���.
//�׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.
//19.01.07 ������

#include <stdio.h>

int Readinteger(void);
int Getmax(int num1, int num2, int num3);
int Getmin(int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;

	n1 = Readinteger();
	n2 = Readinteger();
	n3 = Readinteger();

	printf("�ִ� : %d \n", Getmax(n1, n2, n3));
	printf("�ּڰ� : %d \n", Getmin(n1, n2, n3));

	return 0;
}

int Readinteger(void)
{
	int number;

	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &number);

	return number;
}

int Getmax(int num1, int num2, int num3)
{
	int max;

	if (num1 > num2)
	{
		if (num1 > num3)
			max = num1;
		else
			max = num3;
	}

	else {
		if (num2 > num3)
			max = num2;
		else
			max = num3;
	}

	return max;
}

int Getmin(int num1, int num2, int num3)
{
	int min;

	if (num1 > num2)
	{
		if (num2 > num3)
			min = num3;
		else
			min = num2;
	}

	else
	{
		if (num1 > num3)
			min = num3;
		else
			min = num1;
	}

	return min;
}
*/