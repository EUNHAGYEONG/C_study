/*
//���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ���� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
//2018.11.15 ������
#include<stdio.h>
int main(void) {
	char str[100];
	int len = 0;

	printf("���ܾ �Է����ּ��� : ");
	gets_s(str, sizeof(str));

	while (str[len] != 0) {
		len++;
	}

	printf("%d", len);
	return 0;
}
*/