//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 5�� �Է� �޾Ҵٸ�, 3 6 9 12 15�� ����ؾ� �Ѵ�.
#include <stdio.h>
int main(void) {
	int x = 1, num = 0;
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &num);

	while (x <= num)
	{
		printf("%d \n", 3 * x);
		x++;
	}

	system("PAUSE");
	return 0;
}