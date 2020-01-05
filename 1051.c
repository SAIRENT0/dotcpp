/*
//结构体之成绩统计2
//题目描述
有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课成绩）
//输入
学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
//输出
各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）
//样例输入
2
1 blue 90 80 70
b clan 80 70 60
//样例输出
85 75 65
1 blue 90 80 70
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	char num[10];
	char name[20];
	unsigned score[3];
	struct student *next;
} info;
info *head, *pEnd, *present;
void create(unsigned n);
void averageScore(unsigned n);
void maxAverage(void);
unsigned countAverage(info *p);
void destroy(void);
int main(int argc, char *argv[])
{
	unsigned n;
	scanf("%u", &n);
	if(n > 0)
	{
		create(n);
		averageScore(n);
		maxAverage();
		destroy();
	}
	return 0;
}
void create(unsigned n)
{
	present = head = malloc(sizeof(info));
	scanf("%s%s%u%u%u", present->num, present->name, &present->score[0], &present->score[1], &present->score[2]);
	while(n-- > 1)
	{
		present->next = malloc(sizeof(info));
		present = present->next;
		scanf("%s%s%u%u%u", present->num, present->name, &present->score[0], &present->score[1], &present->score[2]);		
	}
	present->next = NULL;
	pEnd = present;
	present = head;
}
void averageScore(unsigned n)
{
	unsigned ave[3] = {0};
	int i;
	present = head;
	while(present)
	{
		for(i = 0; i < 3; i++)
			ave[i] += present->score[i];
		present = present->next;
	}
	for(i = 0; i < 3; i++)
		printf("%u ", ave[i]/n); //在计算整型数据的平均值时，应该先求和再算平均，若先平均再求和，会由于精度问题损失余数，最终造成数据不准确
	puts("");
}
void maxAverage(void)
{
	info *max = present = head;
	while(present->next)
	{
		if(countAverage(max) < countAverage(present->next))
			max = present->next;
		present = present->next;
	}
	printf("%s %s %u %u %u\n", max->num, max->name, max->score[0], max->score[1], max->score[2]);
}
unsigned countAverage(info *p)
{
	return (p->score[0]+p->score[1]+p->score[2])/3;
}
void destroy(void)
{
	while(head)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
