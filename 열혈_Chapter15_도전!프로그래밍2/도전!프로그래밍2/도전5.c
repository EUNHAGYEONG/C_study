/*
배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하자(함수의 이름은 DesSort로 정의하자).
그리고 이 함수를 호출하는 예제를 작성해보자.
프로그램의 흐름은 다음과 같이 구성을 하자.
일단 길이가 7인 int형 배열을 선언해서 프로그램 사용자로부터 7개의 정수를 입력 받도록 하자.
그리고 입력 받은 정수를 내림차순으로 정렬하기 위해서, 배열을 인자로 전달하면서 DesSort 함수를 호출하자.
그리고 마지막으로 제대로 정렬이 되었는지 확인하기 위해서 배열의 요소들을 순서대로 출력해보자.
*/

//19.02.19 경은하
/*
#include <stdio.h>

void DesSort(int arr[], int len)
{
	int i, j, tmp;

	for (i = 0; i < (len - 1); i++) {
		for (j = 0; j < (len - i - 1); j++) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int array[7];
	int i;

	for (i = 0; i < 7; i++) {
		printf("입력 : ");
		scanf_s("%d", &array[i]);
	}

	DesSort(array, sizeof(array) / sizeof(int));

	for (i = 0; i < 7; i++)
		printf("%d ", array[i]);

	return 0;
}
*/