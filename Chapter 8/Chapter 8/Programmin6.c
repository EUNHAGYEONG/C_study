/*
//�ŵ������� ����ϴ� �Լ��� �ۼ��Ͽ� ����. ���� n�� k�� �޾Ƽ� n�� k���� ����ϴ� �Լ� ipower() �Լ��� �ۼ��Ѵ�.
//�� �Լ��� ȣ���Ͽ� 3�� 0�º��� 3�� 5�±����� ���� ���̺��� ���·� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//18.11.22. ������

#include <stdio.h>

long ipower(int n, int k) {
	int i;
	long result = 1;
	for (i = 0; i < k; i++)
		result *= n;
	return result;
}

int main(void) {
	int num;
	for (num = 0; num < 6; num++)
		printf("%d \n", ipower(3, num));
	return 0;
}
*/