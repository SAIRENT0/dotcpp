/*
//链表合并
//题目描述
已有a、b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。
//输入
第一行，a、b两个链表元素的数量N、M,用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成
//输出
按照学号升序排列的数据
//样例输入
2 3
5 100
6 89
3 82
4 95
2 10
//样例输出
2 10
3 82
4 95
5 100
6 89
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	int num;
	int score;
	struct student *next;
} info;
info *create(int n);
void show(info *head);
void destroy(info *head);
void mergeAscendSort(info *head1, info *head2);
int main(int argc, char *argv[])
{
	int N, M;
	info *head1, *head2;
	scanf("%d%d", &N, &M);
	head1 = create(N);
	head2 = create(M);
	mergeAscendSort(head1, head2);
	show(head1);
	destroy(head1);
	return 0;
}
info *create(int n)
{
	info *head = NULL, *pEnd = head, *p;
	while(n-- > 0)
	{
		p = malloc(sizeof(info));
		scanf("%d%d", &p->num, &p->score);
		p->next = NULL;
		if(head == NULL)
			head = p;
		else
			pEnd->next = p;
		pEnd = p;
	}
	return head;
}
void show(info *head)
{
	info *p = head;
	while(p != NULL)
	{
		printf("%d %d\n", p->num, p->score);
		p = p->next;
	}
}
void destroy(info *head)
{
	info *p;
	while(head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
void mergeAscendSort(info *head1, info *head2)
{
	info *p1 = head1, *p2 = head2, temp;
	while(p1->next != NULL)
		p1 = p1->next;
	p1->next = p2;
	for(p1 = head1; p1 != NULL; p1 = p1->next)
	{
		for(p2 = p1->next; p2 != NULL; p2 = p2->next)
		{
			if(p1->num > p2->num)
			{
				temp.num = p1->num;
				p1->num =  p2->num;
				p2->num = temp.num;
				temp.score = p1->score;
				p1->score =  p2->score;
				p2->score = temp.score;
			}
		}
	}
}
