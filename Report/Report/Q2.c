/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("�ֻ��� ������ ������ �����մϴ�. ^0^ \n");
	
	srand(time(NULL));
	int com = rand() % 6 + 1;

	printf("��ǻ�Ͱ� ���� �ֻ����� %d �Դϴ�. \n", com);
	printf("��~ ���� �ֻ����� ����������(y, n) : ");

	char a;
	
	
	scanf_s("%c", &a);
	printf("\n");
	
	int user;

	if (a == 'y')
		user = rand() % 6 + 1;

	printf("����� ���� �ֻ����� %d �Դϴ�. \n", user);

	if (com > user)
		printf("\"���� �̱�. ��! �̸� ��� �̸�.\"");
	else if (com < user)
		printf("\"���� ����. �Ф� �� ���� ���ָ� �� ��?\"");
	else
		printf("\"�ƽ���, ���ٴ�.. \"");

	return 0;
}
*/