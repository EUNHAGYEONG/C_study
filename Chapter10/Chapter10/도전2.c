/*
//���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
//���� �� 3�� 5�� �Է��ϸ� 3, 4, 5���� ��µǾ�� �Ѵ�.
#include <stdio.h> 

void gogo(int i, int j) {
	int num, k;
	for (num = i; num < j + 1; num++) {
		printf("[%d��] \n", num);
		for (k = 1; k < 10; k++) {
			printf("%d X %d = %d \n", num, k, num*k);
		}
		printf("======================================= \n");
		printf("\n");
	}
}

int main(void) {
	int a, b;
	printf("����ϰ� ���� �������� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &a, &b);

	gogo(a, b);
	return 0;
}
*/