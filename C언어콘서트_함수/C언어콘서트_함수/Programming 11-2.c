/*
//���� ����� �����ϴ� ����� ��������.
//�� ����� ���� �Լ� save(int amount)�� �ۼ��Ͽ� ����.
//�� �Լ��� ������ �ݾ��� ��Ÿ���� �ϳ��� �μ� amount���� ������ save(100)�� ���� ȣ��ȴ�.
//save()�� ������� ����� �Ѿ��� ����ϰ� ������ �ѹ� ȣ��� ������ �� ������� ȭ�鿡 ����Ѵ�.
//���� ���� ������ ����Ͽ� �����϶�.
//18.12.09 ������

#include <stdio.h>

int save(int amount);

int main(void) {
	int amount;

	while (1) {
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1)");
		scanf_s("%d", &amount);

		if (amount == -1)
			break;

		printf("���ݱ����� ������� %d�Դϴ�. \n", save(amount));
	}

	return 0;
}

int save(int amount) {
	static int total_amount = 0;

	total_amount += amount;

	return total_amount;
}
*/