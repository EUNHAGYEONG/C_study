/*
회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다.
예를 들어서 level, bob과 같은 단어들은 회문에 속한다.
이에 우리는 인자로 전달되는 영단어가 회문인지 아닌지를 판단해서 그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main 함수를 정의해보고자 한다.
단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로 하겠다.
*/

//19.02.21 경은하
/*
#include <stdio.h>

int main(void)
{
	char word[50];

	printf("문자열 입력 : ");
	gets_s(word, 50);

	int len = 0;
	
	while (word[len] != 0)
		len++;
	
	int i;
	int cnt = 0;
	len = len - 1;
		
	for (i = 0; i < (len / 2); i++) {
		if (word[i] == word[len - i])
			cnt++;
	}

	if (cnt == 0)
		printf("회문이 아닙니다. \n");
	else
		printf("회문입니다. \n");
	
	return 0;
}
*/