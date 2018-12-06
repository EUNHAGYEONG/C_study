//프로그램 사용자로부터 계속해서 정수를 입력 받는다. 그리고 그 값을 계속해서 더해 나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며, 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
#include <stdio.h>
int main(void) {
	int num = 1, x = 0;
	while (num != 0)
	{
		printf("정수를 입력해주세요 : ");
		scanf_s("%d", &num);

		x = x + num;
	}

	printf("%d", x);
	system("PAUSE");
	return 0;
}