/*
//18.12.18 ������

#include <stdio.h>

int get_sum(int number);

int main(void)
{
	int i, n, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	result = get_sum(n);

	printf("0���� %d������ ���� %d�Դϴ�. \n", n, result);

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

	printf("��� ��ȣ�� �Է��Ͻÿ� : ");

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
		printf("��й�ȣ ��ġ \n");
	
	return 0;
}