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

//사용자는 받는 달러화는 정수 변수 usd에 저장한다. 달러화에 환율을 곱하여서 사용자가 입력한 달러화가 몇 원에 해당하는지를 계산한다. 환율은 1달러당 1120원이라고 가정하자.
#include <stdio.h>
# define EXCHANGE_RATE 1120

int main(void)
{
	int usd, krw;

	printf("달러화 금액을 입력하시오 : ");
	scanf_s("%d", &usd);

	krw = usd * EXCHANGE_RATE;
	printf("달러화 %d달러는 %d원입니다.", usd, krw);
	
	system("PAUSE");
	return 0;
}

//철수군은 미래에 자신이 모을 재산을 계싼하고 싶어 한다. 한 달에 500만원씩 30년 동안 저금하면 얼마가 될까?
#include <stdio.h>
int main(void) 
{
	int Money, Property;

	printf("매달 저축 금액을 입력하시오 : ");
	scanf_s("%d", &Money);

	Property = Money * 30;
    printf("30년 후의 재산 = %d", Property);

	system("PAUSE");
	return 0;
}

// 변수 x와 변수 y의 값을 서로 바꾸는 코드를 작성하여 보자.
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
	printf("float형 변수 = %30.25f\n", fvalue);
	printf("double형 변수 = %30.25lf\n", dvalue);

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

// 태양에서 오는 빛이 몇 분 만에 지구에 도착하는지를 컴퓨터로 계산해보고자 한다. 빛의 속도는 1초에 30만km를 이동한다. 태양과 지구 사이의 거리는 약 1억 4960만km이다.
#include <stdio.h>
int main(void) {
	double light_V, distance;
	double Minute;
	
	light_V = 300000;
	distance = 149600000;

	Minute = distance / light_V / 60;

	printf("도달 시간은 %lf분 \n", Minute);

	system("PAUSE");
	return 0;
}

// 사용자로부터 화씨온도를 받아서 섭씨온도로 바꾸는 프로그램을 작성해보자.
#include <stdio.h>
int main(void) {
	double F, C;	//F = 화씨온도, C = 섭씨온도

	printf("화씨온도를 입력해주세요 : ");
	scanf_s("%lf", &F);

	C = (F - 32.0) * 5.0 / 9.0;
	printf("섭씨온도 = %lf \n", C);

	system("PAUSE");
	return 0;
}

//사용자로부터 원의 반지름을 받아서 원의 면적을 계산하는 프로그램을 작성해보자.
#include <stdio.h>
#define PI 3.14
int main(void) {
	double R, S; // R = 반지름, S = 면적

	printf("원의 반지름을 입력하시오 : ");
	scanf_s("%lf", &R);

	S = PI * R * R;
	printf("원의 면적 : %lf", S);

	system("PAUSE");
	return 0;
}

//char_var.c
#include <stdio.h>

int main(void) {
	char c;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c);

	printf("입력된 문자는 %c입니다. \n", c);

	system("PAUSE");
	return 0;
}

//char_var1.c
#include <stdio.h>
int main(void) {
	char ch = 'A';
	printf("%c의 아스키 코드 = %d\n", ch, ch);

	ch = 'B';
	printf("%c의 아스키 코드 = %d\n", ch, ch);

	system("PAUSE");
	return 0;
}

//cscape.c
#include <stdio.h>
int main(void) {
	int id, pass;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요 : \n");
	printf("id : ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass : ____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);

	system("PAUSE");
	return 0;
}

//사용자로부터 소수점 표기 형식으로 실수를 읽어서 지수 형식으로 출력하는 프로그램을 작성하여라.
#include <stdio.h>
int main(void) {
	float X;
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &X);
	printf("지수 형식으로는 %e입니다.\n", X);
	
	system("PAUSE");
	return 0;
}

//사용자에게 받은 문자의 아스키 코드를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void) {
	char c;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c);
	printf("아스키 코드 : %d\n", c);

	system("PAUSE");
	return 0;
}

//사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하여라.
//면적의 단위인 제곱미터를 평으로 환산하는 프로그램을 작성하시오. 기호 상수를 이용하여 1 제곱미터 당 평을 나타내어라.
#include <stdio.h>
# define Space 0.3
int main(void) {
	double area, pyeong;
	printf("면적을 제곱미터 단위로 입력하시오 : ");
	scanf_s("%lf", &area);

	pyeong = area * Space;
	printf("%lf제곱미터는 %lf평입니다.\n", area, pyeong);
	
	system("PAUSE");
	return 0;
}

//모든 자료형의 크기를 sizeof 연산자를 사용하여 출력하는 프로그램을 작성하여 보라.
#include <stdio.h>
int main(void) {
	printf("char형의 크기는 %d 바이트 입니다.\n", sizeof(char));
	printf("short형의 크기는 %d 바이트 입니다.\n", sizeof(short));
	printf("int형의 크기는 %d 바이트 입니다.\n", sizeof(int));
	printf("long형의 크기는 %d 바이트 입니다.\n", sizeof(long));
	printf("long long형의 크기는 %d 바이트 입니다.\n", sizeof(long long));
	printf("float형의 크기는 %d 바이트 입니다.\n", sizeof(float));
	printf("double형의 크기는 %d 바이트 입니다.\n", sizeof(double));
	printf("long double형의 크기는 %d 바이트 입니다.\n", sizeof(long double));

	system("PAUSE");
	return 0;
}

#include <stdio.h>
int main(void) {
	double num;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num);
	printf("지수 형식으로는 %e입니다. \n", num);

	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
int main(void) {
	float q, result;
	printf("면접을 제곱미터 단위를 입력하시오 : ");
	scanf_s("%f", &q);
	result = q * q * 3.14;
	printf("%f제곱미터는 %f평입니다. \n");

	system("PAUSE");
	return 0;
}