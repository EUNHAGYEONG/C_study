/*/
#include <stdio.h>

int factorial(int n);

int main(void) {
	int num;
	int result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("%d! = %d \n", num, factorial(num));

	return 0;
}

int factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
*/