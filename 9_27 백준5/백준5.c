/*(A+B)%C�� (A%C + B%C)%C�� ������?
  (A*B)%C�� (A%C * B%C)%C�� ������?
   �� �� A, B, C�� �־����� ��, ���� �װ��� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include <stdio.h>
int main(void) {
	
	int A, B, C, result;
    
	scanf_s("%d %d %d", &A, &B, &C);
	
	result = (A + B) % C;
	printf("%d \n", result);

	result = (A % C + B % C) % C;
	printf("%d \n", result);

	result = (A * B) % C;
	printf("%d \n", result);

	result = (A % C * B % C) % C;
	printf("%d \n", result);

	system("PAUSE");
	return 0;
}