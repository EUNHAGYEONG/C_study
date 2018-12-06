/*
//프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다.
//그 다음배열에 저장된 영단어를 역순으로 뒤집는다.
//물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
//뒤집고 나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
//2018.11.15 경은하

#include<stdio.h>
int main(void) {
	char str[50];
	int len = 0, i;

	printf("영단어를 입력해주세요 : ");
	gets_s(str, sizeof(str));

	len = strlen(str);

	for (i = len - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	
	return 0;
}
*/