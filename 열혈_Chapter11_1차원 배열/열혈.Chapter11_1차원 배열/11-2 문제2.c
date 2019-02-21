/*
프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다.
그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.
물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
뒤집고 나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
19.01.11 경은하
*/
/*
#include <stdio.h>

int main(void)
{
	char word[50], tmp;
	int size_word = 0, num;
	int i = 0;

	printf("영단어를 입력하세요 : ");
	gets_s(word, 50);
	
	while (word[i] != 0)
		i++;

	size_word = i;

	num = size_word / 2;

	for (i = 0; i < num; i++) {
		tmp = word[i];
		word[i] = word[size_word - i - 1];
		word[size_word - i - 1] = tmp;
	}

	printf("%s \n", word);

	return 0;
}
*/