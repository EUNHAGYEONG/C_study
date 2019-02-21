/*
아래의 예제는 한 가지 지적할만한 사항을 지니고 있다. 
그것이 무엇인지 이야기해 보자.
특히 이와 관련해서 ShowData 함수를 유심히 관찰하기 바란다.

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

//19.02.19 경은하
/*
ShowData에서 ptr의 값을 변경하지 않기 위해 const 선언을 하였다. 
하지만 int *rptr = ptr을 선언하면서 ptr의 값이 rptr을 통해 변경되도록 바뀌어 버렸다.
따라서 const 선언을 한 필요가 사라져 버리게 되었다.
*/