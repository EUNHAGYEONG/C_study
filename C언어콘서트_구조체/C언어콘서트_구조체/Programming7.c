/*
//삼각형, 사각형, 원을 동시에 표현할 수 있는 공용체를 설계하라.
//삼각형은 밑변과 높이, 사각형은 가로와 세로, 원은 반지름만을 저장하도록 하라.
//현재의 공용체가 표현하고 있는 도형의 종류는 열거형 변수를 사용하여 나타낸다.
//사용자로부터 도형의 종류와 도형의 데이터를 받아서 도형의 면적을 계산하는 프로그램을 작성하라.
//18.12.13 경은하

#include <stdio.h>

enum figure {triangle, rectangle, circle};
union needs {
	int width;
	int height;
	int bottom;
	int r;
	int high;
};

int main(void)
{
	enum figure f;
	union needs n1;
	union needs n2;

	printf("도형의 타입을 입력하시오(0-삼각형, 1-사각형, 2-원) : ");
	scanf_s("%d", &f);

	if (f == 0)
	{
		printf("밑변과 높이를 입력하세요 : ");
		scanf_s("%d %d", &n1.bottom, &n2.height);
		int result = (n1.bottom * n2.height) / 2;
		printf("면적은 %d \n", result);
	}

	else if (f == 1)
	{
		printf("가로와 세로를 입력하세요 : ");
		scanf_s("%d %d", &n1.width, &n2.high);
		int result = n1.width * n2.high;
		printf("면적은 %d \n", result);
	}

	else if (f == 2)
	{
		printf("반지름을 입력하세요 : ");
		scanf_s("%d", &n1.r);
		double result = n1.r * n1.r * 3.14;
		printf("면적은 %f \n", result);
	}

	return 0;
}
*/