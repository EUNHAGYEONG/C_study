/*
//if_else1.c
#include <stdio.h>
int main(void) {
	int temperature;

	printf("�µ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &temperature);

	if(temperature > 0) {
		printf("������ �����Դϴ�. \n");
	}
	else
	{
	printf("������ �����Դϴ�. \n");
	}
	printf("���� �µ��� %d �Դϴ�. \n", temperature);

	system("PAUSE");
	return 0;
}

//if_else2.c
#include <stdio.h>

int main(void) {
	int number;

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &number);

	if (number & 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�. \n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�. \n");

	system("PAUSE");
	return 0;
}

//if_else3.c
#include <stdio.h>
int main(void) {
	int score;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);
	if (score >= 60)
	{
		printf("�հ��Դϴ�. \n");
		printf("���бݵ� ���� �� �ֽ��ϴ�. \n");
	}
	else
	{
		printf("���հ��Դϴ�. \n");
		printf("�ٽ� �����ϼ��� \n");
	}
	system("PAUSE");
	return 0;
}

//condition.c
#include <stdio.h>
int main(void) {
	int x, y;

	printf("ù��° �� = ");
	scanf_s("%d", &x);
	printf("�ι�° �� = ");
	scanf_s("%d", &y);

	printf("ū�� = %d \n", (x > y) ? x : y);
	printf("������ = %d \n", (x < y) ? x : y);

	system("PAUSE");
	return 0;
}

//�߰�����. ���� n�� ���� 100���� ũ�ų� ������ "large", 100���� ������ "small"�� ����ϴ� if-else���� �ۼ��϶�.
//1��° ��� 18.10.10 ������
#include <stdio.h>
int main(void) {
	int x;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &x);

	if (x >= 100)
		printf("large \n");
	else
		printf("small \n");

	system("PAUSE");
	return 0;
}

//2��° ��� 18.10.10. ������
#include <stdio.h>
int main(void) {
	int x;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &x);

	printf("%s \n", (x >= 100) ? "large" : "small");

	system("PAUSE");
	return 0;
}
//check_number.c
#include <stdio.h>
int main(void) {
	int number;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &number);

	if (number >= 0 && number <= 100)
		printf("�Է��� ������ 0���� 100 ���̿� �ֽ��ϴ�. \n");
	else
		printf("�Է��� ������ 0���� 100 ���̰� �ƴմϴ�. \n");

	system("PAUSE");
	return 0;
}

//�߰�����1. 2���� ������ �Է¹޾Ƽ� ū ������ ���� ���� �� ����� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 2�� 10�� �Է��ϸ� 8�� ����ϸ� �ȴ�.
//18.10.10. ������
#include <stdio.h>
int main(void) {
	int A, B, result;
	
	printf("2���� ������ �Է����ּ��� ; ");
	scanf_s("%d %d", &A, &B);

	if (A >= B)
	{
		result = A - B;
		printf("�� ���� ���� %d�Դϴ�. \n", result);
	}
	else
	{
		result = B - A;
		printf("�� ���� ���� %d�Դϴ�. \n", result);
	}
	system("PAUSE");
	return 0;
}

//�߰����� 2. ������ �Է¹޾Ƽ� 2�� ����� ���ÿ� 3�� ��������� �˻��ϴ� ���α׷��� �ۼ��غ���.
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int X;
	printf("������ �Է��Ͽ� �ּ��� : ");
	scanf_s("%d", &X);

	if (X % 2 == 0 && X % 3 == 0)
		printf("%d�� 2�� ����Ӱ� ���ÿ� 3�� ����Դϴ�. \n", X);
	else
		printf("%d�� 2�� ����Ӱ� ���ÿ� 3�� ����� �ƴմϴ�. \n", X);
		
	system("PAUSE");
	return 0;
}
*/
/*
�����Ǵ� ���α׷� �ۼ�
�������� �ƴѤ����� �Ǵ��ϴ� ���α׷��� if���� ����Ͽ� �ۼ��غ���.
������ ���� ������ �����ؾ� �Ѵ�.
1. ������ 4�� ������ ��������.
2. 100���� ������ �������� ������ �����Ѵ�.
3. 400���� ������ �������� ������ �����̴�.

//18.10.10 ������
#include <stdio.h>
int main(void) {
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� �����Դϴ�. \n", year);
	else
		printf("%d���� ������ �ƴմϴ�. \n", year);

	system("PAUSE");
	return 0;
}

//���� ������ ���� - ���α׷��� ������ ������ ���� ������ ������ ��ó�� �ո�� �޸��� �����ϰ� ���;� �Ѵ�.
//18.10.10. ������
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int random;
	random = rand() % 2;
	if (random == 0)
		printf("�ո� \n");
	else
		printf("�޸� \n");

	system("PAUSE");
	return 0;
}

//grade.c
//������ �޾Ƽ� ������ �����ϴ� ���α׷�
#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("���� %c \n", grade);
	
	system("PAUSE");
	return 0;
}

//calc1.c
//������ ��� ���� ���α׷�
#include <stdio.h>
int main(void) {
	char op;
	int x, y;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d %c %d", &x, &op, &y);

	if (op == '+')
		printf("%d \n", x + y);
	else if (op == '-')
		printf("%d \n", x - y);
	else if (op == '*')
		printf("%d \n", x * y);
	else if (op == '/')
		printf("%d \n", x / y);
	else
		printf("�������� �ʴ� �������Դϴ�. \n");

	system("PAUSE");
	return 0;
}

//�߰�����. ���� ����� �޾Ƽ� 100ml �̸��� small, 100ml �̻� 200ml �̸��� medium, 200ml �̻��� large��� ����ϴ� �������� if-else���� �ۼ��Ͻÿ�.
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int cup;

	printf("���� ����� �Է����ּ��� : ");
	scanf_s("%d", &cup);

	if (cup < 100)
		printf("small \n");
	else if (cup < 200)
		printf("medium \n");
	else
		printf("large \n");

	system("PAUSE");
	return 0;
}

//�� ���� ���� �߿��� ū �� ã��
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int A, B, C, M;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &A, &B, &C);

	if (A > B)
		M = A;
	else 
		M = B;

	if (M > C)
		printf("�ִ��� %d�Դϴ�. \n", M);
	else
		printf("�ִ��� %d�Դϴ�. \n", C);

	system("PAUSE");
	return 0;
}

//days_in_month.c
//���� �ϼ��� ����ϴ� ���α׷�(��������)
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int month, days, year;
	
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf_s("%d", &year);
	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			days = 29;
		else
			days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d�� %d���� �ϼ��� %d�Դϴ�. \n", year, month, days);
	system("PAUSE");
	return 0;
}

//����, ����, �� - ��ǻ�Ϳ� ����� ����ϴ� ����, ����, �� ������ �ۼ��غ���.(���� - 0, �� - 1, ���� - 2) ����ڴ� 0, 1, 2, �߿��� �ϳ��� �����Ѵ�. ��ǻ�͵� ������ �̿��Ͽ� 0, 1, 2 �߿��� �ϳ��� �����Ѵ�.
//18.10.10 ������
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int ME_RCP, COM_RCP;
	char result;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2");
	scanf_s("%d", &ME_RCP);

	COM_RCP = rand() % 3;
	printf("����� = %d \n", ME_RCP);
	printf("��ǻ�� = %d \n", COM_RCP);

	switch (ME_RCP)
	{
	case 0:
		if (COM_RCP == 0)
			printf("�����ϴ�. \n");
		else if (COM_RCP == 1)
			printf("��ǻ�� �¸� \n");
		else
			printf("����� �¸� \n");
		break;
	case 1:
		if (COM_RCP == 0)
			printf("����� �¸� \n");
		if (COM_RCP == 1)
			printf("�����ϴ�. \n");
		else
			printf("��ǻ�� �¸� \n");
		break;
	case 2:
		if (COM_RCP == 0)
			printf("��ǻ�� �¸� \n");
		else if (COM_RCP == 1)
			printf("����� �¸� \n");
		else
			printf("�����ϴ� \n");
		break;
	}

	system("PAUSE");
	return 0;
}

//Programming 1. ����ڷκ��� ������ �޾Ƽ� Ȧ������ ¦�������� ����ϴ� ���α׷��� �ۼ��϶�.
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int X;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &X);

	if (X % 2 == 0)
		printf("%d�� ¦���Դϴ�. \n", X);
	else
		printf("%d�� Ȧ���Դϴ�. \n", X);

	system("PAUSE");
	return 0;
}

//Programming 2. ����ڰ� ��ȣ���� ������ �Է��ϸ� "����", "����", "����"�� ���� ������ ����ϴ� ���α׷��� �ۼ��غ���. �� ���ڸ� �Է¹��� ���� getchar() �Լ��� ����Ѵ�.
#include <stdio.h>
int main(void) {
	char color;

	printf("��ȣ���� ���� �Է�(R, G, Y) : ");
	color = getchar();

	if (color == 'R')
		printf("����! \n");
	else if (color == 'G')
		printf("����! \n");
	else if (color == 'Y')
		printf("����! \n");

	system("PAUSE");
	return 0;
}

//Programming 3. ����ڷκ��� �Է¹��� �� ���� �հ� ���� ���Ͽ� ����غ���. �� ���� ���� ū ������ ���� ���� �� ���̴�.
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int A, B, difference;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &A);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &B);

	if (A >= B)
		difference = A - B;
	else
		difference = B - A;

	printf("���� %d�Դϴ�. \n", A + B);
	printf("���� %d�Դϴ�. \n", difference);

	system("PAUSE");
	return 0;
}

//�ﰢ���� �� ���� ���̸� �Է¹޾Ƽ� �ﰢ���� ������ �����ϴ� ���α׷��� �ۼ��϶�. ���� ���� �߿��� ���ﰢ��, �̵�ﰢ���� �����غ���.
//18.10.10 ������
#include <stdio.h>
int mian(void)
{
	int a, b, c, longest;
	printf("�ﰢ���� �� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
			longest = a;
		else
			longest = c;
	}

	else
	{
		if (b > a)
			longest = b;
		else
			longest = a;
	}

	if (a + b + c - longest > longest)
	{
		if (a == b == c)
			printf("���ﰢ�� \n");
		else if (a == b || a == c || b == c)
			printf("�̵ �ﰢ�� \n");
		else
			printf("�Ϲ� �ﰢ�� \n");
	}
	else
		printf("�ﰢ���� �ƴմϴ�. \n");

	system("PAUSE");
	return 0;
}

//Programming 5. �ٷ� �ҵ漼�� ����ϴ� ���α׷��� �ۼ��غ���. 
//18.10.10 ������
#include <stdio.h>
int main(void) {
	int income;
	double tax;

	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf_s("%d", &income);

	if (income <= 1000)
		tax = 0.08;
	else if (income <= 4000)
		tax = 0.17;
	else if (income <= 8000)
		tax = 0.26;
	else
		tax = 0.35;
	
	printf("�ҵ漼�� %f���� �Դϴ�. \n", income * tax);

	system("PAUSE");
	return 0;
}

//Programming 6. ���� �򰡷� �л����� ������ ����ϴ� ���α׷��� �ۼ��غ���.
//1. �߰����, �⸻��縦 ���ʴ�� ����ڷκ��� �д´�.
//2. �߰����� �⸻����� ��հ��� 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 60�� �̻��̸� D, 60�� �̸��̸� F �����̶�� ����ϰ� �����Ѵ�.
#include <stdio.h>
int main(void) {
	int mid, fin;
	double avg;
	char grade;

	printf("�߰� ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &mid);
	printf("�⸻ ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &fin);

	avg = (mid + fin) / 2;

	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("����� ������ %c�����Դϴ�. \n", grade);

	system("PAUSE");
	return 0;

}

//Programming 7. ���� �������� ���� ����ϴ� ���α׷��� �ۼ��غ���.
//����ڿ��� ���� �������� ��� a, b, c�� �Է��ϵ��� �Ѵ�.
//���� a�� 0�̸� ���� -c/b�̴�.
//���� �Ǻ����� �����̸� �Ǳ��� �������� �ʴ´�.
//���� ���ǿ� �ش���� ������ ������ ���� ������ �̿��Ͽ� �Ǳ��� ���Ѵ�.
#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, c;
	double x1, x2;

	printf("��� a�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf_s("%d", &c);

	if (a != 0)
	{
		if (sqrt(b * b - 4 * a * c) >= 0)
		{
			x1 = -b + sqrt(b * b - 4 * b * c) / 2 * a;
			x2 = -b - sqrt(b * b - 4 * b * c) / 2 * a;
			printf("������������ �Ǳ��� %f�� %f�Դϴ�. \n", x1, x2);
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�. \n");
	}
	else
		printf("�Ǳ��� �������� �ʽ��ϴ�. \n");

	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, c;
	double D, x, x1, x2;

	printf("��� a, b, c�� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	D = sqrt(b*b - 4.0*a*c);

	if (a == 0)
	{
		x = -c / (double)b;
		printf("���� ������������ �Ǳ��� %f�Դϴ�. \n", x);
	}
	else if (D >= 0 && a != 0) {
		x1 = (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
		x2 = (-b - sqrt(b*b - 4.0*a*c)) / (2.0*a);
		printf("���� ������������ �Ǳ��� %f�� %f�Դϴ�. \n", x1, x2);
	}
	else
		printf("�Ǳ��� �������� �ʽ��ϴ�. \n");

	system("PAUSE");
	return 0;
}
	