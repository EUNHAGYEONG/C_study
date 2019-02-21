/*
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자. 
예를 들어서 함수의 이름이 Swap3라 하면, 다음의 형태로 함수가 호출되어야 한다.
	Swap3(&num1, &num2, &num3);

그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/

//19.02.19 경은하
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