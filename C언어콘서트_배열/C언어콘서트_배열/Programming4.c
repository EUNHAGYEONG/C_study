/*
//0���� 9������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//������ rand() �Լ��� ����Ͽ� �����϶�.
//�迭�� ����غ���.
//18.12.08 ������

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int list[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i;
	int num;
	int j;

	for (i = 0; i < 100; i++) {
		num = rand() % 10;
		list[num]++;
	}
	int max = list[0];

	for (i = 1; i < 10; i++) {
		if (max < list[i]) {
			max = list[i];
			j = i;
		}
	}

	printf("���� ���� ������ �� = %d \n", j);
	
	return 0;
}
*/