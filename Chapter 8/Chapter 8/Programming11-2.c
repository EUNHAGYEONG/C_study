/*
//돈만 생기면 저금하는 사람을 가정하자.
//이 사람을 위한 함수 save(int amount)를 작성하여 보자.
//이 함수는 저금할 금액을 나타내는 하나의 인수 amount만을 받으며 save(100)과 같이 호출된다.
//save()는 현재 저축된 총액을 기억하고 있으며 한번 호출될 때마다 총 저축액을 화면에 출력한다.
//정적 지역 변수를 사용하여 구현하라.
//18.11.23. 경은하

#include <stdio.h>

int save(int amount) {
	static int saved = 0;
	saved += amount;

	return saved;
}

int main(void) {
	int money, total_money = 0;

	while (1) {
		printf("얼마를 저축하시겠습니까? (종료는 -1) : ");
		scanf_s("%d", &money);

		total_money = save(money);

		if (money == -1)
			break;
		
		printf("지금까지의 저축액은 %d입니다. \n", total_money);
	}
	return 0;
}
*/
