/*
//���α׷� ����ڷκ��� ���ܾ �Է� �޴´�.
//�׸��� ���� �Է� ���� ���ܾ �����ϴ� ���� �߿��� �ƽ�Ű �ڵ��� ���� ���� ū ���ڸ� ã�Ƽ� ����ϴ� ���α׷��� �ۼ��غ���.
//2018.11.15 ������

#include <stdio.h>
int main(void) {
	char str[50];
	int len, k, max;

	printf("���ܾ �Է����ּ��� : ");
	gets_s(str, sizeof(str));

	len = strlen(str);
	max = (int)str[0];

	for (k = 1; k < len; k++) {
		if (max < (int)str[k])
			max = (int)str[k];
	}

	printf("%c", max);
	return 0;
}
*/