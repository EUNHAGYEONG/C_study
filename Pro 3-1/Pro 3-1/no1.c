#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int result1;
	int result2;

	printf("ù��° ������ �Է��ϼ��� : %d \n");
	scanf_s("%d", &num1);
	printf("�ι�° ������ �Է��ϼ��� : %d \n");
	scanf_s("%d", &num2);

	result1 = num1 + num2;
	result2 = num1 * num2;

	printf("���� ����� %d �Դϴ�.\n", result1);
	printf("���� ����� %d �Դϴ�.\n", result2);

	system("PAUSE");
	return 0;
}