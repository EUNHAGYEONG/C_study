/*
2018.11.11 ������
//�� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷��� �ۼ� �غ���.
#include <stdio.h>

int main(void) {
	int num1, num2, i = 1, GCD;
	printf("�� ���� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 >= i && num2 >= i) {
		if (num1 % i == 0 && num2 % i == 0) {
			GCD = i;
		}
		i++;
	}
	printf("�ִ����� : %d \n", GCD);
	return 0;
}
*/