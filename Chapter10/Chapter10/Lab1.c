/*
//�ڽ��� �����ϴ� ������ ����� ���� ����ڰ� ���� ������ ��Ǯ���ϴ� ���α׷��� �ۼ��غ���.
//18.12.03 ������

#include <stdio.h>
#include <string.h>

int main(void) {
	char me[15] = "��";
	char user[15];

	while (1) {
		printf("���� ���� �����ϴ� ������ �����ϱ��?");
		gets_s(user, 14);

		if (strcmp(me, user) == 0)
			break;
	}

	printf("�����Դϴ�! \n");

	return 0;
}
*/