/*
���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main �Լ��� �ۼ��غ���.
��, ���⼭�� ���� �� ���� ���·� �Լ��� �����ؾ� �Ѵ�.

	- Call-by-value ����� SquareByValue �Լ�
	- Call-by-reference ����� SquareByReference �Լ�
	
SquareByValue �Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ� �ϸ�, SquareByReference �Լ��� ������ ����Ǿ� �ִ� ������ �ּ�
���� ���ڷ� �޾Ƽ� �ش� ������ ����� ���� ������ �� ������ �ٽ� �����ؾ� �Ѵ�.
*/

//19.02.19 ������

/*
#include <stdio.h>

void SquareByValue(int num)
{
	int result = num * num;

	printf("%d \n", result);
}

void SquareByReference(int *ptr)
{
	int num = *ptr;

	*ptr = num * num;

}

int main(void)
{
	int n1 = 3;

	SquareByValue(n1);
	SquareByReference(&n1);
	
	printf("%d \n", n1);

	return 0;
}
*/