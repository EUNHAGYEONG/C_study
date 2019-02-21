/*
//2의 n승을 구하는 함수를 재귀적으로 구현해 보자.
//그리고 그에 따른 적절한 main함수도 구현해보자.
//참고로 재귀함수의 구현이 처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시하였다.
//19.01.09 경은하

#include <stdio.h>

int square(int num);

int main(void)
{
	int num;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("2의 %d승 : %d \n", num, square(num));

	return 0;
}

int square(int num)
{
	if (num <= 0)
		return 1;
	
	else {
		return 2 * square(num - 1);
	}
}
*/