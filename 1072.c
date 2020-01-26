/*
//汽水瓶
//题目描述
有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是5瓶，方法如下：
先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。
然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？
//输入
输入文件最多包含10组测试数据，每个数据占一行，仅包含一个正整数n（1<=n<=100），表示小张手上的空汽水瓶数。n=0表示输入结束，你的程序不应当处理这一行。
//输出
对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。
//样例输入
3
10
81
0
//样例输出
1
5
40
*/
//法1 公式
#include <stdio.h>
int main(int argc, char *argv[])
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
			break;
		else if(n%2==0)
			printf("%d\n", n/2);
		else
			printf("%d\n", (n-1)/2);
	}
	return 0;
}

//法2
#include <stdio.h>
#include <stdlib.h>
typedef struct numOfBottle
{
	int output;
	struct numOfBottle *next;
} bottle;
bottle *create(void);
void show(bottle *head);
void destroy(bottle *head);
int func(int input);
int main(int argc, char *argv[])
{
	bottle *head = create();
	show(head);
	destroy(head);
	return 0;
}
int func(int input)
{
	int ret = 0;
	while(input >= 2)
	{
		ret += input/3;
		input = input/3 + input%3;
		if(input == 2)
			input++;
	}
	return ret;
}
bottle *create(void)
{
	bottle *head = NULL, *pEnd = head, *p;
	int input;
	do
	{
		scanf("%d", &input);
		if(input != 0)
		{
			p = malloc(sizeof(bottle));
			p->output = func(input);
			p->next = NULL;
			if(head == NULL)
				head = p;
			else
				pEnd->next = p;
			pEnd = p;
		}
	}while(input != 0);
	return head;
}
void show(bottle *head)
{
	bottle *p = head;
	while(p != NULL)
	{
		printf("%d\n", p->output);
		p = p->next;
	}
}
void destroy(bottle *head)
{
	bottle *p;
	while(head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
