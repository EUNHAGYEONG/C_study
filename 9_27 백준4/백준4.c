//�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B. A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int A, B, result;
	scanf_s("%d %d \n", &A, &B);
	
	result = A + B;
	printf("%d \n", result);

	result = A - B;
	printf("%d \n", result);
	
	result = A * B;
	printf("%d \n", A * B);
	
	result = A / B;
	printf("%d \n", A / B);
	
	result = A % B;
	printf("%d \n", result);

	system("PAUSE");
	return 0;
}