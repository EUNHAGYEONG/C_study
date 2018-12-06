/*
//Bubble sort2
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) )
#define SIZE 10
int main(void) {
	int i, j, pass, tmp, ctot = 0, etot = 0, tag = 0;
	int A[SIZE] = { 20, 10, 90, 30, 70, 50, 60, 40, 80, 5 };
	printf("\n원 자료 \t ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", A[i]);
	printf("\n-------------------------------\n");
	for (pass = 1; pass < SIZE; pass++)
	{
		tag = 0;
		for (i = 0; i < SIZE; i++)
		{
			ctot++;
			if (A[i] > A[i + 1])
			{
				tag++;
				etot++;
				SWAP(A[i], A[i + 1], tmp);)
			}
		}
		printf("\nPass %d : ", pass);
		for (j = 0; j < SIZE; j++)
			printf("%4d", A[j]);
		if (tag == 0)
			break;

		printf("\n\n\t 비교횟수 = %d : 교환횟수 = %d\n", ctot, etot);
		printf("\n");
	}

}
*/

/*
void sub1()
{
	int x = 10;	//x는 이 함수에서만 사용 가능
	printf("[1] x = %d\n", x);
}
int main(void) {
	int x, y = 200;
	sub1();
	// printf("[2] x= %d\n", x);	//x는 사용 불가
	printf("[3] y = %d\n", y);

	printf("\n");
	system("PAUSE");
}
*/