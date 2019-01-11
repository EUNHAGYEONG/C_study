/*
//세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자.
//그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
//19.01.07 경은하

#include <stdio.h>

int Readinteger(void);
int Getmax(int num1, int num2, int num3);
int Getmin(int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;

	n1 = Readinteger();
	n2 = Readinteger();
	n3 = Readinteger();

	printf("최댓값 : %d \n", Getmax(n1, n2, n3));
	printf("최솟값 : %d \n", Getmin(n1, n2, n3));

	return 0;
}

int Readinteger(void)
{
	int number;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &number);

	return number;
}

int Getmax(int num1, int num2, int num3)
{
	int max;

	if (num1 > num2)
	{
		if (num1 > num3)
			max = num1;
		else
			max = num3;
	}

	else {
		if (num2 > num3)
			max = num2;
		else
			max = num3;
	}

	return max;
}

int Getmin(int num1, int num2, int num3)
{
	int min;

	if (num1 > num2)
	{
		if (num2 > num3)
			min = num3;
		else
			min = num2;
	}

	else
	{
		if (num1 > num3)
			min = num3;
		else
			min = num1;
	}

	return min;
}
*/