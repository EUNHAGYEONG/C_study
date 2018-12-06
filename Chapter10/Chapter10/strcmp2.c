/*
#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[80];
	char s2[80];
	int result;

	printf("첫 번째 단어를 입력하세요 : ");
	gets_s(s1, 79);
	printf("두 번째 단어를 입력하세요 : ");
	gets_s(s2, 79);

	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s가 %s보다 앞에 있습니다. \n", s1, s2);
	else if (result == 0)
		printf("%s와 %s가 같습니다. \n", s1, s2);
	else
		printf("%s가 %s보다 뒤에 있습니다. \n", s1, s2);

	return 0;
}
*/