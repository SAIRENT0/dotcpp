/*
//C语言程序设计教程（第三版）课后习题7.1
//题目描述
用简单素数筛选法求N以内的素数。
//输入
N
//输出
2～N的素数
//样例输入
100
//样例输出
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/

#include <stdio.h>

int main(void)
{
	int N, i, j;

	scanf("%d", &N);

	for(i = 2; i <= N; i++)
	{
		for(j = 2; j <= i; j++)		
			if(i%j == 0)
				break;
		
		if(i == j)
			printf("%d\n", i);

	}

	return 0;
}
