/*
//�����͸� �̿��Ͽ��� ũ�Ⱑ 5�� 1���� ���� �迭�� ����� ���� �������� ����غ���.
//18.12.12 ������
#include <stdio.h>

int main(void) {
	int data[5];
	int i;
	int *p;

	p = data;

		printf("5���� ������ �Է��Ͻÿ� : ");
		scanf_s("%d %d %d %d %d", &p[0], &p[1], &p[2], &p[3], &p[4]);

	for (i = 4; i >= 0; i--) 
		printf("%d ", p[i]);
	
	return 0;
}
*/