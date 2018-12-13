/*
//포인터를 이용하여서 크기가 5인 1차원 정수 배열에 저장된 값을 역순으로 출력해보자.
//18.12.12 경은하
#include <stdio.h>

int main(void) {
	int data[5];
	int i;
	int *p;

	p = data;

		printf("5개의 정수를 입력하시오 : ");
		scanf_s("%d %d %d %d %d", &p[0], &p[1], &p[2], &p[3], &p[4]);

	for (i = 4; i >= 0; i--) 
		printf("%d ", p[i]);
	
	return 0;
}
*/