#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include<stdbool.h>
#include <errno.h>
#include <ctype.h>
#include<time.h>
#include<math.h>
#include<climits>
//typedef struct {
//    int* data;     // 动态数组指针
//    int length;    // 当前元素个数
//    int capacity;  // 总容量
//} SqList;
//
// 创建空顺序表，返回结构体指针
//SqList* CreateList(int cap)
//{
//    SqList* L = (SqList*)malloc(sizeof(SqList));
//    L->data = (int*)malloc(sizeof(int) * cap);
//    L->length = 0;
//    L->capacity = cap;
//    return L;
//}
//
// 合并两个有序动态顺序表 A,B ，返回新的 SqList*
//SqList* MergeList(SqList* A, SqList* B)
//{
//     新表容量 = 两表元素总和
//    int total = A->length + B->length;
//    SqList* C = CreateList(total);
//
//    int i = 0, j = 0, k = 0;
//    while (i < A->length && j < B->length)
//    {
//        if (A->data[i] <= B->data[j])
//        {
//            C->data[k++] = A->data[i++];
//        }
//        else
//        {
//            C->data[k++] = B->data[j++];
//        }
//    }
//    while (i < A->length)
//        C->data[k++] = A->data[i++];
//    while (j < B->length)
//        C->data[k++] = B->data[j++];
//
//    C->length = k;
//    return C;
//}
//
// 打印
//void PrintList(SqList* L)
//{
//    for (int t = 0; t < L->length; t++)
//    {
//        printf("%d ", L->data[t]);
//    }
//    printf("\n");
//}
//
// 销毁动态顺序表，释放两层内存：data数组 + SqList结构体
//void DestroyList(SqList* L)
//{
//    if (L == NULL) return;
//    free(L->data);
//    free(L);
//}
//
//int main(void)
//{
//    SqList* A = CreateList(10);
//    SqList* B = CreateList(10);
//
//     A:1 3 5 7
//    A->data[0] = 1; A->data[1] = 3; A->data[2] = 5;
//    A->data[3] = 7;A->length = 4;
//
//     B:2 4 6 8
//    B->data[0] = 2; B->data[1] = 4; B->data[2] = 6;
//    B->data[3] = 8;B->length = 4;
//
//    SqList* C = MergeList(A, B);
//    PrintList(C);   // 1 2 3 4 5 6 7 8
//
//    DestroyList(A);
//    DestroyList(B);
//    DestroyList(C);
//    return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* next;
//
//}Node ,*LinkList;
//void sort_list(LinkList L, int n)
//{
//	Node* p = L;
//	while (p->next != NULL && p->next->data < n)
//	{
//		p = p->next;
//	}
//	Node* q = (Node*)malloc(sizeof(Node));
//	q->data = n;
//	q->next = p->next;
//	p->next = q;
//}
//void print_list(LinkList L)
//{
//	Node* p = L->next;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//void free_list(LinkList L)
//{
//	Node* p =L->next;
//		while (p)
//		{
//			Node* q = p->next;
//			free(p);
//			p = q;
//		}
//		L->next = NULL;
//}
//int main()
//{
//	int input;
//	LinkList head = (Node*)malloc(sizeof(Node));
//	head->next = NULL;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &input);
//		sort_list(head, input);
//	}
//	print_list(head);
//	free_list(head);
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node,*LinkList;
//LinkList create_node(int n)
//{
//	
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = n;
//	p->next = NULL;
//	return p;
//}
//LinkList create_list(LinkList L,int a[])
//{
//	
//	
//	Node* tail = L;
//	for (int i = 0; i < 4; i++)
//	{
//		tail->next = create_node(a[i]);
//		tail= tail->next;
//	}
//	return L;
//}
//void print_list(LinkList L)
//{
//	Node* p = L->next;
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->next;
//		}
//		printf("\n");
//}
//void reverse_list(LinkList L)
//{
//	Node* p, * q;
//	p = L->next;
//	
//	L->next = NULL;
//	while (p)
//	{
//		q = p->next;
//		p->next = L->next;
//		L->next = p;
//		p = q;
//	}
//}
//void free_list(LinkList L)
//{
//	Node* p = L->next;
//			while (p)
//			{
//				Node* q = p->next;
//				free(p);
//				p = q;
//			}
//			L->next = NULL;
//}
//LinkList sort_list(LinkList La, LinkList Lb)
//{
//	if (La->next == NULL)
//	{
//		return Lb;
//	}
//	if (Lb->next == NULL)
//	{
//		return La;
//	}
//	Node* pa = La->next;
//	Node* pb = Lb->next;
//	LinkList Lc= (Node*)malloc(sizeof(Node));
//	Lc->next = NULL;
//	Node* pc = Lc;
//	while (pa && pb)
//	{
//		if (pa->data <= pb->data)
//		{
//			pc->next = create_node(pa->data);
//			pa = pa->next;
//		}
//		else {
//			pc->next =create_node(pb->data);
//			pb = pb->next;
//		}
//		pc = pc->next;
//	}
//	while (pa) {
//		pc->next = create_node(pa->data);
//		pc = pc->next;
//		pa = pa->next;
//	}
//	while (pb) {
//		pc->next =create_node(pb->data);
//		pc = pc->next;
//		pb = pb->next;
//	}
//	return Lc;
//
//}
//int main()
//{
//	int a[] = { 1,3,5,7 };
//	int b[] = { 2,4,6,8 };
//	
//	LinkList La = (Node*)malloc(sizeof(Node));
//	La->next = NULL;
//	create_list(La,a);
//	LinkList Lb = (Node*)malloc(sizeof(Node));
//	Lb->next = NULL;
//	create_list(Lb, b);
//
//	LinkList Lc = sort_list(La, Lb);
//
//	print_list(Lc);
//  printf("原链表\n");
//	print_list(La);
//	reverse_list(La);
//  printf("现链表\n");
//	print_list(La);
//	free_list(La);
//	free_list(Lb);
//	free_list(Lc);
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node,*Linklist;
//Node* create_Node(int n)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = n;
//	p->next = NULL;
//	return p;
//}
//int Is_ring(Linklist L)
//{
//	if (L->next == NULL)
//	{
//		return 0;
//	}
//	Node* fast = L->next;
//	Node* slow = L->next;
//	while (fast && fast->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void free_list(Linklist L)
//{
//	Node* p = L->next;
//			while (p)
//			{
//				Node* q = p->next;
//				free(p);
//				p = q;
//			}
//			L->next = NULL;
//}
//int main()
//{
//	Linklist L= (Node*)malloc(sizeof(Node));
//	Linklist L1 = (Node*)malloc(sizeof(Node));
//	
//	L->next = create_Node(1);
//	L->next->next = create_Node(2);
//	L->next->next->next = create_Node(3);
//	int ret = Is_ring(L);
//	if (ret == 1)
//	{
//		printf("Y\n");
//	}
//	else {
//		printf("n\n");
//	}
//
//	
//	L1->next = create_Node(1);
//	L1->next->next = create_Node(2);
//	Node* ring = L1->next;
//	L1->next->next->next = create_Node(3);
//	L1->next->next->next->next = ring;
//	int ret1 = Is_ring(L1);
//	if (ret1 == 1)
//	{
//		printf("Y\n");
//	}
//	else {
//		printf("n\n");
//	}
//
//
//	free_list(L);
//
//	return 0;
//}


