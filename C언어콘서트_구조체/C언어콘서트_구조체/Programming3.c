/*
//직원을 나타내는 구조체 employee가 사번(정수), 이름(문자열), 전화번호(문자열), 나이(정수) 등으로 구성된다.
//구조체의 배열을 선언하고 10명의 데이터로 초기화하라.
//이중에서 나이가 20이상 30이하인 직원을 찾아서 출력하도록 하라.
//18.12.13 경은하

#include <stdio.h>

struct employee {
	char name[10];
	int age;
};

int main(void) {
	struct employee E[10] = {
		{"Kim", 15}, {"Park", 17}, {"Choi", 19}, {"Kang", 21}, {"Gyeong", 23}, {"Cho", 25},
	{"Hwang", 27}, {"Kwak", 29}, {"Song", 31}, {"Na", 33} };

	int i;

	for (i = 0; i < 10; i++)
	{
		if (E[i].age >= 20 && E[i].age < 30)
			printf("%s \n", E[i].name);
	}

	return 0;
}
*/