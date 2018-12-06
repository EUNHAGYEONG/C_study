/*
2018.11.10 경은하
//세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자. 그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
#include <stdio.h>

void PrintfNumber(void) {
	printf("세 개의 정수를 입력하세요 : ");
}

int ReadNumber(void) {
	int num;
	scanf_s("%d", &num);
	return num;
}

int GetMax(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else {
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}

int GetMin(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num2 > num3)
			return num3;
		else
			return num2;
	}
	else {
		if (num1 > num3)
			return num3;
		else
			return num1;
	}
}

int main(void) {
	int num1, num2, num3;

	PrintfNumber();
	num1 = ReadNumber();
	num2 = ReadNumber();
	num3 = ReadNumber();

	printf("최댓값은 %d입니다. \n", GetMax(num1, num2, num3));
	printf("최솟값은 %d입니다. \n", GetMin(num1, num2, num3));

	system("PAUSE");
	return 0;
}
*/