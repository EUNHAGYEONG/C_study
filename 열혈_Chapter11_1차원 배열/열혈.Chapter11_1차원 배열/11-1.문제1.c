/*
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자!
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자.
	- 입력된 정수 중에서 최댓값
	- 입력된 정수 중에서 최솟값
	- 입력된 정수의 총 합
19.01.11 경은하
*/
/*
#include <stdio.h>

int main(void)
{
	int arraylist[5];
	int num, i;
	int max, min;
	int sum = 0;

	for (i = 0; i < 5; i++) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);

		arraylist[i] = num;
	}

	max = arraylist[0];
	min = arraylist[0];

	for (i = 1; i < 5; i++) {
		if (max < arraylist[i])
			max = arraylist[i];
		if (min > arraylist[i])
			min = arraylist[i];
	}

	for (i = 0; i < 5; i++)
		sum += arraylist[i];

	printf("arraylist의 최솟값 : %d \n", min);
	printf("arraylist의 최댓값 : %d \n", max);
	printf("arraylist 값의 총 합 : %d \n", sum);

	return 0;
}
*/