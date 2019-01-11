/*
//필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근길에 DVD나 만화책을 잔뜩 빌리고, 동네 슈퍼에 들려서 군것질거리를 사가지고 집에 들어가는 것이다.
//오늘은 금요일이다.
//현재 필자의 주머니에는 5천원이 있다.
//DVD 한편을 빌리면 3,500원이 남는다.
//슈퍼에 들려서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다.
//잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?
//물론 여기에는 여러 가지 경우의 수가 있을 것이다.
//필자가 어떠한 선택을 할 수 있는지 여러분이 제시해 주기 바란다.
//19.01.09 경은하

#include <stdio.h>

int main(void)
{
	int total = 3500;
	int bread = 500, snack = 700, coke = 400;
	int bread_num, snack_num, coke_num;

	for (snack_num = 1; snack * snack_num <= 3500; snack_num++) {
		for (bread_num = 1; bread * bread_num <= 3500; bread_num++) {
			for (coke_num = 1; coke * coke_num <= 3500; coke_num++) {
				if (bread*bread_num + snack * snack_num + coke * coke_num == 3500)
					printf("크림빵 : %d개, 새우깡 : %d개, 콜라 : %d개 \n", bread_num, snack_num, coke_num);
			}
		}
	}

	return 0;
}
*/