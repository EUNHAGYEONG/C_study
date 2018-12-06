/*
//프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
//2018.11.15 경은하
#include<stdio.h>
int main(void) {
	char str[100];
	int len = 0;

	printf("영단어를 입력해주세요 : ");
	gets_s(str, sizeof(str));

	while (str[len] != 0) {
		len++;
	}

	printf("%d", len);
	return 0;
}
*/