/*
//arithmetic1.c
#include <stdio.h>
int main(void) {
	int x, y, result;

	printf("두 개의 정수를 입력하시오 : ");
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

	printf("두 개의 실수를 입력하시오 : ");
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
// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60 //1분은 60초

int main(void) {
	int input, minute, second;

	printf("초 단위의 시간을 입력하시오 : (32억초이하) ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다. \n", input, minute, second);

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

// 현재 1000원이 있고 사탕의 가격이 300원이라고 하자. 최대한 살 수 있는 사탕의 개수와 남는 돈은 얼마인가?
#include <stdio.h>
int main(void) {
	int money = 1000, candy = 300; //candy = 사탕 가격
	int number, Money; // number = 사탕의 개수, Money = 남는 돈

	number = 1000 / 300;
	Money = 1000 % 300;

	printf("현재 가지고 있는 돈 : %d\n", money);
	printf("캔디의 가격 : %d\n", candy);
	printf("최대로 살 수 있는 캔디의 개수 = %d \n", number);
	printf("캔디 구입 후 남은 돈 : %d \n", Money);

	system("PAUSE");
	return 0;
}

// 자동판매기를 시뮬레이션하는 프로그램을 작성해보자. 자동판매기는 사용자로부터 투입한 돈과 물건 값을 입력받는다. 
// 물건 값은 10원 단위라고 가정한다. 프로그램은 잔돈을 계산하여 출력한다. 자판기는 동전 100원, 10원짜리만 가지고 있다고 가정하자.

#include <stdio.h>
int main(void) {
	int money, price, change, change_100, change_10;
	printf("투입한 돈 : ");
	scanf_s("%d", &money);
	printf("물건값 : ");
	scanf_s("%d", &price);
	change = money - price;
	printf("거스름돈 : %d \n", change);

	change_100 = change / 100;
	change_10 = (change - change_100 * 100) / 10;

	printf("100원 동전의 개수 : %d \n", change_100);
	printf("10원 동전의 개수 : %d \n", change_10);

	system("PAUSE");
	return 0;
}

//comp_op.c
#include <stdio.h>

int main(void) {
	int x = 10, y = 10;
	printf("x = %d y = %d \n", x, y);

	x += 1;
	printf("(x += 1)이후 x = %d \n", x);
	y *= 2;
	printf("(y *= 2)이후 y = %d \n", y);

	system("PAUSE");
	return 0;
}

// relational.cpp
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d%d", &x, &y);

	printf("%d == %d의 결괏값 : %d \n", x, y, x == y);
	printf("%d != %d의 결괏값 : %d \n", x, y, x != y);
	printf("%d > %d의 결괏값 : %d \n", x, y, x > y);
	printf("%d < %d의 결괏값 : %d \n", x, y, x < y);
	printf("%d >= %d의 결괏값 : %d \n", x, y, x >= y);
	printf("%d <= %d의 결괏값 : %d \n", x, y, x <= y);

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
	printf("연산값 : %d \n", result);

	result = (a + b) * c / d;
	printf("연산값 : %d \n", result);

	result = a = b = 1;
	printf("연산값 : %d \n", result);

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

//y = 3.0 * x * x + 7.0 * x + 9.0을 x = 2일 때 게산하여 보자.
#include <stdio.h>
int main(void) {
	int x = 2;
	double y;

	y = 3.0 * x * x + 7.0 * x + 9.0;
	printf("x = 2이고, y는 소수형으로 표현될 때 : %f \n", y);

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

	printf("x의 실수형은 %d이다.", sizeof(x));

	system("PAUSE");
	return 0;
}

//1626년에 아메리카 인디언들이 뉴욕의 맨해튼 섬을 단돈 60길더에 탐험가 페터미노이트에게 팔았다고 한다. 382년 정도 경과한 현재 맨해튼 땅 값은 약 600억 달러라고 한다.
//인디언들은 큰 손해를 보았다고 할 수 있다. 하지만 만약 인디언이 24달러를 은행의 정기예금에 입금해두었다면 어떻게 되었을까? 예금 금리는 복리로 6%라고 가정하자.
//그리고 382년이 지난 후에는 원리금을 계산하여 보자.
#include <stdio.h>
#include <math.h>

int main(void)
{
	double principal_and_interest, compound_interest;	//principal_and_interest : 원리금, compound_interest : 복리
	int money, year;	//money : 투자원금, year : 투자기간

	money = 24;
	compound_interest = 0.06;
	year = 382;

	principal_and_interest = money * pow(1.0 + compound_interest, year);

	printf("원리금 : %f", principal_and_interest);

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

//연습문제 5
#include <stdio.h>
int main(void)
{
	int x = 2 * 9 / 3 + 9;
	printf("%d \n", x);
	
	system("PAUSE");
	return 0;
}

//연습문제 4
#include <stdio.h>
int main(void)
{
	int i = 5;
	i = i / 3;
	printf("%d \n", i);
	
	system("PAUSE");
	return 0;
}

//연습문제 6
#include <stdio.h>
int main(void)
{
	int x = 5 % 2 * 3 / 2;
	printf("%d \n", x);

	system("PAUSE");
	return 0;
}

//연습문제 7
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

//연습문제 8;
#include <stdio.h>
int main(void)
{
	const integer MAX = 1000;
	integer i = 10;
	unsigned double d = .2;

	return 0;
}
//위에건 아직 잘 모르겠음.

//연습문제 9
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

//Programming 1. 사용자로부터 2개의 정수를 받아서 첫 번째 정수를 두 번째 정수로 나누었을 때의 볷과 나머지를 계산하는 프로그램을 작성하라.
#include <stdio.h>
int main(void) {
	int A, B, share, rest;	//share : 몫, rest : 나머지
	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &A);
	printf("두 번재 정수를 입력하시오 : ");
	scanf_s("%d", &B);

	share = A / B;
	rest = A % B;

	printf("몫은 %d이고 나머지는 %d입니다. \n", share, rest);

	system("PAUSE");
	return 0;
}

//Programming 2. 사용자로부터 하나의 정수를 받아서 정수의 세제곱값을 계산하여 출력하는 프로그램을 작성하라.
#include <stdio.h>
int main(void)
{
	int A, result;
	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &A);

	result = A * A * A;

	printf("세제곱값은 %d * %d * %d = %d입니다. \n", A, A, A, result);

	system("PAUSE");
	return 0;
}

//Programming 3. 사용자로부터 3개의 정수를 받아서 변수 x, y, z에 저장하고 다음과 같은 수식의 결과를 출력하는 프로그램을 작성하라.
#include <stdio.h>
int main(void) {
	int x, y, z, result;
	printf("정수를 세 개 입력하시오 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	result = x * y - z;
	printf("%d * %d - %d = %d", x, y, z, result);

	system("PAUSE");
	return 0;
}

//Programming 4.세 자리로 이루어진 숫자를 입력받은 후에 각각의 자리수를 분리하고 이 자리수를 출력하는 프로그램을 작성하라.
#include <stdio.h>
int main(void) {
	int A, H, T, O;	//A : 세 자리 숫자, H : 백의 자리수, T : 십의 자리수, O : 일의 자리수
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &A);

	H = A / 100;
	T = (A - H * 100) / 10;
	O = A - H * 100 - T * 10;

	printf("백의 자리수 : %d \n", H);
	printf("십의 자리수 : %d \n", T);
	printf("일의 자리수 : %d \n", O);

	system("PAUSE");
	return 0;
}

//Programming 5. 다음 수식의 값을 계산하여서 화면에 출력하라. x의 값은 사용자로부터 입력받는다.
//f(x) = x * x * x - 20 / x - 7
#include <stdio.h>
int main(void) {
	double x, f;

	printf("정수를 입력하시오 : ");
	scanf_s("%lf", &x);

	f = (x * x* x - 20) / (x - 7);

	printf("수식의 값은 %f입니다. \n", f);

	system("PAUSE");
	return 0;
}
/ Programming 6. 사용자에게 2개의 실수를 받아서 정수부를 더한 값을 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void) {
	int sum;
	double A, B;

	printf("두 개의 실수를 입력하시오 : ");
	scanf_s("%lf %lf", &A, &B);

	sum = A + B;

	printf("합의 정수부 = %d \n", sum);

	system("PAUSE");
	return 0;
}

// Programming 7. 2차원 공간에서 두 점 사이의 거리를 계산하는 프로그램을 작성한다. 두 점은 사용자로부터 정수로 받는다. 제곱근의 계산은 <math.h>에 정의된 sqrt(double x) 합수를 사용한다.
#include <stdio.h>
#include <math.h>
int main(void) {
	int x1, x2, y1, y2;
	double Distance;
	printf("첫번째 점 (x1, y1) : ");
	scanf_s("%d %d", &x1, &y1);
	printf("두번째 점 (x2, y2) : ");
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

	printf("두 개의 실수를 입력하시오 : ");
	scanf_s("%lf %lf", &A, &B);

	sum = (int)A + (int)B;

	printf("합의 정수부 = %d \n", sum);

	system("PAUSE");
	return 0;
}