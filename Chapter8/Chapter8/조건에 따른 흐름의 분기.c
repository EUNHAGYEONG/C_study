/*
//IfBasic.c
#include <stdio.h>

int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");

	if (num > 0)
		printf("입력 값은 0보다 크다. \n");

	if (num == 0)
		printf("입력 값은 0이다. \n");

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

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과 : %f \n", result);

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
			printf("3 또는 4의 배수 : %d \n", num);
	}
	system("PAUSE");
	return 0;
}

//IfElseBasic.c
#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	else
		printf("입력 값은 0보다 작지 않다. \n");

	system("PASUSE");
	return 0;
}

//CalTwo.c
#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("결과 : %f \n", result);

	system("PAUSE");
	return 0;
}

//ThreeOperand.c
#include <stdio.h>

int main(void) {
	int num, abs;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값 : %d \n", abs);

	system("PUASE");
	return 0;
}

//8-1 문제 1. 1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해보자. 단! 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
//18.10.11 경은하
#include <stdio.h>

int main(void)
{
	int num;
	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0)
			printf("%d는 7의 배수입니다. \n", num);
		else if (num % 9 == 0 && num % 7 != 0)
			printf("%d는 9의 배수입니다. \n", num);
	}
	system("PAUSE");
	return 0;
}

//8-1 문제 2.두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자. 단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다.
// 18.10.11 경은하
#include <stdio.h>

int main(void)
{
	int A, B, result;
	printf("두 개의 정수를 입력해주세요 : ");
	scanf_s("%d %d", &A, &B);

	if (A >= B)
		result = A - B;
	else
		result = B - A;

	printf("두 수의 차는 %d입니다. \n", result);

	system("PAUSE");
	return 0;
}

// 8-1.문제 3. 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
// 18.10.11 경은하
#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double avg;
	char grade;

	printf("국어, 영어, 수학 점수를 입력해주세요 : ");
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

	printf("위 학생의 학점은 %c 입니다. \n", grade);

	system("PAUSE");
	return 0;
}

//8-1 문제 4.위의 문제 2를 조건 연산자를 이용하는 형태로 프로그램을 변경해 보자.
//18.10.10 경은하
#include <stdio.h>
int main(void) {
	int A, B, result;

	printf("두 수의 정수를 입력해주세요 : ");
	scanf_s("%d %d", &A, &B);

	result = A >= B ? A - B : B - A;

	printf("두 수의 차는 %d입니다. \n", result);

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

//8-2 문제1. 구구단을 출력하되 짝수 단만 출력되도록 하자. 또한 2단은 2*2까지, 4단은 4*4까지, 6단은 6*6까지, 8단은 8*8까지만 출력되도록 프로그램을 구현해 보자.(단, break와 continue를 사용해야 한다.)
//18.10.11 경은하
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

//8-2 문제2. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.
//18.10.11 경은하
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
			
			printf("A = %d, Z = %d일 때 AZ + ZA = 99입니다. \n", A, Z);
		}
	}
	system("PAUSE");
	return 0;
}

//EnglishSchool.c
#include <stdio.h>

int main(void) {
	int num;
	printf("1이상 5이하의 정수 입력 : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2는 TWO \n");
		break;
	case 3:
		printf("3은 THREE \n");
		break;
	case 4:
		printf("4는 FOUR \n");
		break;
	case 5:
		printf("5는 FIVE \n");
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
	printf("M 오전, A 오후, E 저녘 \n");
	printf("입력 : ");
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

//18.10.12 경은하
#include <stdio.h>
int main(void) {
	int num, num_;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	num_ = num / 10;

	switch (num_)
	{
	case 0:
		printf("0이상 10미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break;
	case 2:
		printf("20이상 30미만 \n");
		break;
	case 3:
		printf("30이상 40미만 \n");
		break;
	default:
		printf("30이상 \n");
	}
	system("PAUSE");
	return 0;
}

//GoToBasic.c
#include <stdio.h>
int main(void) {
	int num;
	printf("자연수 입력 : ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다. \n");
	goto END;
TWO:
	printf("2를 입력하셨습니다. \n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:
	system("PAUSE");
	return 0;
}
*/