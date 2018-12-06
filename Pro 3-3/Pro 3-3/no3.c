#include <stdio.h>
int main(void)
{
	int num, result;
	printf("정수를 입력해주세요 : \n");
	scanf_s("%d", &num);

	result = num * num;
	printf("%d \n", result);

	system("PAUSE");
	return 0;
}