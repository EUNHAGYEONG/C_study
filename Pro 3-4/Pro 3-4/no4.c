#include <stdio.h>
int main(void)
{
	int num1, num2, result1, result2;
	printf("두 개의 정수를 순서대로 입력해주세요. \n");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("몫은 %d 입니다.\n", result1);
	printf("나머지는 %d 입니다.\n", result2);

	system("PAUSE");
	return 0;
}