/*
//���� ����� �����ϴ� ����� ��������.
//�� ����� ���� �Լ� save(int amount)�� �ۼ��Ͽ� ����.
//�� �Լ��� ������ �ݾ��� ��Ÿ���� �ϳ��� �μ� amount���� ������ save(100)�� ���� ȣ��ȴ�.
//save()�� ������� ����� �Ѿ��� ����ϰ� ������ �ѹ� ȣ��� ������ �� ������� ȭ�鿡 ����Ѵ�.
//���� ������ ��Ÿ���� �Լ� draw(int amount)�� �ۼ��Ͽ� ����. save()�� draw()�� ���ÿ� ����Ϸ��� ���ݾ��� � ������ ������ ǥ���Ͽ��� �ϴ°�?
//18.12.09 ������

#include <stdio.h>

int save(int amount);
int draw(int amount);

int total_amount;

int main(void) {
	int amount;
	int choose;

	while (1) {
		printf("������ ������ �Է����ּ���(���� : 1, ���� : 2, ���� : -1) : ");
		scanf_s("%d", &choose);

		if (choose == -1)
			break;

		printf("�ݾ��� �Է��Ͽ� �ּ��� : ");
		scanf_s("%d", &amount);

		if (choose == 1)
			printf("���ݱ����� ������� %d�Դϴ�. \n", save(amount));
		else if (choose == 2)
			printf("���ݱ����� ������� %d�Դϴ�. \n", draw(amount));
	}

	return 0;
}

int save(int amount) {
	total_amount += amount;
}

int draw(int amount) {
	total_amount -= amount;
}
*/