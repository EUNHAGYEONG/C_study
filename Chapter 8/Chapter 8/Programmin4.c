/*
//�־��� ������ ����� ��� ã�Ƴ��� �Լ� get_divisor()�� �ۼ��Ͽ� ����.
//18.11.22. ������
#include <stdio.h>
void get_divisor(int num) {
	int i, cnt = 0;
	int list[100];
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			list[cnt] = i;
			cnt++;
		}
	}
	printf("%d�� ��� = ", num);
	for (i = 0; i <= cnt; i++)
		printf("%d ", list[i]);
}

int main(void) {
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	get_divisor(num);
	return 0;
}
*/