/*
//mile.c
#include <stdio.h>

int main(void)
{
	int meter;

	meter = 0 * 1609;
	printf("0 ������ %d�����Դϴ�. \n", meter);

	meter = 1 * 1609;
	printf("1 ������ %d�����Դϴ�. \n", meter);

	meter = 2 * 1609;
	printf("2 ������ %d�����Դϴ�. \n", meter);

	system("PAUSE");
	return 0;
}

//'�����ð��� ������ �ʰڽ��ϴ�."�� 10�� ����
#include <stdio.h>
int main(void) {
	int i = 0;
	while (i < 10)
	{
		printf("�����ð��� ������ �ʰڽ��ϴ�. \n");
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
		printf("%d ������ %d�����Դϴ�. \n", i, meter);
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

	printf("����ϰ� ���� �� : ");
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
	printf("���� %d�Դϴ�. \n", sum);
	system("PAUSE");
	return 0;
}

//�ִ����� ���ϱ�
//18.10.16 ������
#include <stdio.h>
int main(void) {
	int X, Y, r;
	
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������) : ");
	scanf_s("%d %d", &X, &Y);
	
	while (Y != 0)
	{
		r = X % Y;
		X = Y;
		Y = r;
	}
	printf("�ִ� ������� %d�Դϴ�. \n", X);
	system("PAUSE");
	return 0;
}

//menu.c
#include <stdio.h>
int main(void) {
	int i = 0;
	do
	{
		printf("1--���Ͽ��� \n");
		printf("2--���Ͽ��� \n");
		printf("3--���� \n");
		printf("�ϳ��� �����ϼ��� : ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("���õ� �޴� %d \n", i);
	system("PAUSE");
	return 0;
}

//�߰�����
//18.10.16 ������
#include <stdio.h>
int main(void) {
	int n = 0;
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	do
	{
		printf("%d \n", n);
		n = n - 3;
	} while (n > 0);
	system("PAUSE");
	return 0;
}

//���ڸ��߱� - ���α׷��� 1���� 100 ������ ������ ������ �ְ� ����ڴ� ������ ���Ͽ� �� ���츦 �˾Ƹ������� ����Ѵ�.
//���ڸ��߱� - ����ڰ� ���� �����ϸ� ���α׷��� �ڽ��� ������ ������ ���Ͽ� ���õ� ������ �� ������ ������ ���� �˷��ش�.
//��, if���� do-while ���� ����Ѵ�.
//18.10.16 ������
#include <stdio.h>
int main(void) {
	int n = 0, i = 41, k = 0;
	do
	{
		printf("������ �����Ͽ� ���ÿ� : ");
		scanf_s("%d", &n);

		if (n > i)
			printf("������ ������ �����ϴ�. \n");
		else if (n < i)
			printf("������ ������ �����ϴ�. \n");

		k++;
	} while (n != i);
	
	printf("�����մϴ�! �õ�Ƚ�� = %d \n", k);
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

	printf("1���� 10������ ������ �� = %d \n", sum);
	system("PAUSE");
	return 0;
}

//draw_box.c
//18.10.16 ������
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
//�ݺ��� �̿��� ���丮�� ���ϱ�
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!�� %d�Դϴ�. \n", n, fact);

	system("PAUSE");
	return 0;
}

//nested_loop2.c
//18.10.16 ������
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

//��������� - ��ø �ݺ� ������ �̿��Ͽ� ��ü �������� ����غ���.
//18.10.16 ������
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
		printf("%d��° �Ǽ��� �Է��Ͻÿ� : ", i);
		scanf_s("%lf", &number);

		if (number < 0.0)
			break;
		sum += number;
	}
	printf("�հ� = %f \n", sum);
	
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
		printf("���� : %d \n", i);
	}
	system("PAUSE");
	return 0;
}
*/
//��� ���� �ڵ�����
//�ʵ��б� �л����� ���� ��� ������ �ڵ����� �����ϴ� ���α׷��� �ۼ��غ���. ���� �������� �ڵ����� �����Ͽ��� �Ѵ�.
//�ǿ����ڴ� 0���� 99������ ���ڸ� ������ ����. �ѹ��̶� ������ �����Ѵ�.
//18.10.16 ������
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int random1 = 0, random2 = 0, n = 0, result = 0;
	while(1)
	{
		printf("��� ������ �ڵ����� �����մϴ�. \n");
		random1 = rand() % 100;
		random2 = rand() % 100;
		result = random1 + random2;

		printf("%d + %d = ", random1, random2);
		scanf_s("%d", &n);

		if (result == n)
		{
			printf("�����Դϴ�! \n");
			break;
		}
		else
			printf("Ʋ�Ƚ��ϴ�. \n");
	} 

	system("PAUSE");
	return 0;
}