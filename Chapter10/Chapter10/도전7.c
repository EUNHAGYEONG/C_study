/*
2018.11.11 ������
//���α׷� ����ڷκ��� ���� n�� �Է� �޴´�. �׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void) {
	int result = 1;
	int n;
	int k = 0;
	printf("��� n �Է� : ");
	scanf_s("%d", &n);

	while (result < n) {
		result *= 2;
		k++;
	}
	printf("������ �����ϴ� k�� �ִ��� %d \n", k);
	return 0;
}
*/