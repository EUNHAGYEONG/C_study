/*
//10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷��� �ۼ��� ����.
//����� ���� num�� 1�� num���� �ۿ� �������� �ʴ´ٸ� �̴� �Ҽ��� �ش��Ѵ�.
//���� 3�� �Ҽ��̴�.
//�׷��� 4�� �Ҽ��� �ƴϴ�.
//1, 2, 4�� �������� �����̴�.
//19.01.09 ������

#include <stdio.h>

int main(void)
{
	int num = 2;
	int i;
	int cnt_total = 0;

	while (cnt_total < 10) {
		int cnt = 0;

		for (i = 2; i < num; i++) {
			if (num % i == 0)
				cnt++;
		}
		if (cnt == 0) {
			cnt_total++;
			printf("%d ", num);
		}
		
		num++;
		cnt = 0;
	}

	return 0;
}
*/