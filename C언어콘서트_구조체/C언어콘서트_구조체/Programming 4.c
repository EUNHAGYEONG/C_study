/*
//�л��� ��Ÿ���� ����ü student�� �ֹε�Ϲ�ȣ(����), �̸�(���ڿ�), ��ȭ��ȣ(���ڿ�)�� �����ȴ�.
//����ü �ȿ��� ����ü�� ����Ͽ� �ֹε�Ϲ�ȣ �Ǵ� �й� �߿��� �ϳ��� ����� �� �ֵ��� ����ü�� �����غ���.

#include <stdio.h>
#include <string.h>

struct student {
	char name[10];
	
	union number {
		int id_number;
		int number;
	};
};

int main(void)
{
	struct student s;

	strcpy_s(s.name, 10, "Kim");

	s.id_number = 9876543210;
	printf("name : %s id_number : %d \n", s.name, s.id_number);

	s.number = 201812345;
	printf("name : %s number = %d \n", s.name, s.number);

	return 0;
}
*/