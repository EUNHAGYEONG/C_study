
//������ ����ϴ� ������� ���α׷��� �ۼ��Ͻÿ�.
//18.12.09 ������
#include <stdio.h>

int triple(int number);

int main(void) {
	int X;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &X);

	triple(X);

	return 0;
}

int triple(int number) {
	int triple_result;
	int result;

	triple_result = number * number * number;
	
	if (number <= 0)
		return 0;
	else {
		result = triple(number - 1);
		return triple_result + result;
	}
}