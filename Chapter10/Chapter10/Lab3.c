/*
//�ܾ� �ֳ��׷� ������ �ۼ��غ���.
//���� �پ �̷�� ���ڵ��� ���׹��� ���� ���� �޾Ƽ� ������� ���ġ�ϴ� ������ �ֳ��׷� �����̶�� �Ѵ�.
//18.12.03 ������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char com[80] = "apple";
	char com_ran[80] = "apple";
	char answer[80] = "0";
	int num1 = 0;
	int num2 = 0;
	int i = 0;
	char tmp = '0';
	int len = 0;

	len = strlen(com_ran);

	for (i = 0; com_ran[i] != NULL; i++) {
		num1 = rand() % len;
		num2 = rand() % len;

		tmp = com_ran[num1];
		com_ran[num1] = com_ran[num2];
		com_ran[num2] = tmp;
	}

	while (strcmp(com, answer) != 0) {
		printf("%s�� � �ܾ ��ũ����� ���ϱ��? ", com_ran);
		gets_s(answer, 79);

		if (strcmp(com, answer) == 0) {
			printf("�����մϴ�. \n");
			break;
		}
	}

	return 0;
}
*/