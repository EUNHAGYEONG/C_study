/*
//�ֻ����� 60000�� ������ �� ����� �迭�� ����غ���. �� ������� �ֻ������ �ϳ��� ���� ���� Ȯ���� �� 1/6�� �Ǿ�� �Ѵ�.
//��ǻ�Ϳ��� �ֻ��� ������� ���� �߻� �Լ� rand()�� ���Ͽ� �����϶�.
//2018.11.14 ������
#include <stdio.h>
#include <stdlib.h>
#define DICE 6
int main(void) {
	int dice, dice_list[DICE] = { 0 }, i;

	for (i = 0; i < 60000; i++) {
		dice = rand() % 6 + 1;

		if (dice == 1)
			dice_list[0]++;
		else if (dice == 2)
			dice_list[1]++;
		else if (dice == 3)
			dice_list[2]++;
		else if (dice == 4)
			dice_list[3]++;
		else if (dice == 5)
			dice_list[4]++;
		else
			dice_list[5]++;
	}

	printf("================== \n");
	printf("��\t\t��\n");
	printf("================== \n");
	for (i = 0; i < 6; i++)
		printf("%d\t\t%d \n", i + 1, dice_list[i]);
	
	return 0;
}
*/
