/*
2018.11.11 ������
//2�� n���� ���ϴ� �Լ��� ��������� �����غ���.
#include <stdio.h>

int Two(int n) {
	if (n > 0) {
		return 2 * Two(n - 1);
	}
	else
		return 1;
}

int main(void) {
	int n;
	printf("���� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	
	printf("%d \n", Two(n));
	return 0;
}
*/