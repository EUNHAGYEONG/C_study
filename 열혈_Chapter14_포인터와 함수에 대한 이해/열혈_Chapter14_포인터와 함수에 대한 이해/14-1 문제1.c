/*
변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main 함수를 작성해보자.
단, 여기서는 다음 두 가지 형태로 함수를 정의해야 한다.

	- Call-by-value 기반의 SquareByValue 함수
	- Call-by-reference 기반의 SquareByReference 함수
	
SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며, SquareByReference 함수는 정수가 저장되어 있는 변수의 주소
값을 인자로 받아서 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장해야 한다.
*/

//19.02.19 경은하

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