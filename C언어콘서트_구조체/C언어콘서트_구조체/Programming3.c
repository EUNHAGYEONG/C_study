/*
//������ ��Ÿ���� ����ü employee�� ���(����), �̸�(���ڿ�), ��ȭ��ȣ(���ڿ�), ����(����) ������ �����ȴ�.
//����ü�� �迭�� �����ϰ� 10���� �����ͷ� �ʱ�ȭ�϶�.
//���߿��� ���̰� 20�̻� 30������ ������ ã�Ƽ� ����ϵ��� �϶�.
//18.12.13 ������

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