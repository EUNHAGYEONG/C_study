/*
2018.11.11 ������
//���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���. ���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
#include <stdio.h>

void Pibo(int num) {
	int pibo, i, first = -1, second = 1;

	for (i = 0; i < num; i++) {
		pibo = first + second;
		printf("%d, ", pibo);
		first = second;
		second = pibo;
	}
}

int main(void) {
	int num;
	
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &num);

	Pibo(num);
	
	return 0;
}
*/