/*
프로그램 사용자로부터 영단어를 입력 받느다.
그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자.
예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는 V이므로 V가 출력되어야 한다.
19.01.11 경은하
*/
/*
#include <stdio.h>

int main(void)
{
	char word[50];
	int max;
	int i = 1;

	printf("영단어를 입력하세요 : ");
	gets_s(word, 50);

	max = word[0];

	while (word[i] != 0) {
		if (max < word[i])
			max = word[i];

		i++;
	}

	printf("%s에서 아스키코드가 가장 큰 문자 : %c \n", word, max);

	return 0;
}
*/