/*
//����ü�� �̿��Ͽ� �̸����� ǥ���� �� �ִ� ����ü�� �����ϰ�, ������ �ʱ갪�� �ο��ϰ� ����ϴ� ���α׷��� �ۼ��϶�.
//����ü�� ����� ����, ������, �߽���, ����, ��¥, �켱���� ������ �����ȴ�.
//18.12.13 ������

#include <stdio.h>

struct email {
	char title[20];
	char addressee[10];
	char sender[10];
	char content[100];
	int data;
	int priority;
};

int main(void)
{
	struct email m1 = {
		"C���", "eunha4685", "gunha4685", "�̰��� C��� �ܼ�Ʈ �� ����ü �ܿ��Դϴ�.", 20181213, 1 };

	printf("title : %s \n", m1.title);
	printf("addressee : %s \n", m1.addressee);
	printf("sender : %s \n", m1.sender);
	printf("content : %s \n", m1.content);
	printf("data : %d \n", m1.data);
	printf("priority : %d \n", m1.priority);

	return 0;
}
*/