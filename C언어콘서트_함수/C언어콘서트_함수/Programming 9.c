/*
//������ ���� ������ ������ �ùķ��̼��Ͽ� ����.
//��ǻ�Ͱ� ������ ������ ����ڴ� �յڸ� ���Ѵ�.
//��ǻ�ʹ� ���� ���� �Լ��� �̿��Ͽ� ������ ������ �Ŀ� ������ ¦���̸� ������ �ո����� �����ϰ� Ȧ���̸� ������ �޸����� �����Ѵ�.
//�̰��� �� �� �ݺ��Ͽ� ���и� ����Ѵ�.
//18.12.09 ������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	
	srand(time(NULL));
	int com, user;

	while (1) {
		com = rand() % 2;
		
		printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� -1) : ");
		scanf_s("%d", &user);
		
		if (user == -1)
			break;

		if (com > user)
			printf("��ǻ�Ͱ� �̰���ϴ�. \n");
		else if (com < user)
			printf("����ڰ� �̰���ϴ�. \n");
		else
			printf("�����ϴ�. \n");
	}

	return 0;
}
*/