/*
//�ŵ������� ����ϴ� �Լ��� �ۼ��Ͽ� ����.
//���� n�� k�� �޾Ƽ� n�� k������ ����ϴ� �Լ� ipower() �Լ��� �ۼ��Ѵ�.
//�� �Լ��� ȣ���Ͽ� 3�� 0�������� 3�� 5���������� ���� ���̺��� ���·� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//18.12.09 ������

#include <stdio.h>

int ipower(int n, int k);

int main(void) {
	int i;

	for (i = 0; i < 6; i++)
		printf("%d \n", ipower(3, i));

	return 0;
}

int ipower(int n, int k) {
	int result = 1;
	int i;

	for (i = 0; i < k; i++)
		result *= n;

	return result;
}
*/