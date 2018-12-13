/*
//18.12.09 ∞Ê¿∫«œ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int rotto;
	int i;

	for (i = 0; i < 6; i++) {
		rotto = rand() % 45 + 1;

		printf("%d ", rotto);
	}

	return 0;
}
*/