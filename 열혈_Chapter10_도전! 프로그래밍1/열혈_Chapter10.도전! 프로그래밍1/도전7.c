/*
//���α׷� ����ڷκ��� ���� n�� �Է� �޴´�.
//�׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
//19.01.09 ������

#include <stdio.h>

int main(void)
{
	int n;
	int k = 0;
	int result = 1;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	while (result < n) {
		result *= 2;
		k++;
	}

	printf("������ �����ϴ� k�� �ִ��� %d \n", k);

	return 0;
}
*/