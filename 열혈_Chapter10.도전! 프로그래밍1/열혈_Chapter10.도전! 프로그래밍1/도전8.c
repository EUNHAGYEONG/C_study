/*
//2�� n���� ���ϴ� �Լ��� ��������� ������ ����.
//�׸��� �׿� ���� ������ main�Լ��� �����غ���.
//����� ����Լ��� ������ ó������ ����� ���̱� ������ ���⼭�� ���� ������ �����Ͽ���.
//19.01.09 ������

#include <stdio.h>

int square(int num);

int main(void)
{
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("2�� %d�� : %d \n", num, square(num));

	return 0;
}

int square(int num)
{
	if (num <= 0)
		return 1;
	
	else {
		return 2 * square(num - 1);
	}
}
*/