/*
//���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է� ����!
//�ִ�, �ּڰ�, �� ���� �������.
//2018.11.15 ������
#include <stdio.h>
#define SIZE 5
int main(void) {
	int number[SIZE] = { 0 };
	int i = 0, sum = 0, max = 0, min = 0;

	for (i = 0; i < SIZE; i++) {
		printf("����Ʈ�� ������ ������ �Է����ּ��� : ");
		scanf_s("%d", &number[i]);
		sum += number[i];
	}
	 min = number[0];
	 max = number[0];
	 
	for (i = 1; i < SIZE; i++) {
		if (min > number[i])
			min = number[i];
		else if (max < number[i])
			max = number[i];
	}

	printf("���� ����Ʈ�� �ּڰ��� %d �Դϴ�. \n", min);
	printf("���� ����Ʈ�� �ִ��� %d �Դϴ�. \n", max);
	printf("���� ����Ʈ�� �� ���� %d �Դϴ�. \n", sum);

	return 0;
}
*/