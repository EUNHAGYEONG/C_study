/*
//�������� ����Ͽ� ����� ��ǻ�� ������ ����, ����, �� ������ �����غ���.
//18.12.13 ������

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum game { siccor, rock, paper };

int main(void)
{
	srand(time(NULL));

	enum game com, user;

	com = rand() % 3;

	printf("����(0), ����(1), ��(2)�� �Է��ϼ��� : ");
	scanf_s("%d", &user);

	printf("com : %d \t", com);
	printf("user : %d \n", user);

	if ((com == 0 && user == 2) || (com == 1 && user == 0) || (com == 2 && user == 1))
		printf("��ǻ�Ͱ� �̰���ϴ�. \n");
	else if (com == user)
		printf("�����ϴ�. \n");
	else
		printf("����ڰ� �̰���ϴ�. \n");

	return 0;
}
*/