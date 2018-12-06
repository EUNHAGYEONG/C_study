/*
#include <stdio.h>
int main(void) {
	int i, j, k;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d", j);
		for (k = 7 - i; k >= 1; k--)
			printf("*");
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
		else
			continue;
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d ", i);
		else
			continue;
	}
	system("PAUSE");
	return 0;
}
#include <stdio.h>
int main(void) {
	
	int x, y, i, sum = 0;
	printf("시작 정수 : ");
	scanf_s("%d", &x);
	printf("종료 정수 : ");
	scanf_s("%d", &y);

	for (i = x; i <= y; i++)
	{
		sum += i;
	}

	printf("Sum of %d of %d = %d \n", x, y, sum);
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int num, i;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d ", i);
		else
			continue;
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int F = 0;
	int C;
	printf("============================ \n");
	printf("화씨온도 \t섭씨온도 \n");
	printf("============================ \n");

	while (F <= 100)
	{
		C = (F - 32) * 5 / 9;
		printf("%d\t%d \n", F, C);

		F += 10;
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int i, j, k;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
			printf("%3d ", k);
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int num, i, j;

	for (j = 1; j < 11; j++)
	{
		printf("데이터를 입력하시오 : ");
		scanf_s("%d", &num);

		for (i = 1; i <= num; i++)
			printf("*");
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int i, j, k, max;
	for (i = 1; i < 101; i++)
	{
		for (j = 1; j < 101; j++)
		{
			for (k = 1; k < 100; k++)
			{
				if (i > j)
				{
					if (i > k)
						max = i;
					else
						max = k;
				}
				else
				{
					if (j > k)
						max = j;
					else
						max = k;
				}
				if (i*i + j * j + k * k - max * max == max * max)
					printf("%d %d %d \n", i, j, k);
				else
					continue;
			}
		}
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int n, i, sum = 0;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		sum = sum + i * i;
	
	printf("계산값은 %d입니다. \n", sum);
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	char eng;
	int num = 0;

	while (1) {
		printf("문자를 입력하시오 : (종료 .)");
		eng = getchar();

		if (eng == 'a') {
			num++;
		}
		else if (eng == '.')
			break;
		eng = getchar();
	}
	printf("a의 개수 = %d (종료 .)", num);
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	double start = 1000.0, present = 1000.0;
	int pure;
	while (1) {
		printf("연료 충전은 +, 소모는 -로 입력해주세요 : ");
		scanf_s("%d", &pure);

		present = present + pure;
		printf("현재 남아있는 양은 %f 입니다. \n", present);

		if (present < start * 0.1)
		{
			printf("연료가 10% 미만입니다. \n");
			break;
		}
	}
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int i, j, num = 0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &i);

	for (j = 2; j <= i; j++)
	{
		if (i % j == 0 && j != i)
			num++;
	}
	if (num == 0)
		printf("%d는(은) 소수입니다. \n", i);
	else
		printf("%d는(은) 소수가 아닙니다. \n", i);
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int num, i, x, y, z, tmp;
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &num);

	x = 0;
	y = 1;
	
	printf("0, 1, ");

	for (i = 0; i < num - 1; i++)
	{	
		z = x + y;
		printf("%d, ", z);

		tmp = x;
		x = y;
		y = z;
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	int a, b, c, longest;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if (a >= b) {
					if (a >= c)
						longest = a;
					else
						longest = c;
				}
				else {
					if (b >= c)
						longest = b;
					else
						longest = c;
				}
				if (a + b + c - longest > longest) {
					if (a*a + b * b + c * c - longest * longest == longest * longest)
						printf("%d %d %d \n", a, b, c);
					else
						continue;
				}
				else
					continue;
			}
		}
	}
	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
int main(void) {
	int i, num, sum1 = 0, sum2 = 1, tmp;
	printf("몇번째 항까지 구할까요?");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++) {
		if (i == 0)
			printf("%d, ", sum1);
		else if (i == 1)
			printf("%d, ", sum2);
		else {
			tmp = sum1;
			sum1 = sum2;
			sum2 = tmp + sum1;
			printf("%d, ", sum2);
		}	
	}

	system("PAUSE");
	return 0;
}
