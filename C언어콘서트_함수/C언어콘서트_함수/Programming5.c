/*
//�־��� �Լ��� �Ҽ������� �˻��ϴ� �Լ� prime()�� �ۼ��϶�.
//�� �Լ��� �̿��Ͽ� 1���� 100 ���̿� �����ϴ� �Ҽ����� ��� ����϶�.
//�ϳ��� ��Ʈ�� �Ҽ���� 1�� �ڱ� �ڽ��� ������ ����� ������ �� �ȴ�.
// 18.12.09 ������

#include <stdio.h>

void prime();

int main(void) {
	
	prime();

	return 0;
}

void prime() {
	int i, j;
	int cnt = 0;

	for (i = 2; i < 101; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 0)
			printf("%d ", i);

		cnt = 0;
	}
}
*/