/*
//����ü�� �̿��Ͽ��� ���� �ð��� ǥ���Ѵ�.
//����ڷκ��� 2���� �ð��� �Է¹޾Ƽ� �� �ð� ������ ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ѵ�.
//18.12.13 ������
#include <stdio.h>

struct time {
	int hour;
	int min;
	int sec;
};

int main(void)
{
	struct time start, end;
	struct time result;

	printf("���۽ð�(��, ��, ��) : ");
	scanf_s("%d %d %d", &start.hour, &start.min, &start.sec);

	printf("����ð�(��, ��, ��) : ");
	scanf_s("%d %d %d", &end.hour, &end.min, &end.sec);

	result.hour = end.hour - start.hour;
	result.min = end.min - start.min;
	result.sec = end.sec - start.sec;

	printf("�ҿ�ð� : %d : %d : %d \n", result.hour, result.min, result.sec);

	return 0;
}
*/