/*
�� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���. 
���� �� �Լ��� �̸��� Swap3�� �ϸ�, ������ ���·� �Լ��� ȣ��Ǿ�� �Ѵ�.
	Swap3(&num1, &num2, &num3);

�׸��� �Լ�ȣ���� ����� num1�� ����� ���� num2��, num2�� ����� ���� num3��, �׸��� num3�� ����� ���� num1�� ����Ǿ�� �Ѵ�.
*/

//19.02.19 ������
/*
#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{

	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = tmp;

}

int main(void)
{
	int n1 = 10; int n2 = 20; int n3 = 30;

	Swap3(&n1, &n2, &n3);

	printf("n1 n2 n3 : %d %d %d \n", n1, n2, n3);

	return 0;
}
*/