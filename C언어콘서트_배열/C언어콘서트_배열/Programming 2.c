/*
//����ڷκ��� 5���� ������ �Է¹޾Ƽ� 1���� �迭�� �����Ѵ�.
//1���� �迭���� �ִ񰪰� �ּڰ��� ����ؼ� ����غ���.
//18.12.08 ������

#include <stdio.h>
#define SIZE 5

int main(void) {
	int list[SIZE];
	int i;
	int min, max;

	for (i = 0; i < SIZE; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &list[i]);
	}

	min = list[0];
	max = list[0];

	for (i = 1; i < SIZE; i++) {
		if (min > list[i])
			min = list[i];
		if (max < list[i])
			max = list[i];
	}
	printf("�ִ� = %d �ּڰ� = %d \n", max, min);

	return 0;
}
*/