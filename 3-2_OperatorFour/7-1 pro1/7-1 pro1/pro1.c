//프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello world!"를 출력하는 프로그램을 작성하여라.
#include <stdio.h>
int main(void) {
	int x = 0, num = 0;
	printf("양의 정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	while (x < num)
	{
		printf("Hello world! \n");
		x++;
	}

	system("PAUSE");
	return 0;
}