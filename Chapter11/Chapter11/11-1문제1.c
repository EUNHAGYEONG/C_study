/*
//길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자!
//최댓값, 최솟값, 총 합을 출력하자.
//2018.11.15 경은하
#include <stdio.h>
#define SIZE 5
int main(void) {
	int number[SIZE] = { 0 };
	int i = 0, sum = 0, max = 0, min = 0;

	for (i = 0; i < SIZE; i++) {
		printf("리스트에 저장할 정수를 입력해주세요 : ");
		scanf_s("%d", &number[i]);
		sum += number[i];
	}
	 min = number[0];
	 max = number[0];
	 
	for (i = 1; i < SIZE; i++) {
		if (min > number[i])
			min = number[i];
		else if (max < number[i])
			max = number[i];
	}

	printf("정수 리스트의 최솟값은 %d 입니다. \n", min);
	printf("정수 리스트의 최댓값은 %d 입니다. \n", max);
	printf("정수 리스트의 총 합은 %d 입니다. \n", sum);

	return 0;
}
*/