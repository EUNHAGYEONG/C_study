/*
2018.11.11 ������
//���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ� �̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.
#include <stdio.h>
int main(void) {
	int hour, minute, second;
	printf("�ʸ� �Է����ּ��� : ");
	scanf_s("%d", &second);

	hour = second / 3600;
	minute = (second - 3600 * hour) / 60;
	second = second - 3600 * hour - 60 * minute;

	printf("[h:%d, m:%d, s:%d] \n", hour, minute, second);
	return 0;
}
*/