#include <stdio.h>
int main(void)
{
	int num1, num2, result1, result2;
	printf("�� ���� ������ ������� �Է����ּ���. \n");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("���� %d �Դϴ�.\n", result1);
	printf("�������� %d �Դϴ�.\n", result2);

	system("PAUSE");
	return 0;
}