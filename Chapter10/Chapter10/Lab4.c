//3���� ���� �迭�� �̿��Ͽ� ������ �ѿ������� �����غ���.
//18.12.04 ������

#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void) {
	char dic[WORDS][2][30] = {
		{ "book", "å"},
		{"boy", "�ҳ�"},
		{"couputer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"}
	};
	char answer[30];
	int i = 0;

	printf("�ܾ �Է��Ͻÿ� : ");
	gets_s(answer, 29);

	for (i = 0; i < WORDS; i++) {
		if (dic[i][0] == answer)
			printf("%s \n", dic[i]);
		else
			printf("��ġ�ϴ� �ܾ �����ϴ�. \n");
	}

	return 0;
}