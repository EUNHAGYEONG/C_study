/*
//������ ����ϴ� ������� ���α׷��� �ۼ��Ͻÿ�.
//1*1 + 2*2 + 3*3+ ... + n*n
//18.11.28 ������

#include <stdio.h>

int square_sum(int x) {
	printf("%d", x);

	if (x == 1)
		return 1;
	else
		return x * x + square_sum(x-1)*square_sum(x-1);
}

int main(void) {
	int num, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	result = square_sum(num);
	printf("%d \n", result);

	return 0;
}
*/