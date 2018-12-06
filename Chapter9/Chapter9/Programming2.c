/*
//포인터를 이용하여서 크기가 5인 1차원 정수 배열에 저장된 값을 역순으로 출력해보자.
//18.11.29 경은하

#include <stdio.h>
#define SIZE 5

void print_reverse_array(int *array);

int main(void) {
	int list[SIZE];

	printf("5개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d %d %d", &list[0], &list[1], &list[2], &list[3], &list[4]);

	print_reverse_array(list);

	return 0;
}

void print_reverse_array(int *array) {
	int i;
	for (i = SIZE - 1; i >= 0; i--)
		printf("%d ", array[i]);
}
*/