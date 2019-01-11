/*
프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
예를 들어서 "Array"라는 단어가 입력되면 5가 출력되어야 한다.
19.01.11 경은하
*/
/*
#include <stdio.h>

int main(void)
{
	char word[50];
	int i = 0;

	printf("단어를 입력해주세요 : ");
	gets_s(word, 50);

	for (i = 0; i < 50; i++) {
		if (word[i] != 0)
			continue;
		else {
			printf("word 배열에 존재하는 영단어의 길이 : %d \n", i);
			break;
		}
	}
		
	return 0;
}
*/