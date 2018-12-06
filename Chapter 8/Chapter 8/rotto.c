/*
//로또 번호를 생성하는 프로그램을 작성하여 보자.
//로또 번호는 1부터 45까지의 숫자 6개로 이루어진다.
//따라서 6개의 난수를 생성하여야 한다.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number, i;

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		number = 1 + (rand() % 45);
		printf("%d ", number);
	}
		
	return 0;
}
*/
