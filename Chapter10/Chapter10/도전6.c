/*
2018.11.11 경은하
//프로그램 사용자로부터 초(second)를 입력 받은 후에 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
int main(void) {
	int hour, minute, second;
	printf("초를 입력해주세요 : ");
	scanf_s("%d", &second);

	hour = second / 3600;
	minute = (second - 3600 * hour) / 60;
	second = second - 3600 * hour - 60 * minute;

	printf("[h:%d, m:%d, s:%d] \n", hour, minute, second);
	return 0;
}
*/