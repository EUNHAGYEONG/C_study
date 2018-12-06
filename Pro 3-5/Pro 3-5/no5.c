#include <stdio.h>
int main(void)
{
	int num1, num2, num3, result;
	printf("세 개의 정수를 입력해주세요.\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("%d", result);

	system("PAUSE");
	return 0;
}