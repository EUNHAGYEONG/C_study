/*(A+B)%C는 (A%C + B%C)%C와 같을꺄?
  (A*B)%C는 (A%C * B%C)%C와 같을까?
   세 수 A, B, C가 주어졌을 때, 위의 네가지 값을 구하는 프로그램을 작성하시오.*/
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