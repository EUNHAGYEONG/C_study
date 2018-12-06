/*
2018.11.11 경은하
//현재 필자의 주머니에는 3500원이 있다. 슈퍼에서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다.
//잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?
//여러 가지 경우의 수가 있을 것이다. 필자가 어떠한 선택을 할 수 있는지 제시해주어라.
#include <stdio.h>
int main(void) {
	int bread = 500;
	int snack = 700;
	int coke = 400;
	int i, j, k;
	int sum;

	printf("현재 당신이 소유하고 있는 금액 : 3500 \n");
	
	for (i = 1; i < 6; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 8; k++) {
				sum = bread * i + snack * j + coke * k;
				if (sum == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
			}
		}
	}
	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}
*/