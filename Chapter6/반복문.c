/*
//mile.c
#include <stdio.h>

int main(void)
{
	int meter;

	meter = 0 * 1609;
	printf("0 마일은 %d미터입니다. \n", meter);

	meter = 1 * 1609;
	printf("1 마일은 %d미터입니다. \n", meter);

	meter = 2 * 1609;
	printf("2 마일은 %d미터입니다. \n", meter);

	system("PAUSE");
	return 0;
}

//'수업시간에 떠들지 않겠습니다."를 10번 쓰기
#include <stdio.h>
int main(void) {
	int i = 0;
	while (i < 10)
	{
		printf("수업시간에 떠들지 않겠습니다. \n");
		i++;
	}
	system("PAUSE");
	return 0;
}

//while1.c
#include <stdio.h>

main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("i = %d \n", i);
		i++;
	}
	system("PAUSE");
	return 0;
}

//while2.c
#include <stdio.h>

int main(void)
{
	int meter;
	int i = 0;

	while (i < 3)
	{
		meter = i * 1609;
		printf("%d 마일은 %d미터입니다. \n", i, meter);
		i++;
	}
	system("PAUSE");
	return 0;
}

//while3.c
#include <stdio.h>

int main(void)
{
	int i = 5;
	long factorial = 1;

	while (i >= 1)
	{
		factorial *= i;
		i--;
	}
	printf("%d \n", factorial);

	system("PAUSE");
	return 0;
}

//gugu.c
#include <stdio.h>

int main(void) {
	int n;
	int i = 1;

	printf("출력하고 싶은 단 : ");
	scanf_s("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d \n", n, i, n*i);
		i++;
	}
	system("PAUSE");
	return 0;
}

//sum.c
#include <stdio.h>

int main(void) {
	int i, sum;

	i = 1;
	sum = 0;
	while (i <= 1000)
	{
		sum += i;
		i++;
	}
	printf("합은 %d입니다. \n", sum);
	system("PAUSE");
	return 0;
}

//최대공약수 구하기
//18.10.16 경은하
#include <stdio.h>
int main(void) {
	int X, Y, r;
	
	printf("두개의 정수를 입력하시오(큰수, 작은수) : ");
	scanf_s("%d %d", &X, &Y);
	
	while (Y != 0)
	{
		r = X % Y;
		X = Y;
		Y = r;
	}
	printf("최대 공약수는 %d입니다. \n", X);
	system("PAUSE");
	return 0;
}

//menu.c
#include <stdio.h>
int main(void) {
	int i = 0;
	do
	{
		printf("1--파일열기 \n");
		printf("2--파일열기 \n");
		printf("3--종료 \n");
		printf("하나를 선택하세요 : ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된 메뉴 %d \n", i);
	system("PAUSE");
	return 0;
}

//중간점검
//18.10.16 경은하
#include <stdio.h>
int main(void) {
	int n = 0;
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	do
	{
		printf("%d \n", n);
		n = n - 3;
	} while (n > 0);
	system("PAUSE");
	return 0;
}

//숫자맞추기 - 프로그램은 1부터 100 사이의 정수를 저장학 있고 사용자는 질문을 통하여 그 저우를 알아맞히려고 노력한다.
//숫자맞추기 - 사용자가 답을 제시하면 프로그램은 자신이 저장한 정수와 비교하여 제시된 정수가 더 높은지 낮은지 만을 알려준다.
//단, if문과 do-while 문을 사용한다.
//18.10.16 경은하
#include <stdio.h>
int main(void) {
	int n = 0, i = 41, k = 0;
	do
	{
		printf("정답을 추측하여 보시오 : ");
		scanf_s("%d", &n);

		if (n > i)
			printf("제시한 정수가 높습니다. \n");
		else if (n < i)
			printf("제시한 정수가 낮습니다. \n");

		k++;
	} while (n != i);
	
	printf("축하합니다! 시도횟수 = %d \n", k);
	system("PAUSE");
	return 0;
}

//sum.c
#include <stdio.h>
int main(void) {
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++)
		sum += i;

	printf("1부터 10까지의 정수의 합 = %d \n", sum);
	system("PAUSE");
	return 0;
}

//draw_box.c
//18.10.16 경은하
#include <stdio.h>
int main(void) {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 10; i++)
		printf("*");
	printf("\n");
	for (j = 0; j < 5; j++)
		printf("*        * \n");
	for (k = 0; k < 10; k++)
		printf("*");
	printf("\n");

	system("PAUSE");
	return 0;
}

//factorial.java
//반복을 이용한 팩토리얼 구하기
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!은 %d입니다. \n", n, fact);

	system("PAUSE");
	return 0;
}

//nested_loop2.c
//18.10.16 경은하
#include <stdio.h>
int main(void) {
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
			printf("*");
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

//구구단출력 - 중첩 반복 루프를 이용하여 전체 구구단을 출력해보자.
//18.10.16 경은하
#include <stdio.h>
int main(void)
{
	int num, i;
	for (num = 1; num <= 9; num++)
	{
		for (i = 1; i <= 9; i++)
			printf("%d X %d = %d \n", num, i, num*i);

		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}

//break1.c
#include <stdio.h>
int main(void) {
	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 실수를 입력하시오 : ", i);
		scanf_s("%lf", &number);

		if (number < 0.0)
			break;
		sum += number;
	}
	printf("합계 = %f \n", sum);
	
	system("PAUSE");
	return 0;
}

//continue1.c
#include <stdio.h>
int main(void) {
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;
		printf("정수 : %d \n", i);
	}
	system("PAUSE");
	return 0;
}
*/
//산수 문제 자동출제
//초등학교 학생들을 위한 산수 문제를 자동으로 출제하는 프로그램을 작성해보자. 덧셈 문제들을 자동으로 생성하여야 한다.
//피연산자는 0에서 99사이의 숫자를 난수로 하자. 한번이라도 맞으면 종료한다.
//18.10.16 경은하
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int random1 = 0, random2 = 0, n = 0, result = 0;
	while(1)
	{
		printf("산수 문제를 자동으로 출제합니다. \n");
		random1 = rand() % 100;
		random2 = rand() % 100;
		result = random1 + random2;

		printf("%d + %d = ", random1, random2);
		scanf_s("%d", &n);

		if (result == n)
		{
			printf("정답입니다! \n");
			break;
		}
		else
			printf("틀렸습니다. \n");
	} 

	system("PAUSE");
	return 0;
}