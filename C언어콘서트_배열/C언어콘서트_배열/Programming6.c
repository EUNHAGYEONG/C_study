/*
//�ֻ����� 60000�� ������ �� ����� �迭�� ����غ���.
//�� ������� �ֻ������ �ϳ��� ���� ���� Ȯ���� �� 1/6�� �Ǿ�� �Ѵ�.
//��ǻ�Ϳ��� �ֻ��� ������� ���� �߻� �Լ� rand()�� ���Ͽ� �����϶�.
//18.12.08 ������

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dices[6] = {0, 0, 0, 0, 0, 0};
	int i;
	int dice;

	for (i = 0; i < 60000; i++) {
		dice = rand() % 6 + 1;
		dices[dice - 1]++;
	}

	printf("=============== \n");
	printf("��\t�� \n");
	for (i = 0; i < 6; i++) {
		printf("%d\t%d\n", i + 1, dices[i]);
	}

	return 0;
}
*/