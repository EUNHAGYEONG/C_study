/*
//���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�, �̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.
//19.01.09 ������

#include <stdio.h>

int main(void)
{
	int second;
	int hour, min, sec;

	printf("��(second) �Է� : ");
	scanf_s("%d", &second);

	hour = second / 3600;
	min = (second - hour * 3600) / 60;
	sec = second - hour * 3600 - min * 60;

	printf("[h:%d, m:%d, s:%d] \n", hour, min, sec);

	return 0;
}
*/