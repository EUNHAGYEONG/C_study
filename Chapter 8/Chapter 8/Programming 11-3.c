/*
//돈만 생기면 저금하는 사람을 가정하자.
//이 사람을 위한 함수 save(int amount)를 작성하여 보자.
//이 함수는 저금할 금액을 나타내는 하나의 인수 amount만을 받으며 save(100)과 같이 호출된다.
//save()는 현재 저축된 총액을 기억하고 있으며 한번 호출될 때마다 총 저축액을 화면에 출력한다.
//예금 인출을 나타내는 함수 draw(int amount)도 작성하여 보자.
//save()와 draw()를 동시에 사용하려면 저금액은 어떤 종류의 변수로 표현하여야 하는가?
//18.11.23. 경은하

#include <stdio.h>
int total_account = 0;

int save(int amount) {
	total_account += amount;
	return total_account;
}

int draw(int amount) {
	total_account -= amount;
	return total_account;
}

int main(void) {
	int money = 0;
	unsigned int select = 0;
	int total_money = 0;

	while (1) {
		
		printf("저축 : 1, 예금 인출 : 2 (종료 : -1) : ");
		scanf_s("%d", &select);

		if (select == 1) {
			printf("저축 or 입금할 금액을 입력해주세요 : ");
			scanf_s("%d", &money);
			total_money = save(money);
		}
			
		else if (select == 2) {
			printf("저축 or 입금할 금액을 입력해주세요 : ");
			scanf_s("%d", &money);
			total_money = draw(money);
		}

		else if (select == -1)
			break;

		printf("현재 계좌의 총 금액은 %d입니다. \n", total_money);
	}
	return 0;
}
*/