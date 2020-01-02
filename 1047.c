/*
//报数问题
//题目描述
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
//输入
初始人数n
//输出
最后一人的初始编号
//样例输入
3
//样例输出
2
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct hito
{
	int num;
	struct hito *next;
} game;
game *head, *pEnd, *present;
int josephCircle(int input);
void init(int input);
int main(int argc, char *argv[])
{
	int input, result = 0;
	scanf("%d", &input);
	result = josephCircle(input);
	printf("%d\n", result);
	return 0;
}
int josephCircle(int input)
{
	int i;
	game *pGuard;
	init(input);
	while(input > 1)
	{
		for(i = 1; i < 3; i++)
		{
			pGuard = present;
			present = present->next;
		}
		pGuard->next = present->next;
		free(present);
		present = pGuard->next;
		input--;
	}
	i = present->num;
	free(present);
	return i;
}
void init(int input)
{
	int i;
	head = malloc(sizeof(game));
	head->num = 1;
	present = head;
	for(i = 1; i < input; i++)
	{
		present->next = malloc(sizeof(game));
		present->next->num = i+1;
		present = present->next;
	}
	present->next = head;
	pEnd = present;
	present = head;
}
