/*
아래에 정의된 함수를 보자. 
인자로 전달되는 정보를 참조하여 int형 배열요소 전체를 출력하는 함수이다.
	void ShowAllData(const int *arr, int len)
	{
		int i;
		for (i = 0; i < len; i++)
			printf("%d ", arr[i]);
	}
	
위 함수의 매개변수 선언에서 매개변수 arr을 대상으로 const 선언을 한 이유가 무엇이겠는가?
이 함수를 정의한 사람의 의도를 이야기해 보자.
/*
//19.02.19 경은하
//arr 배열의 값이 변경된는 것을 방지하기 위해