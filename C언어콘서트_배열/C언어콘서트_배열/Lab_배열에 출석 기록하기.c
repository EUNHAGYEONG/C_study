/*
//18.12.08 ������
#include <stdio.h>
#define SIZE 16

int main(void) {
	int absents[SIZE];
	int cnt = 0;
	int i = 0;
	double result = 0.0;

	for (i = 0; i < SIZE; i++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���<�⼮�� 1, �Ἦ�� 0> : ", i + 1);
		scanf_s("%d", &absents[i]);

		if (absents[i] == 0)
			cnt++;
	}

	result = cnt / 16.0;

	if (result > 0.3)
		printf("���� �ϼ� �����Դϴ�. \n");
	
	return 0;
}
*/