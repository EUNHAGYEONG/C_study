/*
//10�� 4�� ������
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
//���α׷� ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���. ��! �Ѱ��� ������ �ִ�. ������ �ݵ�� 1�̻��̾�� �Ѵ�. ���࿡ 1�̸��� ���� �ԷµǴ� ��쿡��,
//�̸� �Է����� �������� �ʰ� �� �Է��� �䱸�ؾ� �Ѵ�. �׷��� �ᱹ 1�̻��� ���� 5���� ��� �Է� ���� �� �ֵ��� ���α׷��� �ϼ��ؾ� �Ѵ�.
#include <stdio.h>
int main(void) {
	int a = 0, num = 1, sum = 0;
	while (a < 5)
	{
		printf("������ �Է��Ͽ� �ּ��� : ");
		scanf_s("%d", &num);

		while (num < 1)
		{
			printf("���Է����ּ��� : ");
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
//�Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.
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

//7-2 pro2 ����
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
		printf("���� �Է�(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ� : %d \n", total);
	
	system("PAUSE");
	return 0;
}

//7-3 pro1
//UsefulDoWhile.c�� ������ ��� 1�� ��� 2�� ����Ͽ� �����غ���.
//���1. ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.
#include <stdio.h>
int main(void)
{
	int total = 0, num = 1;
	while (num != 0)
	{
		printf("���� �Է�(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ� : %d \n", total);

	system("PAUSE");
	return 0;
}

//���2. while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.
#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;
	printf("���� �Է�(0 to quit) : ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ� : %d \n", total);
	system("PAUSE");
	return 0;
}

//7-3 pro2
//0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�, do~while�� ������� �����غ���. ����� ������ ����� 2550�� �Ǿ�� �Ѵ�.
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
//while���� ��ø���� ���� TwoToNine.c�� do~while���� ��ø������� �� ������ ����.
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
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d���� ������� : %d \n", num, total);
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
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("��� : %f \n", total / (num - 1));

	system("PAUSE");
	return 0;
}

//7-4 pro1
//���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�, �� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void)
{
	int A, B, i;
	int sum = 0;
	printf("�� ������ �Է��ϼ���. ");
	scanf_s("%d %d", &A, &B);

	for (i = A; i <= B; i++)
		sum = sum + i;
	
	printf("%d", sum);

	system("PAUSE");
	return 0;
}

//7-4 pro2
//���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void)
{
	int x, a;
	int factorial = 1;

	printf("������ �Է��Ͽ� �ּ���. ");
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

//����1.�ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int N, i;

	printf("�ڿ��� N�� �Է����ּ��� : ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		printf("%d \n", i);
	}
	
	system("PAUSE");
	return 0;
}

//�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int N, i;
	printf("�ڿ��� N�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &N);

	for (i = N; i > 0; i--)
	{
		printf("%d \n", i);
	}

	system("PAUSE");
	return 0;
}

//����3.N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
#include <stdio.h>
int main(void)
{
	int N, i;
	printf("2���� 9 �� �Ѱ��� �ڿ����� �Է����ּ���. ");
	scanf_s("%d", &N);

	for (i = 1;i <= 9; i++)
	{
		printf("%d * %d = %d \n", N, i, N * i);
	}

	system("PAUSE");
	return 0;
}

//����4. ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
#include <stdio.h>
int main(void)
{
	int N, i, j;
	printf("�ڿ��� N(1 <= N <= 100)�� �Է����ּ���. ");
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

//����5. ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����(��, ������ ����)
#include <stdio.h>
int main(void)
{
	int N, a, b, c;
	printf("�ڿ��� N(1 <= N <- 1000)�� �Է��Ͻÿ�. ");
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

//����6. ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
#include <stdio.h>
int main(void)
{
	int N, i, j;
	printf("�ڿ��� N(1 <= N <= 100)�� ���� �Է��ϼ���. ");
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

//����7. ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����(��, ���������� ����)
#include <stdio.h>
int main(void)
{
	int N, i, j = 0, k;
	printf("�ڿ��� N(1 <= N <= 100)�� �Է����ּ���. ");
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

//����8. ������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int x, y, day;
	printf("���� ������ �Է����ּ���. ");
	scanf_s("%d %d", &x, &y);
}

//����9. n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int n, i, sum = 0;
	printf("n(1 <= n <=10,000)�� ���� �Է��Ͽ� �ּ���. ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum += i;
	}
	printf("%d", sum);
	system("PAUSE");
	return 0;
}

//����10. N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//[�Է�]
//5
//54321
//[���]
//15
#include <stdio.h>
int main(void)
{
	int N, i, n, sum = 0;
	printf("�ڿ��� N(1 <= N <= 100)�� �Է����ּ���. ");
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

//����11. ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����. �� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <string.h>
int main(void)
{

}

//����12. ù �ٿ� �׽�Ʈ���̽��� ���� T�� �־�����. T�� �ִ� 1,000,000�̴�. ���� T�ٿ��� ���� �� ���� A�� B�� �־�����. A�� B�� 1 �̻�, 1,000 �����̴�.
//�� �׽�Ʈ���̽����� A + B�� �� �ٿ� �ϳ��� ������� ����Ѵ�.
#include <stdio.h>
int main(void)
{
	int T, i, Ai, Bi, sumi;
	printf("�׽�Ʈ���̽��� ���� T�� �Է����ּ���. ");
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
//����8. ������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int x, y, day;
	printf("���� ������ �Է����ּ���. ");
	scanf_s("%d %d", &x, &y);

	for (x = 1; x < 13; x++)
	{
		
	}

}
