/*
//18.12.09 ������
#include <stdio.h>

int com_sum(int n);

int main(void) {
	int n;
	
	printf("���� ������ ���ϰ� �����Ű���? : ");
	scanf_s("%d", &n);

	printf("1���� %d������ ���� %d�Դϴ�. \n", n, com_sum(n));

	return 0;
}

int com_sum(int n) {
	int i;
	int sum = 0;

	for (i = 1; i < n + 1; i++) {
		sum += i;
	}

	return sum;
}
*/