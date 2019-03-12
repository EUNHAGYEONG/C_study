/* 
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고, 짝수이면 뒤에서부터 채워나가는 형식을 취하기로 하자.
따라서 사용자가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면, 배열에는 [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]의 순으로 저장이 되어야 한다.
*/

//19.02.19 경은하
/*
#include <stdio.h>

int main(void)
{
	int arr1[10];
	int arr2[10];
	int i, tmp, j, k = 0, l = 9;

	for (i = 0; i < 10; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &arr1[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - j - 1; j++) {
			if (arr1[j] > arr1[j + 1]) {
				tmp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		if (arr1[i] % 2 != 0) {
			arr2[k] = arr1[i];
			k++;
		}
		else {
			arr2[l] = arr1[i];
			l--;
		}
	}
	
	for (i = 0; i < 10; i++)
		printf("%d ", arr2[i]);

	return 0;
}
*/