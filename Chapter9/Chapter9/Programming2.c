/*
//�����͸� �̿��Ͽ��� ũ�Ⱑ 5�� 1���� ���� �迭�� ����� ���� �������� ����غ���.
//18.11.29 ������

#include <stdio.h>
#define SIZE 5

void print_reverse_array(int *array);

int main(void) {
	int list[SIZE];

	printf("5���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d %d %d", &list[0], &list[1], &list[2], &list[3], &list[4]);

	print_reverse_array(list);

	return 0;
}

void print_reverse_array(int *array) {
	int i;
	for (i = SIZE - 1; i >= 0; i--)
		printf("%d ", array[i]);
}
*/