/*
//���� ���� �Լ��� �̿��Ͽ� ��ǻ�ͷ� ���� ���� ������ �ùķ��̼��ϴ� ���� ���� ���� ��� �ùķ��̼��̶�� �Ѵ�.
//������ ���� ������ ������ �ùķ��̼��Ͽ� ����.
//��ǻ�Ͱ� ������ ������ ����ڴ� �յڸ� ���Ѵ�.
//��ǻ�ʹ� ���� ���� �Լ��� �̿��Ͽ� ������ ������ �Ŀ� ������ ¦���̸� ������ �ո����� �����ϰ� Ȧ���̸� ������ �޸����� �����Ѵ�.
//�̰��� �� �� �ݺ��Ͽ� ���и� ����Ѵ�.
//18.11.23. ������

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Monte_simul(void) {
	int user;
	int com;
	int num;

	while (1) {
		srand(time(NULL));
		num = 1 + rand() % 10;

		if (num % 2 == 0)
			com = 0;
		else
			com = 1;

		printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� -1) : ");
		scanf_s("%d", &user);

		if (user == -1)
			break;

		if (com > user)
			printf("��ǻ�Ͱ� �̰���ϴ�. \n");
		else if (com < user)
			printf("����ڰ� �̰���ϴ�. \n");
		else if (com == user)
			printf("�����ϴ�. \n");
		
	}
}

int main(void) {
	Monte_simul();
	return 0;
}
*/