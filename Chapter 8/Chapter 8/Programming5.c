/*
//�־��� ������ �Ҽ������� �˻��ϴ� �Լ� prime()�� �ۼ��϶�.
//�� �Լ��� �̿��Ͽ� 1���� 100 ���̿� �����ϴ� �Ҽ����� ��� ����϶�.
//18.11.22. ������

#include <stdio.h>
void prime(int num) {
	int i;
	int cnt = 0;
	for (i = 2; i < num; i++) {
		if (num % i == 0)
			cnt++;
	}
	if (cnt == 0)
		printf("%d ", num);
}

int main(void) {
	int j;
	for (j = 2; j <= 100; j++) {
		prime(j);
	}
	return 0;
}
*/