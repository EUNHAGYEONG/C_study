/*
//���� ����� �����ϴ� ����� ��������.
//�� ����� ���� �Լ� save(int amount)�� �ۼ��Ͽ� ����.
//�� �Լ��� ������ �ݾ��� ��Ÿ���� �ϳ��� �μ� amount���� ������ save(100)�� ���� ȣ��ȴ�.
//save()�� ���� ����� �Ѿ��� ����ϰ� ������ �ѹ� ȣ��� ������ �� ������� ȭ�鿡 ����Ѵ�.
//���� ���� ������ ����Ͽ� �����϶�.
//18.11.23. ������

#include <stdio.h>

int save(int amount) {
	static int saved = 0;
	saved += amount;

	return saved;
}

int main(void) {
	int money, total_money = 0;

	while (1) {
		printf("�󸶸� �����Ͻðڽ��ϱ�? (����� -1) : ");
		scanf_s("%d", &money);

		total_money = save(money);

		if (money == -1)
			break;
		
		printf("���ݱ����� ������� %d�Դϴ�. \n", total_money);
	}
	return 0;
}
*/
