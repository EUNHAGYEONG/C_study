/*
//0���� 9������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ rand() �Լ��� ����Ͽ� �����϶�. �迭�� ����غ���.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int list[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
	int num, i, j, max;

	for (i = 0; i < 100; i++) {
		num = rand() % 101;
		for (j = 0; j < 10; j++) {
			if (list[0][j] == num) {
				list[1][j]++;
				break;
			}
		}
	}
	i = 0;
	max = list[1][0];
	for (i = 1; i < 1; i++) {
		if (max < list[1][i])
			max = i;
	}
	
	printf("���� ���� ������ �� = %d \n", i);
	system("PAUSE");
	return 0;
}
*/