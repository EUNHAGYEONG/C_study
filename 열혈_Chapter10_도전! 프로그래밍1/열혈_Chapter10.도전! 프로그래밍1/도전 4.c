/*
//���ڰ� �����ϴ� �� �� �ϳ��� �ݿ��� ���� ��ٱ濡 DVD�� ��ȭå�� �ܶ� ������, ���� ���ۿ� ����� �������Ÿ��� �簡���� ���� ���� ���̴�.
//������ �ݿ����̴�.
//���� ������ �ָӴϿ��� 5õ���� �ִ�.
//DVD ������ ������ 3,500���� ���´�.
//���ۿ� ����� ũ����(500��), �����(700��), �ݶ�(400��)�� ����Ѵ�.
//�ܵ��� �ϳ��� ������ �ʰ� �� ������ ������ �ϳ� �̻� �ݵ�� �����Ϸ��� ��� ���Ÿ� �����ؾ� �ϰڴ°�?
//���� ���⿡�� ���� ���� ����� ���� ���� ���̴�.
//���ڰ� ��� ������ �� �� �ִ��� �������� ������ �ֱ� �ٶ���.
//19.01.09 ������

#include <stdio.h>

int main(void)
{
	int total = 3500;
	int bread = 500, snack = 700, coke = 400;
	int bread_num, snack_num, coke_num;

	for (snack_num = 1; snack * snack_num <= 3500; snack_num++) {
		for (bread_num = 1; bread * bread_num <= 3500; bread_num++) {
			for (coke_num = 1; coke * coke_num <= 3500; coke_num++) {
				if (bread*bread_num + snack * snack_num + coke * coke_num == 3500)
					printf("ũ���� : %d��, ����� : %d��, �ݶ� : %d�� \n", bread_num, snack_num, coke_num);
			}
		}
	}

	return 0;
}
*/