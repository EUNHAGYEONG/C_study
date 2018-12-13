/*
//구조체를 이용하여서 현재 시각을 표현한다.
//사용자로부터 2개의 시각을 입력받아서 두 시각 사이의 차이를 계산하여 출력하는 프로그램을 작성한다.
//18.12.13 경은하
#include <stdio.h>

struct time {
	int hour;
	int min;
	int sec;
};

int main(void)
{
	struct time start, end;
	struct time result;

	printf("시작시간(시, 분, 초) : ");
	scanf_s("%d %d %d", &start.hour, &start.min, &start.sec);

	printf("종료시간(시, 분, 초) : ");
	scanf_s("%d %d %d", &end.hour, &end.min, &end.sec);

	result.hour = end.hour - start.hour;
	result.min = end.min - start.min;
	result.sec = end.sec - start.sec;

	printf("소요시간 : %d : %d : %d \n", result.hour, result.min, result.sec);

	return 0;
}
*/