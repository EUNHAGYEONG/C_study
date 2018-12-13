/*
//돈만 생기면 저금하는 사람을 가정하자.
//이 사람을 위한 함수 save(int amount)를 작성하여 보자.
//이 함수는 저금할 금액을 나타내는 하나의 인수 amount만을 받으며 save(100)과 같이 호출된다.
//save()는 현재까지 저축된 총액을 기억하고 있으며 한번 호출될 때마다 총 저축액을 화면에 출력한다.
//예금 인출을 나타내는 함수 draw(int amount)도 작성하여 보자. save()와 draw()를 동시에 사용하려면 저금액은 어떤 종류의 변수로 표현하여야 하는가?
//18.12.09 경은하

#include <stdio.h>

int save(int amount);
int draw(int amount);

int total_amount;

int main(void) {
	int amount;
	int choose;

	while (1) {
		printf("실행할 내용을 입력해주세요(저축 : 1, 인출 : 2, 종료 : -1) : ");
		scanf_s("%d", &choose);

		if (choose == -1)
			break;

		printf("금액을 입력하여 주세요 : ");
		scanf_s("%d", &amount);

		if (choose == 1)
			printf("지금까지의 저축액은 %d입니다. \n", save(amount));
		else if (choose == 2)
			printf("지금까지의 저축액은 %d입니다. \n", draw(amount));
	}

	return 0;
}

int save(int amount) {
	total_amount += amount;
}

int draw(int amount) {
	total_amount -= amount;
}
*/