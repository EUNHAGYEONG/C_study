/*
//�� ���� ���Ҽ��� ���ϴ� ���α׷��� �ۼ��غ���.
//a+bi�� c+di�� ������ ������ ����.
//���Ҽ��� ����ü�� ����Ͽ� ǥ���غ���.
//18.12.13 ������

#include <stdio.h>

struct complex_number {
	int a;
	int b;
};

int main(void)
{
	struct complex_number num1, num2, result;

	printf("ù��° ���Ҽ��� �Է��Ͻÿ�(a, b) : ");
	scanf_s("%d %d", &num1.a, &num1.b);
	printf("�ι�° ���Ҽ��� �Է��Ͻÿ�(a, b) : ");
	scanf_s("%d %d", &num2.a, &num2.b);

	result.a = num1.a + num2.a;
	result.b = num1.b + num2.b;

	printf("%d + %di \n", result.a, result.b);
	
	return 0;
}
*/