/*
//�ﰢ��, �簢��, ���� ���ÿ� ǥ���� �� �ִ� ����ü�� �����϶�.
//�ﰢ���� �غ��� ����, �簢���� ���ο� ����, ���� ���������� �����ϵ��� �϶�.
//������ ����ü�� ǥ���ϰ� �ִ� ������ ������ ������ ������ ����Ͽ� ��Ÿ����.
//����ڷκ��� ������ ������ ������ �����͸� �޾Ƽ� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
//18.12.13 ������

#include <stdio.h>

enum figure {triangle, rectangle, circle};
union needs {
	int width;
	int height;
	int bottom;
	int r;
	int high;
};

int main(void)
{
	enum figure f;
	union needs n1;
	union needs n2;

	printf("������ Ÿ���� �Է��Ͻÿ�(0-�ﰢ��, 1-�簢��, 2-��) : ");
	scanf_s("%d", &f);

	if (f == 0)
	{
		printf("�غ��� ���̸� �Է��ϼ��� : ");
		scanf_s("%d %d", &n1.bottom, &n2.height);
		int result = (n1.bottom * n2.height) / 2;
		printf("������ %d \n", result);
	}

	else if (f == 1)
	{
		printf("���ο� ���θ� �Է��ϼ��� : ");
		scanf_s("%d %d", &n1.width, &n2.high);
		int result = n1.width * n2.high;
		printf("������ %d \n", result);
	}

	else if (f == 2)
	{
		printf("�������� �Է��ϼ��� : ");
		scanf_s("%d", &n1.r);
		double result = n1.r * n1.r * 3.14;
		printf("������ %f \n", result);
	}

	return 0;
}
*/