//typedef struct {
//	int* data;
//	int top;
//	int MAXSIZE;
//}SqStack;
//bool InitStack(SqStack* p, int num)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	p->data = malloc(sizeof(int) * num);
//	if (p->data == NULL)
//	{
//		return false;
//	}
//	memset(p->data, 0, sizeof(int) * num);
//	p->top = -1;
//	p->MAXSIZE = num;
//	return true;
//}
//bool Destory_stack(SqStack* p)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	free(p->data);
//	p->data = NULL;
//	p->top = -1;
//	return true;
//}
//bool Clean_stack(SqStack* p)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	memset(p->data, 0, sizeof(int) * p->MAXSIZE);
//	p->top = -1;
//	return true;
//
//}
//bool Is_empty(SqStack* p)
//{
//	return (p->top == -1) ? true : false;
//}
//bool Get_top(SqStack* p,int*e)
//{
//	if (p == NULL || Is_empty(p))
//	{
//		return false;
//	}
//	*e = p->data[p->top];
//	return true;
//}
//bool Push_elem(SqStack* p, int num)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	if (p->top + 1 == p->MAXSIZE)
//	{
//		return false;
//	}
//	p->data[++p->top] = num;
//	return true;
//}
//bool Pop_elem(SqStack* p, int* e)
//{
//	if (p == NULL || Is_empty(p))
//	{
//		return false;
//	}
//	*e = p->data[p->top];
//	p->top--;
//	return true;
//}
//int main()
//{
//	int i = 0;
//	SqStack stack;
//	InitStack(&stack,10);
//	scanf("%d", &i);
//	for (int n = i; n > 0; n/= 2)
//	{
//		Push_elem(&stack, n%2);
//	}
//	int j = 0;
//	while(Is_empty(&stack)!=true)
//	{
//		Pop_elem(&stack, &j);
//		printf("%d", j);
//	}
//	return 0;
//}

typedef struct Node {
	int data;
	struct Node* prior;
	struct Node* next;

	
}Node, *linkstack;
typedef struct Headstack {
	int num;
	struct Node* top;
}Headstack,*Headlinkstack;
bool Init_stack(Headlinkstack p)
{
	if (p = NULL)
	{
		return false;
	}
	p->num = 0;
	p->top = NULL;
	return true;
}
bool Destory_stack(Headlinkstack *p)
{
	if (*p == NULL)
	{
		return false;

	}
	while((*p)->top)
	{
		(*p)->top = (*p)->top->next;
		free((*p)->top->prior);
		if ((*p)->top->next == NULL)
		{
			free((*p)->top);
		}
	}
	free((*p));
	*p = NULL;
}
bool Clean_stack(Headlinkstack p)
{
	if (p == NULL)
	{
		return false;

	}
	while (p->top)
	{
		p->top = p->top->next;
		free(p->top->prior);
		if (p->top->next == NULL)
		{
			free(p->top);
		}
	}
	p->num = 0;
	return true;
}
bool Is_empty(Headlinkstack p)
{
	if (p->num == 0 && p->top == NULL)
	{
		return false;
	}

}
bool GetTop(Headlinkstack p, int *e)
{
	if (p == NULL || Is_empty(p))
		return false;
	*e = p->top->data;
	return true;
}
bool Push_stack(Headlinkstack s, int e)
{
	if (s == NULL)
	{
		return false;
	}
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = s->top;
	p->prior = (linkstack)s;
	if (s->top != NULL)
	{
		p->next->prior = p;
	}
	s->top = p;
	s->num++;
	return true;
}
bool Pop_stack(Headlinkstack s, int* e)
{
	if (s == NULL || Is_empty(s))
	{
		return false;
	}
	linkstack p = s->top;
	if (s->top->next == NULL)
	{
		s->top = NULL;

	}
	s->top = p->next;
	p->next->prior = (linkstack)s;
}