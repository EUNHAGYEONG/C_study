/*
//구조체를 이용하여 이메일을 표현할 수 있는 구조체를 정의하고, 적당한 초깃값을 부여하고 출력하는 프로그램을 작성하라.
//구조체의 멤버는 제목, 수신자, 발신자, 내용, 날짜, 우선순위 등으로 구성된다.
//18.12.13 경은하

#include <stdio.h>

struct email {
	char title[20];
	char addressee[10];
	char sender[10];
	char content[100];
	int data;
	int priority;
};

int main(void)
{
	struct email m1 = {
		"C언어", "eunha4685", "gunha4685", "이것은 C언어 콘서트 중 구조체 단원입니다.", 20181213, 1 };

	printf("title : %s \n", m1.title);
	printf("addressee : %s \n", m1.addressee);
	printf("sender : %s \n", m1.sender);
	printf("content : %s \n", m1.content);
	printf("data : %d \n", m1.data);
	printf("priority : %d \n", m1.priority);

	return 0;
}
*/