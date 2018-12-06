//3차원 문자 배열을 이용하여 간단한 한영사전을 구현해보자.
//18.12.04 경은하

#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void) {
	char dic[WORDS][2][30] = {
		{ "book", "책"},
		{"boy", "소년"},
		{"couputer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"}
	};
	char answer[30];
	int i = 0;

	printf("단어를 입력하시오 : ");
	gets_s(answer, 29);

	for (i = 0; i < WORDS; i++) {
		if (dic[i][0] == answer)
			printf("%s \n", dic[i]);
		else
			printf("일치하는 단어가 없습니다. \n");
	}

	return 0;
}