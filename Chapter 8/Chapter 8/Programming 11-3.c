/*
//���� ����� �����ϴ� ����� ��������.
//�� ����� ���� �Լ� save(int amount)�� �ۼ��Ͽ� ����.
//�� �Լ��� ������ �ݾ��� ��Ÿ���� �ϳ��� �μ� amount���� ������ save(100)�� ���� ȣ��ȴ�.
//save()�� ���� ����� �Ѿ��� ����ϰ� ������ �ѹ� ȣ��� ������ �� ������� ȭ�鿡 ����Ѵ�.
//���� ������ ��Ÿ���� �Լ� draw(int amount)�� �ۼ��Ͽ� ����.
//save()�� draw()�� ���ÿ� ����Ϸ��� ���ݾ��� � ������ ������ ǥ���Ͽ��� �ϴ°�?
//18.11.23. ������

#include <stdio.h>
int total_account = 0;

int save(int amount) {
	total_account += amount;
	return total_account;
}

int draw(int amount) {
	total_account -= amount;
	return total_account;
}

int main(void) {
	int money = 0;
	unsigned int select = 0;
	int total_money = 0;

	while (1) {
		
		printf("���� : 1, ���� ���� : 2 (���� : -1) : ");
		scanf_s("%d", &select);

		if (select == 1) {
			printf("���� or �Ա��� �ݾ��� �Է����ּ��� : ");
			scanf_s("%d", &money);
			total_money = save(money);
		}
			
		else if (select == 2) {
			printf("���� or �Ա��� �ݾ��� �Է����ּ��� : ");
			scanf_s("%d", &money);
			total_money = draw(money);
		}

		else if (select == -1)
			break;

		printf("���� ������ �� �ݾ��� %d�Դϴ�. \n", total_money);
	}
	return 0;
}
*/