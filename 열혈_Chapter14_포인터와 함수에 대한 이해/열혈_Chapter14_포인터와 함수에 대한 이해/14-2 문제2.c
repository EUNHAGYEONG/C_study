/*
�Ʒ��� ������ �� ���� �����Ҹ��� ������ ���ϰ� �ִ�. 
�װ��� �������� �̾߱��� ����.
Ư�� �̿� �����ؼ� ShowData �Լ��� ������ �����ϱ� �ٶ���.

void ShowData(const int *ptr)
{
	int *rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}

int main(void)
{
	int num = 10;
	int *ptr = &num;
	ShowData(ptr);
	return 0;
}
*/

//19.02.19 ������
/*
ShowData���� ptr�� ���� �������� �ʱ� ���� const ������ �Ͽ���. 
������ int *rptr = ptr�� �����ϸ鼭 ptr�� ���� rptr�� ���� ����ǵ��� �ٲ�� ���ȴ�.
���� const ������ �� �ʿ䰡 ����� ������ �Ǿ���.
*/