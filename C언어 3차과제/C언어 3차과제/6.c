/*
//18.12.18 경은하

#include <stdio.h>

int get_sum(int number);

int main(void)
{
	int i, n, result;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	result = get_sum(n);

	printf("0부터 %d까지의 합은 %d입니다. \n", n, result);

	return 0;
}

int get_sum(int number)
{
	int i;
	int sum = 0;

	for (i = 0; i <= number; i++)
		sum += i;

	return sum;
}
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[5] = "1234";
	char answer[5];
	int i;

	printf("비밀 번호를 입력하시오 : ");

	for (i = 0; i < 4; i++) {
		answer[i] = getch();
		if (answer[i] == NULL) {
			i--;
			continue;
		}
		putch('*');
	}

	answer[4] = NULL;
	printf("\n");

	if (strcmp(answer, password) == 0)
		printf("비밀번호 일치 \n");
	
	return 0;
}