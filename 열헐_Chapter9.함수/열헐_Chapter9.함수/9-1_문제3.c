/*
//���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���.
//���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
//19.01.07 ������

#include <stdio.h>

void pibo(int num);

int main(void)
{
	int A;
	
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &A);

	pibo(A);

	return 0;
}

void pibo(int num)
{
	int num1 = 0;
	int num2 = 1;
	int tmp, i;

	if (num == 1)
		printf("%d ", num1);
	else if (num == 2)
		printf("%d %d \n", num1, num2);

	else {
		printf("%d ", num1);
		printf("%d ", num2);

		for (i = 0; i < num - 2; i++) {
			tmp = num1 + num2;

			printf("%d ", tmp);

			num1 = num2;
			num2 = tmp;
		}
	}
}
*/