/*
//C语言程序设计教程（第三版）课后习题10.3
//题目描述
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
//输入
10个整数
//输出
整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
//样例输入
2 1 3 4 5 6 7 8 10 9
样例输出
1 2 3 4 5 6 7 8 9 10 
*/

#include<stdio.h>

void input(int *p)
{
	int i;
	for(i = 0; i < 10; i++)
		scanf("%d", &p[i]);
}

void deal(int *p)
{
	int i, max = 0, min = 0, tmp;
	for(i = 0; i < 10; i++)
	{
		if(p[i] > p[max])
			max = i;
		if(p[i] < p[min])
			min = i;
	}
	tmp    = p[max];
	p[max] = p[9];
	p[9]   = tmp;
	tmp    = p[min];
	p[min] = p[0];
	p[0]   = tmp;
}

void output(int *p)
{
	int i;
	for(i = 0; i < 10; i++)
		printf("%d ", p[i]);
	puts("");
}

int main(void)
{
	int n[10];

	input(n);

	deal(n);

	output(n);

	return 0;
}
