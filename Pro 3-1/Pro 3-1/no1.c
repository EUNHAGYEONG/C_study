#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int result1;
	int result2;

	printf("첫번째 정수를 입력하세요 : %d \n");
	scanf_s("%d", &num1);
	printf("두번째 정수를 입력하세요 : %d \n");
	scanf_s("%d", &num2);

	result1 = num1 + num2;
	result2 = num1 * num2;

	printf("덧셈 결과는 %d 입니다.\n", result1);
	printf("곱셈 결과는 %d 입니다.\n", result2);

	system("PAUSE");
	return 0;
}