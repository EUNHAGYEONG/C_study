/*
//�ζ� ��ȣ�� �����ϴ� ���α׷��� �ۼ��Ͽ� ����.
//�ζ� ��ȣ�� 1���� 45������ ���� 6���� �̷������.
//���� 6���� ������ �����Ͽ��� �Ѵ�.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number, i;

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		number = 1 + (rand() % 45);
		printf("%d ", number);
	}
		
	return 0;
}
*/
