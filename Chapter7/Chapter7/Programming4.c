/*
//1�ܺ��� 9�ܱ����� �������� 2���� �迭�� �����Ѵ�. ����ڷκ��� ������ ���� �ϳ��� �޾Ƽ� 2���� �迭���� ã�´�. ã�� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ѵ�.
#include <stdio.h>
#define NUM 9
int main(void) {
	int i, j;
	int gogo[NUM][NUM] = { 0 };
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			gogo[i][j] = (i + 1) * (j + 1);
		}
	}

	printf("�˰���� �������� �Է��Ͻÿ�(�� : 9 3) : ");
	scanf_s("%d %d", &i, &j);

	printf("%d X %d = %d \n", i, j, gogo[i - 1][j - 1]);
	system("PAUSE");
	return 0;
}
*/
