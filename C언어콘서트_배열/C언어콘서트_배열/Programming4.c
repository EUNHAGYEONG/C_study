/*
//0부터 9까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.
//난수는 rand() 함수를 사용하여 생성하라.
//배열을 사용해보자.
//18.12.08 경은하

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int list[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i;
	int num;
	int j;

	for (i = 0; i < 100; i++) {
		num = rand() % 10;
		list[num]++;
	}
	int max = list[0];

	for (i = 1; i < 10; i++) {
		if (max < list[i]) {
			max = list[i];
			j = i;
		}
	}

	printf("가장 많이 생성된 수 = %d \n", j);
	
	return 0;
}
*/