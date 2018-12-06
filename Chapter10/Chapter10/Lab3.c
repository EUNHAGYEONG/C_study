/*
//단어 애나그램 게임을 작성해보자.
//영어 다어를 이루는 글자들이 뒤죽박죽 섞인 것을 받아서 순서대로 재배치하는 게임을 애나그램 게임이라고 한다.
//18.12.03 경은하
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char com[80] = "apple";
	char com_ran[80] = "apple";
	char answer[80] = "0";
	int num1 = 0;
	int num2 = 0;
	int i = 0;
	char tmp = '0';
	int len = 0;

	len = strlen(com_ran);

	for (i = 0; com_ran[i] != NULL; i++) {
		num1 = rand() % len;
		num2 = rand() % len;

		tmp = com_ran[num1];
		com_ran[num1] = com_ran[num2];
		com_ran[num2] = tmp;
	}

	while (strcmp(com, answer) != 0) {
		printf("%s는 어떤 단어가 스크램블된 것일까요? ", com_ran);
		gets_s(answer, 79);

		if (strcmp(com, answer) == 0) {
			printf("축하합니다. \n");
			break;
		}
	}

	return 0;
}
*/