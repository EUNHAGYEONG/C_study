/*
//프로그램 사용자로부터 영단어를 입력 받는다.
//그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자.
//2018.11.15 경은하

#include <stdio.h>
int main(void) {
	char str[50];
	int len, k, max;

	printf("영단어를 입력해주세요 : ");
	gets_s(str, sizeof(str));

	len = strlen(str);
	max = (int)str[0];

	for (k = 1; k < len; k++) {
		if (max < (int)str[k])
			max = (int)str[k];
	}

	printf("%c", max);
	return 0;
}
*/