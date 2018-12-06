#include <stdio.h>
int main(void)
{
	int num1, num2, num3, result;

	printf("세 개의 정수를 순서대로 입력해주세요\n");
	scanf_s("%d %d %d \n", &num1, &num2, &num3);
	result = num1 * num2 * num3;
	printf("%d x %d x %d = %d \n", num1, num2, num3, result);

	system("PAUSE");
	return 0;
}