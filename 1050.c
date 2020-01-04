/*
//结构体之成绩记录
//题目描述
现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 编写一个函数input,用来输入一个学生的数据记录。 编写一个函数print,打印一个学生的数据记录。 在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100
//输入
学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
//输出
每个学生的学号、姓名、三科成绩占一行，逗号分开。
//样例输入
2
a100 clang 70 80 90
b200 dotcpp 90 85 75
//样例输出
a100,clang,70,80,90
b200,dotcpp,90,85,75
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	char num[10];
	char name[10];
	unsigned score[3];
	struct student* next;
} info;
info *head, *present, *pEnd;
void input(void);
void print(void);
void destroy(void);
int main(int argc, char *argv[])
{
	input();
	print();
	destroy();
	return 0;
}
void input(void)
{
	unsigned n;
	scanf("%u", &n);
	present = head = malloc(sizeof(info));
	scanf("%s%s%u%u%u", present->num, present->name, &present->score[0], &present->score[1], &present->score[2]);
	while(n-- > 1)
	{
		present->next = malloc(sizeof(info));
		present = present->next;
		scanf("%s%s%u%u%u", present->num, present->name, &present->score[0], &present->score[1], &present->score[2]);	
	}
	pEnd = present;
	pEnd->next = NULL;
	present = head;
}
void print(void)
{
	while(present)
	{
		printf("%s,%s,%u,%u,%u\n", present->num, present->name, present->score[0], present->score[1], present->score[2]);
		present = present->next;
	}
	present = head;
}
void destroy(void)
{
	while(head)
	{
		head = present->next;
		free(present);
		present = head;
	}
}
