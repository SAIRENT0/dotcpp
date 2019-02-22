/*
//C语言程序设计教程（第三版）课后习题10.1
//题目描述
输入三个整数，按由小到大的顺序输出。
//输入
三个整数
//输出
由小到大输出成一行，每个数字后面跟一个空格
//样例输入
2 3 1
样例输出
1 2 3 
*/

#if 1

#include<stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	printf("%d %d %d\n", a < b ? (a<c?a:     c     ) : (b<c?b:     c     ), 
								a < b ? (a>c?a:((c<b?c:b))) :	(b>c?b:((c<a?c:a))), 		
								a > b ? (a>c?a:     c     ) : (b>c?b:     c     ));

	return 0;
}

#else

#include<stdio.h>

int main(void)
{
	int n[3], i, j, tmp;

	scanf("%d%d%d", &n[0], &n[1], &n[2]);

	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 3; j++)
		{
			if(n[i] > n[j])
			{
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}	
		}
		printf("%d ", n[i]);
	}
	puts("");

	return 0;
}

#endif
