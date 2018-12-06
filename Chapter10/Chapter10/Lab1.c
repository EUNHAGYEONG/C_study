/*
//자신이 좋아하는 과일을 퀴즈로 내고 사용자가 맞출 때까지 되풀이하는 프로그램을 작성해보자.
//18.12.03 경은하

#include <stdio.h>
#include <string.h>

int main(void) {
	char me[15] = "귤";
	char user[15];

	while (1) {
		printf("내가 제일 좋아하는 과일은 무엇일까요?");
		gets_s(user, 14);

		if (strcmp(me, user) == 0)
			break;
	}

	printf("정답입니다! \n");

	return 0;
}
*/