/*
//IfBasic.c
#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");

	if (num > 0)
		printf("�Է� ���� 0���� ũ��. \n");

	if (num == 0)
		printf("�Է� ���� 0�̴�. \n");

	system("PAUSE");
	return 0;
}

//CalOne.c
#include <stdio.h>

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("��� : %f \n", result);

	system("PAUSE");
	return 0;
}

//Mul3Mul4.c
#include <stdio.h>

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 �Ǵ� 4�� ��� : %d \n", num);
	}
	system("PAUSE");
	return 0;
}

//IfElseBasic.c
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	else
		printf("�Է� ���� 0���� ���� �ʴ�. \n");

	system("PASUSE");
	return 0;
}

//CalTwo.c
#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("��� : %f \n", result);

	system("PAUSE");
	return 0;
}

//ThreeOperand.c
#include <stdio.h>

int main(void) {
	int num, abs;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("���� : %d \n", abs);

	system("PUASE");
	return 0;
}

//8-1 ���� 1. 1�̻� 100�̸��� ���� �߿��� 7�� ����� 9�� ����� ����ϴ� ���α׷��� �ۼ��غ���. ��! 7�� ����̸鼭 ���ÿ� 9�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
//18.10.11 ������
#include <stdio.h>

int main(void)
{
	int num;
	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0)
			printf("%d�� 7�� ����Դϴ�. \n", num);
		else if (num % 9 == 0 && num % 7 != 0)
			printf("%d�� 9�� ����Դϴ�. \n", num);
	}
	system("PAUSE");
	return 0;
}

//8-1 ���� 2.�� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� ������ ����. ��, ������ ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�.
// 18.10.11 ������
#include <stdio.h>

int main(void)
{
	int A, B, result;
	printf("�� ���� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &A, &B);

	if (A >= B)
		result = A - B;
	else
		result = B - A;

	printf("�� ���� ���� %d�Դϴ�. \n", result);

	system("PAUSE");
	return 0;
}

// 8-1.���� 3. �л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����.
// 18.10.11 ������
#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double avg;
	char grade;

	printf("����, ����, ���� ������ �Է����ּ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3;

	if (avg > 90)
		grade = 'A';
	else if (avg > 80)
		grade = 'B';
	else if (avg > 70)
		grade = 'C';
	else if (avg > 50)
		grade = 'D';
	else
		grade = 'F';

	printf("�� �л��� ������ %c �Դϴ�. \n", grade);

	system("PAUSE");
	return 0;
}

//8-1 ���� 4.���� ���� 2�� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� ������ ����.
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int A, B, result;

	printf("�� ���� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &A, &B);

	result = A >= B ? A - B : B - A;

	printf("�� ���� ���� %d�Դϴ�. \n", result);

	system("PAUSE");
	return 0;
}

//WhenOver5000.c
#include <stdio.h>
int main(void) {
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;
		num++;
	}

	printf("sum : %d \n", sum);
	printf("num : %d \n", num);
	system("PAUSE");
	return 0;
}

//ExceptMul2Mul3.c
#include <stdio.h>
int main(void) {
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	
	system("PAUSE");
	return 0;
}

//8-2 ����1. �������� ����ϵ� ¦�� �ܸ� ��µǵ��� ����. ���� 2���� 2*2����, 4���� 4*4����, 6���� 6*6����, 8���� 8*8������ ��µǵ��� ���α׷��� ������ ����.(��, break�� continue�� ����ؾ� �Ѵ�.)
//18.10.11 ������
#include <stdio.h>
int main(void) {
	int X, Y;
	for (X = 1; X < 10; X++)
	{
		if (X % 2 != 0)
			continue;
		for (Y = 1; Y < 10; Y++)
		{
			printf("%d X %d = %d \n", X, Y, X * Y);
			
			if (X == Y)
				break;
		}
	}
	system("PAUSE");
	return 0;
}

//8-2 ����2. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��غ���.
//18.10.11 ������
#include <stdio.h>
int main(void) {
	int A, Z, result;
	for (A = 1; A < 10; A++)
	{
		for (Z = 1; Z < 10; Z++)
		{
			result = (A * 10 + Z) + (Z * 10 + A);
			
			if (result != 99)
				continue;
			
			printf("A = %d, Z = %d�� �� AZ + ZA = 99�Դϴ�. \n", A, Z);
		}
	}
	system("PAUSE");
	return 0;
}

//EnglishSchool.c
#include <stdio.h>

int main(void) {
	int num;
	printf("1�̻� 5������ ���� �Է� : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� ONE \n");
		break;
	case 2:
		printf("2�� TWO \n");
		break;
	case 3:
		printf("3�� THREE \n");
		break;
	case 4:
		printf("4�� FOUR \n");
		break;
	case 5:
		printf("5�� FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
	system("PAUSE");
	return 0;
}

//AdvanEnglishSchool.c
#include <stdio.h>
int main(void) {
	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է� : ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	}
	system("PASUE");
	return 0;
}

//18.10.12 ������
#include <stdio.h>
int main(void) {
	int num, num_;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	num_ = num / 10;

	switch (num_)
	{
	case 0:
		printf("0�̻� 10�̸� \n");
		break;
	case 1:
		printf("10�̻� 20�̸� \n");
		break;
	case 2:
		printf("20�̻� 30�̸� \n");
		break;
	case 3:
		printf("30�̻� 40�̸� \n");
		break;
	default:
		printf("30�̻� \n");
	}
	system("PAUSE");
	return 0;
}

//GoToBasic.c
#include <stdio.h>
int main(void) {
	int num;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1�� �Է��ϼ̽��ϴ�. \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�. \n");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");

END:
	system("PAUSE");
	return 0;
}
*/