//���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void) {
	int dan = 0, num = 9;
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &dan);

	while (num > 0)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num--;
	}
	system("PAUSE");
	return 0;
}
