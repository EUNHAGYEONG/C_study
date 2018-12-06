//10월4일 경은하
//프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 다음 두 가지 조건을 만족시켜야 한다.
//"먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력 받는다."
//"평균 값은 소수점 이하까지 계산해서 출력한다."

#include <stdio.h>
int main(void) {
	int num = 0, x = 0, avg = 0, A = 0, B = 0;
	printf("몇 개의 정수를 입력할 것인가요? ");
	scanf_s("%d", &num);

	while (x < num)
	{
		printf("정수를 입력하여 주세요 : ");
		scanf_s("%d", &A);
		B = B + A;
		x++;
	}
	
	avg = B / num;
	printf("%d", avg);

	system("PAUSE");
	return 0;
}
