/*
//overflow.c
#include <stdio.h>

int main(void)
{
	short s_money = 32767;

	s_money = s_money + 1;
	printf("s_money = %d \n", s_money);

	system("PAUSE");
	return 0;
}

//int_const.c
#include <stdio.h>
 
int main(void)
{
	printf("%d %#x %#o \n", 128, 128, 128);
	
	system("PAUSE");
	return 0;
}

//����ڴ� �޴� �޷�ȭ�� ���� ���� usd�� �����Ѵ�. �޷�ȭ�� ȯ���� ���Ͽ��� ����ڰ� �Է��� �޷�ȭ�� �� ���� �ش��ϴ����� ����Ѵ�. ȯ���� 1�޷��� 1120���̶�� ��������.
#include <stdio.h>
# define EXCHANGE_RATE 1120

int main(void)
{
	int usd, krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &usd);

	krw = usd * EXCHANGE_RATE;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.", usd, krw);
	
	system("PAUSE");
	return 0;
}

//ö������ �̷��� �ڽ��� ���� ����� ����ϰ� �;� �Ѵ�. �� �޿� 500������ 30�� ���� �����ϸ� �󸶰� �ɱ�?
#include <stdio.h>
int main(void) 
{
	int Money, Property;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &Money);

	Property = Money * 30;
    printf("30�� ���� ��� = %d", Property);

	system("PAUSE");
	return 0;
}

// ���� x�� ���� y�� ���� ���� �ٲٴ� �ڵ带 �ۼ��Ͽ� ����.
#include <stdio.h>
int main(void) {
	int x = 100;
	int y = 200;
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
	
	printf(x);
	printf(y);

	system("PAUSE");
	return 0;
}

//floating.c
#include <stdio.h>

int main(void) {
	float fvalue = 1234567890.123456790123457890;
	double dvalue = 1234567890.1234567890;
	printf("float�� ���� = %30.25f\n", fvalue);
	printf("double�� ���� = %30.25lf\n", dvalue);

	system("PAUSE");
	return 0;
}

//over_under.c
#include <stdio.h>

int main(void) {
	float x = 1e39;
	float y = 1.23456e-46;

	printf("x = %e\n", x);
	printf("y = %e\n", y);

	system("PAUSE");
	return 0;
}

// �¾翡�� ���� ���� �� �� ���� ������ �����ϴ����� ��ǻ�ͷ� ����غ����� �Ѵ�. ���� �ӵ��� 1�ʿ� 30��km�� �̵��Ѵ�. �¾�� ���� ������ �Ÿ��� �� 1�� 4960��km�̴�.
#include <stdio.h>
int main(void) {
	double light_V, distance;
	double Minute;
	
	light_V = 300000;
	distance = 149600000;

	Minute = distance / light_V / 60;

	printf("���� �ð��� %lf�� \n", Minute);

	system("PAUSE");
	return 0;
}

// ����ڷκ��� ȭ���µ��� �޾Ƽ� �����µ��� �ٲٴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
int main(void) {
	double F, C;	//F = ȭ���µ�, C = �����µ�

	printf("ȭ���µ��� �Է����ּ��� : ");
	scanf_s("%lf", &F);

	C = (F - 32.0) * 5.0 / 9.0;
	printf("�����µ� = %lf \n", C);

	system("PAUSE");
	return 0;
}

//����ڷκ��� ���� �������� �޾Ƽ� ���� ������ ����ϴ� ���α׷��� �ۼ��غ���.
#include <stdio.h>
#define PI 3.14
int main(void) {
	double R, S; // R = ������, S = ����

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &R);

	S = PI * R * R;
	printf("���� ���� : %lf", S);

	system("PAUSE");
	return 0;
}

//char_var.c
#include <stdio.h>

int main(void) {
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c);

	printf("�Էµ� ���ڴ� %c�Դϴ�. \n", c);

	system("PAUSE");
	return 0;
}

//char_var1.c
#include <stdio.h>
int main(void) {
	char ch = 'A';
	printf("%c�� �ƽ�Ű �ڵ� = %d\n", ch, ch);

	ch = 'B';
	printf("%c�� �ƽ�Ű �ڵ� = %d\n", ch, ch);

	system("PAUSE");
	return 0;
}

//cscape.c
#include <stdio.h>
int main(void) {
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ��� : \n");
	printf("id : ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass : ____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);

	system("PAUSE");
	return 0;
}

//����ڷκ��� �Ҽ��� ǥ�� �������� �Ǽ��� �о ���� �������� ����ϴ� ���α׷��� �ۼ��Ͽ���.
#include <stdio.h>
int main(void) {
	float X;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &X);
	printf("���� �������δ� %e�Դϴ�.\n", X);
	
	system("PAUSE");
	return 0;
}

//����ڿ��� ���� ������ �ƽ�Ű �ڵ带 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void) {
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c);
	printf("�ƽ�Ű �ڵ� : %d\n", c);

	system("PAUSE");
	return 0;
}

//����ڷκ��� x�� ���� �Ǽ��� �Է¹޾Ƽ� ������ ���� ���׽��� ���� ����ϴ� ���α׷��� �ۼ��Ͽ���.
//������ ������ �������͸� ������ ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ȣ ����� �̿��Ͽ� 1 �������� �� ���� ��Ÿ�����.
#include <stdio.h>
# define Space 0.3
int main(void) {
	double area, pyeong;
	printf("������ �������� ������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &area);

	pyeong = area * Space;
	printf("%lf�������ʹ� %lf���Դϴ�.\n", area, pyeong);
	
	system("PAUSE");
	return 0;
}

//��� �ڷ����� ũ�⸦ sizeof �����ڸ� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
#include <stdio.h>
int main(void) {
	printf("char���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(char));
	printf("short���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(short));
	printf("int���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(int));
	printf("long���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(long));
	printf("long long���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(long long));
	printf("float���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(float));
	printf("double���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(double));
	printf("long double���� ũ��� %d ����Ʈ �Դϴ�.\n", sizeof(long double));

	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	double num;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);
	printf("���� �������δ� %e�Դϴ�. \n", num);

	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
int main(void) {
	float q, result;
	printf("������ �������� ������ �Է��Ͻÿ� : ");
	scanf_s("%f", &q);
	result = q * q * 3.14;
	printf("%f�������ʹ� %f���Դϴ�. \n");

	system("PAUSE");
	return 0;
}