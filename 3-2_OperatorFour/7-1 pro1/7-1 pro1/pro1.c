//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world!"�� ����ϴ� ���α׷��� �ۼ��Ͽ���.
#include <stdio.h>
int main(void) {
	int x = 0, num = 0;
	printf("���� ������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	while (x < num)
	{
		printf("Hello world! \n");
		x++;
	}

	system("PAUSE");
	return 0;
}