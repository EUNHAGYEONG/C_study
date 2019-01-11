#include <stdio.h>

#include <stdlib.h>

#include <string.h>



typedef struct Node  //Node 구조체 선언

{

	char Name[20];  //구조체 멤버

	int Score;   //구조체 멤버 : 점수

	struct Node *link; //자기 자신 (Node *)을 가리키는 포인터 : 자기참조구조체

} Node;     //앞으로 구조체 struct Node 대신 node만 사용



typedef struct

{

	Node *head;

} LList_h;



LList_h *createLList_h(void);  //전달 인자 없이 리스트의 head 생성 함수

int addNode(LList_h*, char name[20], int);  //리스트에 새 데이터(노드)를 추가하는 함수

int printList(LList_h*);  //리스트를 화면 출력하는 함수

void delNode(LList_h *, char del[20]);  //리스트에서 특정 자료(노드)를 삭제(제거)하는 함수

int job();  //작업 선택 함수



LList_h *createLList_h(void)

{

	LList_h *head;  //LList_h  구조체 포인터 head를 생성

	head = (LList_h*)malloc(sizeof(LList_h));

	//LList_h 구조체 노드의 크기만큼 메모리를 할당받아 구조체 포인터에 그 주소를 저장 - 메모리 동적 할당



	head->head = NULL;  //이 행의 head : 본부노드멤버(포인트 head 아님 담임선생님 역할)

	//LList_h 구조체의 멤버의 head의 링크부분에 NULL을 저장

	//맨 처음 head노드를 연결했으므로

	//이 노드에는 아무 노드도 뎐결되어 있지 않음.



	return head;

}



int addNode(LList_h *head, char name[20], int score)

{ //포인터 head와 데이터 X를 인자로 리스트이 새로운 노드를 추가



	Node *newNode;  //구조체 Node의 포인터 newNode를 선언

	Node *p, *q;  //리스트 운용용 Node 포인터와 p와 q를 선언



	//구조체 Node의 포인터 newNode에 메모리 동적 할당.

	newNode = (Node*)malloc(sizeof(Node));



	p = head->head;

	//p에 head의 링크 head를 저장 - 첫번째 원소의 주소

	//할당받은 메모리(newNode)의 멤버를 초기화



	strcpy(newNode->Name, name);

	newNode->Score = score;

	//newNode의 멤버 Score에 score로 받아온 정수 저장

	newNode->link = NULL;

	//포인터 newNode가 가리키는 멤버 link에 NULL 포인터 저장



	if (p == NULL)  //현재 head의 링크부분이 NULL이면(담임선생님이 첫번째 학생에게 전화하는 과정)

	{     //즉, 현재 이 리스트에 노드가 하나도 없으면

		head->head = newNode;

		//head가 가리키는 링커 head에 새로 할당받은 메모리 주소를 저장



		return 0;  //이 함수 실행 종료

	}

	else           //그 이후 서로 전화를 이어나감.

	{

		newNode->link = head->head;

		//새 노드의 링크에 현재 마지막 노드의 링커를 저장

		head->head = newNode;

		//현재 마지막 노드의 링크에 새 노드의 주소 저장

		return 0;  //이 함수 탈출

	}

}



int main(void)

{

	int choice;

	char name[20];

	char del[20];

	int score;

	LList_h *head;

	FILE *fp = NULL;

	fp = fopen("student.txt", "r");

	if (fp == NULL)

	{

		printf("\n\tstudent.txt라는 파일이 없습니다.");

		return 0;

	}



	head = createLList_h();

	printf("\n\t");

	while (!feof(fp))

	{

		fscanf(fp, "%s", name);

		fscanf(fp, "%d", &score);

		printf("%s %d\n\t", name, score);

		//  addNode(head, name, score);

	}

	// printf("\n\t");

	printList(head);





	while (1)

	{

		choice = job();

		switch (choice)

		{

		case 1:

			printf("\t성명 입력 : ");

			scanf("%s", name);

			if (strcmp(name, "q") == 0)

				break;

			printf("\t점수 입력 : ");

			scanf("%d", &score);



			printf("\n]t입력데이터 : %s %d \n", name, score);

			addNode(head, name, score);

			printList(head);

		case 2:

			printf("\t 삭제할 자료(이름)는? : ");

			scanf("%s", del);

			printf("%s\n", del);

			delNode(head, del);

			break;

		case 3:

			printList(head);

			break;



		case 0:

			printf("\n\t프로그램을 종료합니다. \n\t");

			return 0;

		}

	}

}





int PrintList(LList_h *head)

{

	Node *p;  //리스트 운용용 포인터 p

	p = head->head;

	//p를 head의 head로 초기화(첫번째 노드를 가리키고 있다.)



	if (p == NULL) //p가 가리키는 주소가 없으므로

	{

		printf("\n\t빈 리스트입니다.");
		return 0;  //이 함수 탈출

	}



	//첫 번째 노드부터 마지막 노드까지 데이터만 출력

	while (p->link != NULL)

	{

		printf("%s -> ", p->Name);  //2 -> 형식으로 출력

		p = p->link;     //다음노드로 이동

	}

	printf("%s : end ", p->Name);

	//마지막 노드 다음에는 -> 없이 출력

}



void delNode(LList_h *head, char del[20])

{

	Node *p, *q;  //리스트 운용 포인터



	printf("\n\t 삭제할 데이터 : %s\n", del);

	p = head->head;

	if (p == NULL)

	{

		printf("\n번 리스트입니다\n");

		return;

	}



	//첫 번째 노드가 삭제할 노드이면

	if (strcmp(p->Name, del) == 0)

	{

		head->head = p->link;

		//head의 링커를 첫번째 노드의 링커(두번째 노드의 주소(로

		free(p);   //삭제할 데이터가 저장된 메모리

		return;    //이 함수 종료

	}



	while (p->link != NULL) //마지막 노드까지

	{

		q = p;    //포인터 q는 포인터 p의 바로 이전 노드를 가리키게 함.

		p = p->link;  //p를 다음 노드로 이동



		if (strcmp(p->Name, del) == 0)  //p가 가리키는 노드의 데이터가 삭제할 값이면

			break;    //이 블록을 벗어난다.

	}

	//현재 p는 삭제할 노드를 가리키고, q는 삭제할 노드의 직전 노드를 가리키고 있다.



	if (p->link == NULL && strcmp(p->Name, del) != 0)  //마지막 노드의 데이터가 삭제할 값이 아닌 경우

	{

		printf("\n\t%s는 이 리스트에 없습니다. \n", del);  //없다는 메세지를 남기고 함수 종료

		return;

	}

	else

		//마지막 노드인지와 관계 없이

	{

		q->link = p->link;  //삭제할 노드의 링커를 직전 노드의 링커로 저장

		free(p);    //삭제할 노드의 주소(p)를 반남

		printList(head);  //새 리스트를 출력

		return;     //함수 종료

	}

}



int job()

{

	while (1)  //사용자가 작업의 내용을 결정

	{

		int choice;

		printf("\n\t작업 선택 (1:삽입)(2:삭제)(3:출력)(0:종료) : ");



		scanf("%d", &choice);  //사용자가 입력한 작업 번호를 choice에 저장



		if (choice < 0 || choice > 4)

		{//작업 이외의 번호를 입력했을 경우

			continue;  //현재 작업을 계속함.



			return choice;  //사용자가 입력한 작업 번호를 리턴

		}

	}

}