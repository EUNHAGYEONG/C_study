/*
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환해서 출력하는 프로그램을 작성해 보자.
*/

//19.02.19 경은하
/*
#include <stdio.h>

int main(void)
{
	int num;
	int array[10];
	int i = 0;
	int quo, rem;

	printf("10진수 정수 입력 : ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		quo = num / 2;
		rem = num % 2;
		array[i] = rem;

		num = quo;
		i++;

	
	}

	int len;
	
	for (len = i - 1; len >= 0; len--)
	{
		printf("%d", array[len]);
	}
		

	return 0;
}
*/