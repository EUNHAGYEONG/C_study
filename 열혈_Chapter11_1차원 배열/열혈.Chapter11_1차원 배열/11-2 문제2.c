/*
���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� �����Ѵ�.
�� ���� �迭�� ����� ���ܾ �������� �����´�.
���� �� ���� �� ������ ��ġ�� �����ؼ��� �� �ȴ�.
������ ������ ����� ������������ Ȯ���ϱ� ���ؼ� ����غ���.
19.01.11 ������
*/
/*
#include <stdio.h>

int main(void)
{
	char word[50], tmp;
	int size_word = 0, num;
	int i = 0;

	printf("���ܾ �Է��ϼ��� : ");
	gets_s(word, 50);
	
	while (word[i] != 0)
		i++;

	size_word = i;

	num = size_word / 2;

	for (i = 0; i < num; i++) {
		tmp = word[i];
		word[i] = word[size_word - i - 1];
		word[size_word - i - 1] = tmp;
	}

	printf("%s \n", word);

	return 0;
}
*/