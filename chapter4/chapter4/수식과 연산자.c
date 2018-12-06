/*
//arithmetic1.c
#include <stdio.h>
int main(void) {
	int x, y, result;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d \n", x, y, result);

	result = x - y;
	printf("%d - %d = %d \n", x, y, result);

	result = x * y;
	printf("%d * %d = %d \n", x, y, result);
	
	result = x / y;
	printf("%d / %d = %d \n", x, y, result);
	result = x % y;
	printf("%d % %d = %d \n", x, y, result);

	system("PAUSE");
	return 0;
}

//arithmetic2.c
#include <stdio.h>

int main(void) {
	double x, y, result;

	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("%f + %f = %f \n", x, y, result);

	result = x - y;
	printf("%f - %f = %f \n", x, y, result);

	result = x * y;
	printf("%f * %f = %f \n", x, y, result);

	result = x / y;
	printf("%f / %f = %f \n", x, y, result);

	system("PAUSE");
	return 0;
}

//modulo.c
// ������ ������ ���α׷�
#include <stdio.h>
#define SEC_PER_MINUTE 60 //1���� 60��

int main(void) {
	int input, minute, second;

	printf("�� ������ �ð��� �Է��Ͻÿ� : (32��������) ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, minute, second);

	system("PAUSE");
	return 0;
}

//indec.c
#include <stdio.h>

int main(void) {
	int x, y;

	x = 1;
	y = ++x;
	printf("x = %d y = %d \n", x, y);

	y = x++;
	printf("x = %d y = %d \n", x, y);
	
	system("PAUSE");
	return 0;
}

// ���� 1000���� �ְ� ������ ������ 300���̶�� ����. �ִ��� �� �� �ִ� ������ ������ ���� ���� ���ΰ�?
#include <stdio.h>
int main(void) {
	int money = 1000, candy = 300; //candy = ���� ����
	int number, Money; // number = ������ ����, Money = ���� ��

	number = 1000 / 300;
	Money = 1000 % 300;

	printf("���� ������ �ִ� �� : %d\n", money);
	printf("ĵ���� ���� : %d\n", candy);
	printf("�ִ�� �� �� �ִ� ĵ���� ���� = %d \n", number);
	printf("ĵ�� ���� �� ���� �� : %d \n", Money);

	system("PAUSE");
	return 0;
}

// �ڵ��Ǹű⸦ �ùķ��̼��ϴ� ���α׷��� �ۼ��غ���. �ڵ��Ǹű�� ����ڷκ��� ������ ���� ���� ���� �Է¹޴´�. 
// ���� ���� 10�� ������� �����Ѵ�. ���α׷��� �ܵ��� ����Ͽ� ����Ѵ�. ���Ǳ�� ���� 100��, 10��¥���� ������ �ִٰ� ��������.

#include <stdio.h>
int main(void) {
	int money, price, change, change_100, change_10;
	printf("������ �� : ");
	scanf_s("%d", &money);
	printf("���ǰ� : ");
	scanf_s("%d", &price);
	change = money - price;
	printf("�Ž����� : %d \n", change);

	change_100 = change / 100;
	change_10 = (change - change_100 * 100) / 10;

	printf("100�� ������ ���� : %d \n", change_100);
	printf("10�� ������ ���� : %d \n", change_10);

	system("PAUSE");
	return 0;
}

//comp_op.c
#include <stdio.h>

int main(void) {
	int x = 10, y = 10;
	printf("x = %d y = %d \n", x, y);

	x += 1;
	printf("(x += 1)���� x = %d \n", x);
	y *= 2;
	printf("(y *= 2)���� y = %d \n", y);

	system("PAUSE");
	return 0;
}

// relational.cpp
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &y);

	printf("%d == %d�� �ᱣ�� : %d \n", x, y, x == y);
	printf("%d != %d�� �ᱣ�� : %d \n", x, y, x != y);
	printf("%d > %d�� �ᱣ�� : %d \n", x, y, x > y);
	printf("%d < %d�� �ᱣ�� : %d \n", x, y, x < y);
	printf("%d >= %d�� �ᱣ�� : %d \n", x, y, x >= y);
	printf("%d <= %d�� �ᱣ�� : %d \n", x, y, x <= y);

	system("PAUSE");
	return 0;
}

//bit_op.c
#include <stdio.h>

int main(void)
{
	int x = 9;
	int y = 10;

	printf("%08X & %08X = %08X\n", x, y, x & y);
	printf("%08X | %08X = %08X\n", x, y, x | y);
	printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
	printf("~08X = %08X\n", x, ~x);

	system("PAUSE");
	return 0;
}
//bit_shift.c
#include <stdio.h>

int main(void)
{
	int x = 9;

	printf("%d << 1 = %d \n", x, x << 1);
	printf("%d >> 1 = %d \n", x, x >> 1);

	system("PAUSE");
	return 0;	
}

//prec.cpp
#include <stdio.h>
int main(void) {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("���갪 : %d \n", result);

	result = (a + b) * c / d;
	printf("���갪 : %d \n", result);

	result = a = b = 1;
	printf("���갪 : %d \n", result);

	system("PAUSE");
	return 0;
}

//typecast.c
#include <stdio.h>
int main(void)
{
	int i;
	double f;

	f = 5 / 4;
	printf("(5 / 4) = %f \n", f);

	f = (double)5 / 4;

	printf("(double)5 / 4 = %f\n", f);

	i = 1.3 + 1.8;
	printf("1.3 + 1.8 = %d \n", i);

	i = (int)1.3 + (int)1.8;
	printf("(int)1.3 + (int)1.8 = %d\n", i);

	system("PAUSE");
	return 0;
}

//y = 3.0 * x * x + 7.0 * x + 9.0�� x = 2�� �� �Ի��Ͽ� ����.
#include <stdio.h>
int main(void) {
	int x = 2;
	double y;

	y = 3.0 * x * x + 7.0 * x + 9.0;
	printf("x = 2�̰�, y�� �Ҽ������� ǥ���� �� : %f \n", y);

	system("PAUSE");
	return 0;

}

//cal_quad_ep.c
#include <stdio.h>
int main(void)
{
	double x = 2.0;
	double y;

	y = 3.0 * x * x + 7.0 * x + 9.0;
	printf("y = 3.0 * x * x + 7.0 * x + 9.0 = %f \n", y);

	printf("x�� �Ǽ����� %d�̴�.", sizeof(x));

	system("PAUSE");
	return 0;
}

//1626�⿡ �Ƹ޸�ī �ε����� ������ ����ư ���� �ܵ� 60����� Ž�谡 ���͹̳���Ʈ���� �ȾҴٰ� �Ѵ�. 382�� ���� ����� ���� ����ư �� ���� �� 600�� �޷���� �Ѵ�.
//�ε����� ū ���ظ� ���Ҵٰ� �� �� �ִ�. ������ ���� �ε���� 24�޷��� ������ ���⿹�ݿ� �Ա��صξ��ٸ� ��� �Ǿ�����? ���� �ݸ��� ������ 6%��� ��������.
//�׸��� 382���� ���� �Ŀ��� �������� ����Ͽ� ����.
#include <stdio.h>
#include <math.h>

int main(void)
{
	double principal_and_interest, compound_interest;	//principal_and_interest : ������, compound_interest : ����
	int money, year;	//money : ���ڿ���, year : ���ڱⰣ

	money = 24;
	compound_interest = 0.06;
	year = 382;

	principal_and_interest = money * pow(1.0 + compound_interest, year);

	printf("������ : %f", principal_and_interest);

	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void)
{
	double result;
	result = 7 / 9 * 9;

	printf("%f", result);
	
	system("PAUSE");
	return 0;
}

//�������� 5
#include <stdio.h>
int main(void)
{
	int x = 2 * 9 / 3 + 9;
	printf("%d \n", x);
	
	system("PAUSE");
	return 0;
}

//�������� 4
#include <stdio.h>
int main(void)
{
	int i = 5;
	i = i / 3;
	printf("%d \n", i);
	
	system("PAUSE");
	return 0;
}

//�������� 6
#include <stdio.h>
int main(void)
{
	int x = 5 % 2 * 3 / 2;
	printf("%d \n", x);

	system("PAUSE");
	return 0;
}

//�������� 7
#include <stdio.h>
int main(void)
{
	int x = 10;
	int y = 20;
	
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n", x = y);
	printf("%d \n", x != y);
	printf("%d \n", x++);

	system("PAUSE");
	return 0;
}

//�������� 8;
#include <stdio.h>
int main(void)
{
	const integer MAX = 1000;
	integer i = 10;
	unsigned double d = .2;

	return 0;
}
//������ ���� �� �𸣰���.

//�������� 9
#include <stdio.h>
int main(void)
{
	int x = 100;
	int y;

	y = (double)1 / 2 * x;
	printf("%d \n", y);

	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void)
{
	float y;
	y = 1 / (float)2;
	printf("%f", y);

	system("PAUSE");
	return 0;
}

//Programming 1. ����ڷκ��� 2���� ������ �޾Ƽ� ù ��° ������ �� ��° ������ �������� ���� ���� �������� ����ϴ� ���α׷��� �ۼ��϶�.
#include <stdio.h>
int main(void) {
	int A, B, share, rest;	//share : ��, rest : ������
	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &A);
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &B);

	share = A / B;
	rest = A % B;

	printf("���� %d�̰� �������� %d�Դϴ�. \n", share, rest);

	system("PAUSE");
	return 0;
}

//Programming 2. ����ڷκ��� �ϳ��� ������ �޾Ƽ� ������ ���������� ����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
#include <stdio.h>
int main(void)
{
	int A, result;
	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &A);

	result = A * A * A;

	printf("���������� %d * %d * %d = %d�Դϴ�. \n", A, A, A, result);

	system("PAUSE");
	return 0;
}

//Programming 3. ����ڷκ��� 3���� ������ �޾Ƽ� ���� x, y, z�� �����ϰ� ������ ���� ������ ����� ����ϴ� ���α׷��� �ۼ��϶�.
#include <stdio.h>
int main(void) {
	int x, y, z, result;
	printf("������ �� �� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &x, &y, &z);

	result = x * y - z;
	printf("%d * %d - %d = %d", x, y, z, result);

	system("PAUSE");
	return 0;
}

//Programming 4.�� �ڸ��� �̷���� ���ڸ� �Է¹��� �Ŀ� ������ �ڸ����� �и��ϰ� �� �ڸ����� ����ϴ� ���α׷��� �ۼ��϶�.
#include <stdio.h>
int main(void) {
	int A, H, T, O;	//A : �� �ڸ� ����, H : ���� �ڸ���, T : ���� �ڸ���, O : ���� �ڸ���
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &A);

	H = A / 100;
	T = (A - H * 100) / 10;
	O = A - H * 100 - T * 10;

	printf("���� �ڸ��� : %d \n", H);
	printf("���� �ڸ��� : %d \n", T);
	printf("���� �ڸ��� : %d \n", O);

	system("PAUSE");
	return 0;
}

//Programming 5. ���� ������ ���� ����Ͽ��� ȭ�鿡 ����϶�. x�� ���� ����ڷκ��� �Է¹޴´�.
//f(x) = x * x * x - 20 / x - 7
#include <stdio.h>
int main(void) {
	double x, f;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);

	f = (x * x* x - 20) / (x - 7);

	printf("������ ���� %f�Դϴ�. \n", f);

	system("PAUSE");
	return 0;
}
/ Programming 6. ����ڿ��� 2���� �Ǽ��� �޾Ƽ� �����θ� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void) {
	int sum;
	double A, B;

	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &A, &B);

	sum = A + B;

	printf("���� ������ = %d \n", sum);

	system("PAUSE");
	return 0;
}

// Programming 7. 2���� �������� �� �� ������ �Ÿ��� ����ϴ� ���α׷��� �ۼ��Ѵ�. �� ���� ����ڷκ��� ������ �޴´�. �������� ����� <math.h>�� ���ǵ� sqrt(double x) �ռ��� ����Ѵ�.
#include <stdio.h>
#include <math.h>
int main(void) {
	int x1, x2, y1, y2;
	double Distance;
	printf("ù��° �� (x1, y1) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("�ι�° �� (x2, y2) : ");
	scanf_s("%d %d)", &x2, &y2);

	Distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("Distance = %f \n", Distance);

	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
int main(void) {
	int sum;
	double A, B;

	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &A, &B);

	sum = (int)A + (int)B;

	printf("���� ������ = %d \n", sum);

	system("PAUSE");
	return 0;
}