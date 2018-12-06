/*
//if_else1.c
#include <stdio.h>
int main(void) {
	int temperature;

	printf("온도를 입력하시오 : ");
	scanf_s("%d", &temperature);

	if(temperature > 0) {
		printf("영상의 날씨입니다. \n");
	}
	else
	{
	printf("영하의 날씨입니다. \n");
	}
	printf("현재 온도는 %d 입니다. \n", temperature);

	system("PAUSE");
	return 0;
}

//if_else2.c
#include <stdio.h>

int main(void) {
	int number;

	printf("정수를 입력하시오 :");
	scanf_s("%d", &number);

	if (number & 2 == 0)
		printf("입력된 정수는 짝수입니다. \n");
	else
		printf("입력된 정수는 홀수입니다. \n");

	system("PAUSE");
	return 0;
}

//if_else3.c
#include <stdio.h>
int main(void) {
	int score;

	printf("성적을 입력하시오 : ");
	scanf_s("%d", &score);
	if (score >= 60)
	{
		printf("합격입니다. \n");
		printf("장학금도 받을 수 있습니다. \n");
	}
	else
	{
		printf("불합격입니다. \n");
		printf("다시 도전하세요 \n");
	}
	system("PAUSE");
	return 0;
}

//condition.c
#include <stdio.h>
int main(void) {
	int x, y;

	printf("첫번째 수 = ");
	scanf_s("%d", &x);
	printf("두번째 수 = ");
	scanf_s("%d", &y);

	printf("큰수 = %d \n", (x > y) ? x : y);
	printf("작은수 = %d \n", (x < y) ? x : y);

	system("PAUSE");
	return 0;
}

//중간점검. 변수 n의 값이 100보다 크거나 같으면 "large", 100보다 작으면 "small"을 출력하는 if-else문을 작성하라.
//1번째 방법 18.10.10 경은하
#include <stdio.h>
int main(void) {
	int x;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &x);

	if (x >= 100)
		printf("large \n");
	else
		printf("small \n");

	system("PAUSE");
	return 0;
}

//2번째 방법 18.10.10. 경은하
#include <stdio.h>
int main(void) {
	int x;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &x);

	printf("%s \n", (x >= 100) ? "large" : "small");

	system("PAUSE");
	return 0;
}
//check_number.c
#include <stdio.h>
int main(void) {
	int number;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &number);

	if (number >= 0 && number <= 100)
		printf("입력한 정수가 0에서 100 사이에 있습니다. \n");
	else
		printf("입력한 정수가 0에서 100 사이가 아닙니다. \n");

	system("PAUSE");
	return 0;
}

//중간점검1. 2개의 정수를 입력받아서 큰 수에서 작은 수를 뺀 결과를 출력하는 프로그램을 작성해보자. 예를 들어서 2와 10을 입력하면 8을 출력하면 된다.
//18.10.10. 경은하
#include <stdio.h>
int main(void) {
	int A, B, result;
	
	printf("2개의 정수를 입력해주세요 ; ");
	scanf_s("%d %d", &A, &B);

	if (A >= B)
	{
		result = A - B;
		printf("두 수의 차는 %d입니다. \n", result);
	}
	else
	{
		result = B - A;
		printf("두 수의 차는 %d입니다. \n", result);
	}
	system("PAUSE");
	return 0;
}

//중간점검 2. 정수를 입력받아서 2의 배수인 동시에 3의 배수인지를 검사하는 프로그램을 작성해보자.
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int X;
	printf("정수를 입력하여 주세요 : ");
	scanf_s("%d", &X);

	if (X % 2 == 0 && X % 3 == 0)
		printf("%d는 2의 배수임과 동시에 3의 배수입니다. \n", X);
	else
		printf("%d는 2의 배수임과 동시에 3의 배수가 아닙니다. \n", X);
		
	system("PAUSE");
	return 0;
}
*/
/*
윤년판단 프로그램 작성
윤년인지 아닌ㄴ지를 판단하는 프로그램을 if문을 사용하여 작성해보자.
윤년은 다음 조건을 만족해야 한다.
1. 연도가 4로 나누어 떨어진다.
2. 100으로 나누어 떨어지는 연도는 제외한다.
3. 400으로 나누어 떨어지는 연도는 윤년이다.

//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int year;
	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d년은 윤년입니다. \n", year);
	else
		printf("%d년은 윤년이 아닙니다. \n", year);

	system("PAUSE");
	return 0;
}

//동전 던지기 게임 - 프로그램을 실행할 때마다 실제 동전을 던지는 것처럼 앞면과 뒷면이 랜덤하게 나와야 한다.
//18.10.10. 경은하
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int random;
	random = rand() % 2;
	if (random == 0)
		printf("앞면 \n");
	else
		printf("뒷면 \n");

	system("PAUSE");
	return 0;
}

//grade.c
//성적을 받아서 학점을 결정하는 프로그램
#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("성적을 입력하시오 : ");
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

	printf("학점 %c \n", grade);
	
	system("PAUSE");
	return 0;
}

//calc1.c
//간단한 산술 계산기 프로그램
#include <stdio.h>
int main(void) {
	char op;
	int x, y;

	printf("수식을 입력하시오 : ");
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
		printf("지원되지 않는 연산자입니다. \n");

	system("PAUSE");
	return 0;
}

//중간점검. 컵의 사이즈를 받아서 100ml 미만은 small, 100ml 이상 200ml 미만은 medium, 200ml 이상은 large라고 출력하는 연속적인 if-else문을 작성하시오.
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int cup;

	printf("컵의 사이즈를 입력해주세요 : ");
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

//세 개의 정수 중에서 큰 수 찾기
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int A, B, C, M;
	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &A, &B, &C);

	if (A > B)
		M = A;
	else 
		M = B;

	if (M > C)
		printf("최댓값은 %d입니다. \n", M);
	else
		printf("최댓값은 %d입니다. \n", C);

	system("PAUSE");
	return 0;
}

//days_in_month.c
//달의 일수를 계산하는 프로그램(윤달포함)
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int month, days, year;
	
	printf("년도를 입력하시오 : ");
	scanf_s("%d", &year);
	printf("일수를 알고 싶은 달을 입력하시오 : ");
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
	printf("%d년 %d월의 일수는 %d입니다. \n", year, month, days);
	system("PAUSE");
	return 0;
}

//가위, 바위, 보 - 컴퓨터와 사람이 대결하는 가위, 바위, 보 게임을 작성해보자.(바위 - 0, 보 - 1, 가위 - 2) 사용자는 0, 1, 2, 중에서 하나를 선택한다. 컴퓨터도 난수를 이용하여 0, 1, 2 중에서 하나를 선택한다.
//18.10.10 경은하
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int ME_RCP, COM_RCP;
	char result;

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2");
	scanf_s("%d", &ME_RCP);

	COM_RCP = rand() % 3;
	printf("사용자 = %d \n", ME_RCP);
	printf("컴퓨터 = %d \n", COM_RCP);

	switch (ME_RCP)
	{
	case 0:
		if (COM_RCP == 0)
			printf("비겼습니다. \n");
		else if (COM_RCP == 1)
			printf("컴퓨터 승리 \n");
		else
			printf("사용자 승리 \n");
		break;
	case 1:
		if (COM_RCP == 0)
			printf("사용자 승리 \n");
		if (COM_RCP == 1)
			printf("비겼습니다. \n");
		else
			printf("컴퓨터 승리 \n");
		break;
	case 2:
		if (COM_RCP == 0)
			printf("컴퓨터 승리 \n");
		else if (COM_RCP == 1)
			printf("사용자 승리 \n");
		else
			printf("비겼습니다 \n");
		break;
	}

	system("PAUSE");
	return 0;
}

//Programming 1. 사용자로부터 정수를 받아서 홀수이지 짝수인지를 출력하는 프로그램을 작성하라.
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int X;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &X);

	if (X % 2 == 0)
		printf("%d는 짝수입니다. \n", X);
	else
		printf("%d는 홀수입니다. \n", X);

	system("PAUSE");
	return 0;
}

//Programming 2. 사용자가 신호등의 색깔을 입력하면 "정지", "주의", "진행"와 같은 문장을 출력하는 프로그램을 작성해보자. 한 문자를 입력받을 때는 getchar() 함수를 사용한다.
#include <stdio.h>
int main(void) {
	char color;

	printf("신호등의 색깔 입력(R, G, Y) : ");
	color = getchar();

	if (color == 'R')
		printf("정지! \n");
	else if (color == 'G')
		printf("진행! \n");
	else if (color == 'Y')
		printf("주의! \n");

	system("PAUSE");
	return 0;
}

//Programming 3. 사용자로부터 입력받은 두 수의 합과 차를 구하여 출력해보자. 두 수의 차는 큰 수에서 작은 수를 뺀 것이다.
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int A, B, difference;
	
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &A);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &B);

	if (A >= B)
		difference = A - B;
	else
		difference = B - A;

	printf("합은 %d입니다. \n", A + B);
	printf("차는 %d입니다. \n", difference);

	system("PAUSE");
	return 0;
}

//삼각형의 세 변의 길이를 입력받아서 삼각형의 종류를 결정하는 프로그램을 작성하라. 많은 종류 중에서 정삼각형, 이등변삼각형만 구별해보자.
//18.10.10 경은하
#include <stdio.h>
int mian(void)
{
	int a, b, c, longest;
	printf("삼각형의 세 변을 입력하시오 : ");
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
			printf("정삼각형 \n");
		else if (a == b || a == c || b == c)
			printf("이등변 삼각형 \n");
		else
			printf("일반 삼각형 \n");
	}
	else
		printf("삼각형이 아닙니다. \n");

	system("PAUSE");
	return 0;
}

//Programming 5. 근로 소득세를 계산하는 프로그램을 작성해보자. 
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int income;
	double tax;

	printf("과세 표준을 입력하시오(만원) : ");
	scanf_s("%d", &income);

	if (income <= 1000)
		tax = 0.08;
	else if (income <= 4000)
		tax = 0.17;
	else if (income <= 8000)
		tax = 0.26;
	else
		tax = 0.35;
	
	printf("소득세는 %f만원 입니다. \n", income * tax);

	system("PAUSE");
	return 0;
}

//Programming 6. 절대 평가로 학생들의 학점을 계산하는 프로그램을 작성해보자.
//1. 중간고사, 기말고사를 차례대로 사용자로부터 읽는다.
//2. 중간고사와 기말고사의 평균값이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 60점 미만이면 F 학점이라고 출력하고 종료한다.
#include <stdio.h>
int main(void) {
	int mid, fin;
	double avg;
	char grade;

	printf("중간 고사 점수를 입력하시오 : ");
	scanf_s("%d", &mid);
	printf("기말 고사 점수를 입력하시오 : ");
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

	printf("당신의 학점은 %c학점입니다. \n", grade);

	system("PAUSE");
	return 0;

}

//Programming 7. 이차 방정식의 근을 계산하는 프로그램을 작성해보자.
//사용자에게 이차 방정식의 계수 a, b, c를 입력하도록 한다.
//만약 a가 0이면 근은 -c/b이다.
//만약 판별식이 음수이면 실근은 존재하지 않는다.
//위의 조건에 해당되지 않으면 다음과 같은 공식을 이용하여 실근을 구한다.
#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, c;
	double x1, x2;

	printf("계수 a를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("계수 b를 입력하시오 : ");
	scanf_s("%d", &b);
	printf("계수 c를 입력하시오 : ");
	scanf_s("%d", &c);

	if (a != 0)
	{
		if (sqrt(b * b - 4 * a * c) >= 0)
		{
			x1 = -b + sqrt(b * b - 4 * b * c) / 2 * a;
			x2 = -b - sqrt(b * b - 4 * b * c) / 2 * a;
			printf("이차방정식의 실근은 %f와 %f입니다. \n", x1, x2);
		}
		else
			printf("실근은 존재하지 않습니다. \n");
	}
	else
		printf("실근은 존재하지 않습니다. \n");

	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, c;
	double D, x, x1, x2;

	printf("계수 a, b, c를 입력하시오 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	D = sqrt(b*b - 4.0*a*c);

	if (a == 0)
	{
		x = -c / (double)b;
		printf("위의 이차방적식의 실근은 %f입니다. \n", x);
	}
	else if (D >= 0 && a != 0) {
		x1 = (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
		x2 = (-b - sqrt(b*b - 4.0*a*c)) / (2.0*a);
		printf("위의 이차방정식의 실근은 %f와 %f입니다. \n", x1, x2);
	}
	else
		printf("실근이 존재하지 않습니다. \n");

	system("PAUSE");
	return 0;
}
	