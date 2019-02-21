/*
//10월 4일 경은하
//TwoToNine.c
#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	system("PAUSE");
	return 0;
}

//7-2 pro1
//프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성해보자. 단! 한가지 조건이 있다. 정수는 반드시 1이상이어야 한다. 만약에 1미만의 수가 입력되는 경우에는,
//이를 입력으로 인정하지 않고 재 입력을 요구해야 한다. 그래서 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록 프로그램을 완성해야 한다.
#include <stdio.h>
int main(void) {
	int a = 0, num = 1, sum = 0;
	while (a < 5)
	{
		printf("정수를 입력하여 주세요 : ");
		scanf_s("%d", &num);

		while (num < 1)
		{
			printf("재입력해주세요 : ");
			scanf_s("%d", &num);
		}
		sum = sum + num;
		a++;
	}
	printf("%d", sum);
	
	system("PAUSE");
	return 0;
}

//7-2 pro2
//아래의 출력을 보이는 프로그램을 작성해보자.
#include <stdio.h>
int main(void) {
	int a = 0, c = 0, x = 0;
	while (c < 5)
	{
		while (x < a)
		{
			printf("o");
			x++;
		}
		x = 0;
		a++;
		printf("* \n");
		c++;
	}

	system("PAUSE");
	return 0;
}

//7-2 pro2 번외
#include <stdio.h>
int main(void) {
	int x = 0, y = 0, z = 0;
	while (x < 5)
	{
		printf("X");
		while (y < z)
		{
			printf("O");
			y++;
		}
		y = 0;
		z++;
		printf("X \n");
		x++;
	}
	system("PAUSE");
	return 0;
}

//7-2 UsefulDoWhile.c
#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계 : %d \n", total);
	
	system("PAUSE");
	return 0;
}

//7-3 pro1
//UsefulDoWhile.c의 예제를 방법 1과 방법 2를 사용하여 구현해보자.
//방법1. 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.
#include <stdio.h>
int main(void)
{
	int total = 0, num = 1;
	while (num != 0)
	{
		printf("정수 입력(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계 : %d \n", total);

	system("PAUSE");
	return 0;
}

//방법2. while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;
	printf("정수 입력(0 to quit) : ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("정수 입력(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계 : %d \n", total);
	system("PAUSE");
	return 0;
}

//7-3 pro2
//0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반으로 구현해보자. 참고로 덧셈의 결과는 2550이 되어야 한다.
#include <stdio.h>
int main(void)
{
	int num = 0, total = 0;
	do
	{
		total += num;
		num = num + 2;
	} while (num <= 100);
	printf("%d", total);
	system("PAUSE");
	return 0;
}

//7-3 pro3
//while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재 구현해 보자.
#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);

	system("PAUSE");
	return 0;
}

//7-3 AddToNum.c
#include <stdio.h>

int main(void)
{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지 덧셈결과 : %d \n", num, total);
	system("PAUSE");
	return 0;
}

//RealMean.c
#include <stdio.h>

int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; )
	{
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균 : %f \n", total / (num - 1));

	system("PAUSE");
	return 0;
}

//7-4 pro1
//프로그램 사용자로부터 두 개의 정수를 입력 받아서, 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void)
{
	int A, B, i;
	int sum = 0;
	printf("두 정수를 입력하세요. ");
	scanf_s("%d %d", &A, &B);

	for (i = A; i <= B; i++)
		sum = sum + i;
	
	printf("%d", sum);

	system("PAUSE");
	return 0;
}

//7-4 pro2
//다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void)
{
	int x, a;
	int factorial = 1;

	printf("정수를 입력하여 주세요. ");
	scanf_s("%d", &x);

	for (a = 1; a <= x; a++)
		factorial = factorial * a;

	printf("%d", factorial);

	system("PAUSE");
	return 0;
}

//TowToNineForVer.c
#include <stdio.h>

int main(void)
{
	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%d X %d = %d \n", cur, is, cur * is);
		printf("\n");
	}

	system("PAUSE");
	return 0;
}

//백준1.자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int N, i;

	printf("자연수 N을 입력해주세요 : ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		printf("%d \n", i);
	}
	
	system("PAUSE");
	return 0;
}

//자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int N, i;
	printf("자연수 N의 값을 입력하세요 : ");
	scanf_s("%d", &N);

	for (i = N; i > 0; i--)
	{
		printf("%d \n", i);
	}

	system("PAUSE");
	return 0;
}

//백준3.N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
#include <stdio.h>
int main(void)
{
	int N, i;
	printf("2부터 9 중 한가지 자연수를 입력해주세요. ");
	scanf_s("%d", &N);

	for (i = 1;i <= 9; i++)
	{
		printf("%d * %d = %d \n", N, i, N * i);
	}

	system("PAUSE");
	return 0;
}

//백준4. 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
#include <stdio.h>
int main(void)
{
	int N, i, j;
	printf("자연수 N(1 <= N <= 100)을 입력해주세요. ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

//백준5. 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제(단, 오른쪽 정렬)
#include <stdio.h>
int main(void)
{
	int N, a, b, c;
	printf("자연수 N(1 <= N <- 1000)을 입력하시오. ");
	scanf_s("%d", &N);

	for (a = 1; a <= N; a++)
	{
		for (b = 1; b <= N - a; b++)
		{
			printf(" ");
		}
		for (c = 1; c <= a; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

//백준6. 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
#include <stdio.h>
int main(void)
{
	int N, i, j;
	printf("자연수 N(1 <= N <= 100)의 값을 입력하세요. ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (j = N; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

//백준7. 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제(단, 오른쪽으로 정렬)
#include <stdio.h>
int main(void)
{
	int N, i, j = 0, k;
	printf("자연수 N(1 <= N <= 100)을 입력해주세요. ");
	scanf_s("%d", &N);

	for (i = 1;i <= N; i++)
	{
		for (k = 1; k <= N - i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
	}
	system("PAUSE");
	return 0;
}

//백준8. 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int x, y, day;
	printf("월과 요일을 입력해주세요. ");
	scanf_s("%d %d", &x, &y);
}

//백준9. n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int n, i, sum = 0;
	printf("n(1 <= n <=10,000)의 값을 입력하여 주세요. ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum += i;
	}
	printf("%d", sum);
	system("PAUSE");
	return 0;
}

//백준10. N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//[입력]
//5
//54321
//[출력]
//15
#include <stdio.h>
int main(void)
{
	int N, i, n, sum = 0;
	printf("자연수 N(1 <= N <= 100)을 입력해주세요. ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		scanf_s("%d", &n);
		sum += n;
	}

	printf("%d", &sum);
	system("PAUSE");
	return 0;
}

//백준11. 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다. 한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <string.h>
int main(void)
{

}

//백준12. 첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
//각 테스트케이스마다 A + B를 한 줄에 하나씩 순서대로 출력한다.
#include <stdio.h>
int main(void)
{
	int T, i, Ai, Bi, sumi;
	printf("테스트케이스의 개수 T를 입력해주세요. ");
	scanf_s("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf_s("%d %d", &Ai, &Bi);
	}
	i = 0;
	for (i = 1; i <= T; i++)
	{
		sumi = Ai + Bi;
		printf("%d \n", sumj);
	}
	system("PAUSE");
	return 0;
}
*/
//백준8. 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int x, y, day;
	printf("월과 요일을 입력해주세요. ");
	scanf_s("%d %d", &x, &y);

	for (x = 1; x < 13; x++)
	{
		
	}

}
