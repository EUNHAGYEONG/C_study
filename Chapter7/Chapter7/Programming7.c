/*
//�迭�� �̿��Ͽ� ������ ���� ���� �ý����� �ۼ��غ���.
//���� ���� �����̶� �¼��� 10���ۿ� �� �ȴ�.
//������ �Ϸ��� �ϸ� ���� �¼� ��ġǥ�� �����ش�.
//�� ������ ���� �¼��� 1��, ������ �� �� �¼��� 0���� ��Ÿ����.
//2018.11.14 ������
#include <stdio.h>
#define SIZE 10

int main(void) {
	int seat[SIZE] = { 0 };
	int i, x;
	char response;

	for (i = 0; i < 10; i++)
		seat[i] = 0;

	printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) :");
	scanf_s("%c", &response);

	while (1) {

		if (response == 'y') {
			printf("====================== \n");
			printf(" 1 2 3 4 5 6 7 8 9 10 \n");
			printf("====================== \n");
			for (i = 0; i < SIZE; i++)
				printf(" %d", seat[i]);

			printf("\n");
			printf("���° �¼��� �����Ͻðڽ��ϱ� ");
			scanf_s("%d", &x);
			seat[x - 1] = 1;
			printf("���� �Ǿ����ϴ�. \n");

		}

		if (response == 'n')
			break;

		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) :");
		scanf_s("%c", &response);
	}

	return 0;
}
*/