/*
//����ڷκ��� 5���� ������ �Է¹޾Ƽ� 1���� �迭�� �����Ѵ�. 1���� �迭���� �ִ񰪰� �ּڰ��� ����ؼ� ����غ���.
#include <stdio.h>
#define SIZE 5

int main(void) {
	int list[SIZE] = { 0 };
	int i, num, max, min;
	for (i = 0; i < SIZE; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);

		list[i] = num;
	}

	max = list[0];
	min = list[0];

	for (i = 1; i < SIZE; i++) {
		if (max < list[i])
			max = list[i];
		if (min > list[i])
			min = list[i];
	}

	printf("�ִ� = %d, �ּڰ� = %d \n", max, min);
	system("PAUSE");
	return 0;
}
*/