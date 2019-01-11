/*
//프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int second;
	int hour, min, sec;

	printf("초(second) 입력 : ");
	scanf_s("%d", &second);

	hour = second / 3600;
	min = (second - hour * 3600) / 60;
	sec = second - hour * 3600 - min * 60;

	printf("[h:%d, m:%d, s:%d] \n", hour, min, sec);

	return 0;
}
*/