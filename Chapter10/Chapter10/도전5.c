/*
2018.11.11 ������
//10���� �Ҽ��� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void) {
	int num = 2;
	int cnt1 = 0, cnt2 = 0;
	int i;

	while (cnt1 < 10) {
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				cnt2++;
				break;
			}
		}
		if (cnt2 == 0) {
			printf("%d ", num);
			cnt1++;
		}
		num++;
		cnt2 = 0;
	}
	return 0;
}
*/