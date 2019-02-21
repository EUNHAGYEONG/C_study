/*
//10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해 보자.
//이는 서식문자의 활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int num_ten;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num_ten);

	printf("10진수 : %d 16진수 : %x \n", num_ten, num_ten);

	return 0;
}
*/