/*
//��� ȣ���� �̿��Ͽ� ������ �� �ڸ����� ����ϴ� �Լ� show_digit(int x)�� �ۼ��ϰ� �׽�Ʈ�϶�.
//18.12.09 ������

#include <stdio.h>
int show_digit(int x);

int main(void) {
	int number;
	
	printf("������ �Է��Ͻÿ� ; ");
	scanf_s("%d", &number);

	show_digit(number);

	return 0;
}

int show_digit(int x) {
	int a;
	int result;
	
	result = x % 10;
	a = x / 10;
	
	if (x == 0)
		return 0;
	else {
		show_digit(a);
		printf("%d ", result);
		return 0;
	}
}
*/