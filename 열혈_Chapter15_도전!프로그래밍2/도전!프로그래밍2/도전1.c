/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해 보자.
일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자. 
단, 10개의 정수는 main 함수 내에서 입력 받도록 하고, 배열 재에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서 이 두 함수를 호출하는 방식으로 프로그램을 완성하자.
*/

//19.02.19 경은하
/*
#include <stdio.h>

void Print_Odd_Number(int *array)
{
	int i;
	for (i = 0; i < 10; i++) {
		if (array[i] % 2 != 0)
			printf("%d ", array[i]);
	}
}

void Print_Even_Number(int *array)
{
	int i;
	for (i = 0; i < 10; i++) {
		if (array[i] % 2 == 0)
			printf("%d ", array[i]);
	}
}

int main(void)
{
	int j;

	int array_main[10];

	for (j = 0; j < 10; j++)
	{
		printf("array_main[%d] : ", j);
		scanf_s("%d", &array_main[j]);
	}

	printf("홀수 : ");
	Print_Odd_Number(array_main);
	printf("\n");
	printf("짝수 : ");
	Print_Even_Number(array_main);

	return 0;
}
*/