#include <stdio.h>

#include <stdlib.h>

#include <string.h>



typedef struct Node  //Node ����ü ����

{

	char Name[20];  //����ü ���

	int Score;   //����ü ��� : ����

	struct Node *link; //�ڱ� �ڽ� (Node *)�� ����Ű�� ������ : �ڱ���������ü

} Node;     //������ ����ü struct Node ��� node�� ���



typedef struct

{

	Node *head;

} LList_h;



LList_h *createLList_h(void);  //���� ���� ���� ����Ʈ�� head ���� �Լ�

int addNode(LList_h*, char name[20], int);  //����Ʈ�� �� ������(���)�� �߰��ϴ� �Լ�

int printList(LList_h*);  //����Ʈ�� ȭ�� ����ϴ� �Լ�

void delNode(LList_h *, char del[20]);  //����Ʈ���� Ư�� �ڷ�(���)�� ����(����)�ϴ� �Լ�

int job();  //�۾� ���� �Լ�



LList_h *createLList_h(void)

{

	LList_h *head;  //LList_h  ����ü ������ head�� ����

	head = (LList_h*)malloc(sizeof(LList_h));

	//LList_h ����ü ����� ũ�⸸ŭ �޸𸮸� �Ҵ�޾� ����ü �����Ϳ� �� �ּҸ� ���� - �޸� ���� �Ҵ�



	head->head = NULL;  //�� ���� head : ���γ����(����Ʈ head �ƴ� ���Ӽ����� ����)

	//LList_h ����ü�� ����� head�� ��ũ�κп� NULL�� ����

	//�� ó�� head��带 ���������Ƿ�

	//�� ��忡�� �ƹ� ��嵵 ����Ǿ� ���� ����.



	return head;

}



int addNode(LList_h *head, char name[20], int score)

{ //������ head�� ������ X�� ���ڷ� ����Ʈ�� ���ο� ��带 �߰�



	Node *newNode;  //����ü Node�� ������ newNode�� ����

	Node *p, *q;  //����Ʈ ���� Node �����Ϳ� p�� q�� ����



	//����ü Node�� ������ newNode�� �޸� ���� �Ҵ�.

	newNode = (Node*)malloc(sizeof(Node));



	p = head->head;

	//p�� head�� ��ũ head�� ���� - ù��° ������ �ּ�

	//�Ҵ���� �޸�(newNode)�� ����� �ʱ�ȭ



	strcpy(newNode->Name, name);

	newNode->Score = score;

	//newNode�� ��� Score�� score�� �޾ƿ� ���� ����

	newNode->link = NULL;

	//������ newNode�� ����Ű�� ��� link�� NULL ������ ����



	if (p == NULL)  //���� head�� ��ũ�κ��� NULL�̸�(���Ӽ������� ù��° �л����� ��ȭ�ϴ� ����)

	{     //��, ���� �� ����Ʈ�� ��尡 �ϳ��� ������

		head->head = newNode;

		//head�� ����Ű�� ��Ŀ head�� ���� �Ҵ���� �޸� �ּҸ� ����



		return 0;  //�� �Լ� ���� ����

	}

	else           //�� ���� ���� ��ȭ�� �̾��.

	{

		newNode->link = head->head;

		//�� ����� ��ũ�� ���� ������ ����� ��Ŀ�� ����

		head->head = newNode;

		//���� ������ ����� ��ũ�� �� ����� �ּ� ����

		return 0;  //�� �Լ� Ż��

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

		printf("\n\tstudent.txt��� ������ �����ϴ�.");

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

			printf("\t���� �Է� : ");

			scanf("%s", name);

			if (strcmp(name, "q") == 0)

				break;

			printf("\t���� �Է� : ");

			scanf("%d", &score);



			printf("\n]t�Էµ����� : %s %d \n", name, score);

			addNode(head, name, score);

			printList(head);

		case 2:

			printf("\t ������ �ڷ�(�̸�)��? : ");

			scanf("%s", del);

			printf("%s\n", del);

			delNode(head, del);

			break;

		case 3:

			printList(head);

			break;



		case 0:

			printf("\n\t���α׷��� �����մϴ�. \n\t");

			return 0;

		}

	}

}





int PrintList(LList_h *head)

{

	Node *p;  //����Ʈ ���� ������ p

	p = head->head;

	//p�� head�� head�� �ʱ�ȭ(ù��° ��带 ����Ű�� �ִ�.)



	if (p == NULL) //p�� ����Ű�� �ּҰ� �����Ƿ�

	{

		printf("\n\t�� ����Ʈ�Դϴ�.");
		return 0;  //�� �Լ� Ż��

	}



	//ù ��° ������ ������ ������ �����͸� ���

	while (p->link != NULL)

	{

		printf("%s -> ", p->Name);  //2 -> �������� ���

		p = p->link;     //�������� �̵�

	}

	printf("%s : end ", p->Name);

	//������ ��� �������� -> ���� ���

}



void delNode(LList_h *head, char del[20])

{

	Node *p, *q;  //����Ʈ ��� ������



	printf("\n\t ������ ������ : %s\n", del);

	p = head->head;

	if (p == NULL)

	{

		printf("\n�� ����Ʈ�Դϴ�\n");

		return;

	}



	//ù ��° ��尡 ������ ����̸�

	if (strcmp(p->Name, del) == 0)

	{

		head->head = p->link;

		//head�� ��Ŀ�� ù��° ����� ��Ŀ(�ι�° ����� �ּ�(��

		free(p);   //������ �����Ͱ� ����� �޸�

		return;    //�� �Լ� ����

	}



	while (p->link != NULL) //������ ������

	{

		q = p;    //������ q�� ������ p�� �ٷ� ���� ��带 ����Ű�� ��.

		p = p->link;  //p�� ���� ���� �̵�



		if (strcmp(p->Name, del) == 0)  //p�� ����Ű�� ����� �����Ͱ� ������ ���̸�

			break;    //�� ����� �����.

	}

	//���� p�� ������ ��带 ����Ű��, q�� ������ ����� ���� ��带 ����Ű�� �ִ�.



	if (p->link == NULL && strcmp(p->Name, del) != 0)  //������ ����� �����Ͱ� ������ ���� �ƴ� ���

	{

		printf("\n\t%s�� �� ����Ʈ�� �����ϴ�. \n", del);  //���ٴ� �޼����� ����� �Լ� ����

		return;

	}

	else

		//������ ��������� ���� ����

	{

		q->link = p->link;  //������ ����� ��Ŀ�� ���� ����� ��Ŀ�� ����

		free(p);    //������ ����� �ּ�(p)�� �ݳ�

		printList(head);  //�� ����Ʈ�� ���

		return;     //�Լ� ����

	}

}



int job()

{

	while (1)  //����ڰ� �۾��� ������ ����

	{

		int choice;

		printf("\n\t�۾� ���� (1:����)(2:����)(3:���)(0:����) : ");



		scanf("%d", &choice);  //����ڰ� �Է��� �۾� ��ȣ�� choice�� ����



		if (choice < 0 || choice > 4)

		{//�۾� �̿��� ��ȣ�� �Է����� ���

			continue;  //���� �۾��� �����.



			return choice;  //����ڰ� �Է��� �۾� ��ȣ�� ����

		}

	}

}