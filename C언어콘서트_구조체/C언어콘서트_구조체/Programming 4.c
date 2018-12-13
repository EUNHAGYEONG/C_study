/*
//학생을 나타내는 구조체 student는 주민등록번호(정수), 이름(문자열), 전화번호(문자열)로 구성된다.
//구조체 안에서 공용체를 사용하여 주민등록번호 또는 학번 중에서 하나를 사용할 수 있도록 구조체를 정의해보자.

#include <stdio.h>
#include <string.h>

struct student {
	char name[10];
	
	union number {
		int id_number;
		int number;
	};
};

int main(void)
{
	struct student s;

	strcpy_s(s.name, 10, "Kim");

	s.id_number = 9876543210;
	printf("name : %s id_number : %d \n", s.name, s.id_number);

	s.number = 201812345;
	printf("name : %s number = %d \n", s.name, s.number);

	return 0;
}
*/