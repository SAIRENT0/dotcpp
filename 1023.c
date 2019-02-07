/*
//C语言程序设计教程（第三版）课后习题7.2
//题目描述
用选择法对10个整数从小到大排序。
//输入
无
//输出
排序好的10个整数
//样例输入
4 85  3 234 45 345 345 122 30 12
//样例输出
3
4
12
30
45
85
122
234
345
345
*/

#include<stdio.h>

int main(void)
{
   int n[10], i, j, tmp;

	for(i = 0; i < 10; i++)
		scanf("%d", &n[i]);

	for(i = 0; i < 10; i++)
	{
		for(j = i+1; j < 10; j++)
		{
			if(n[i] > n[j])
			{
				tmp  = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
		printf("%d\n", n[i]);
	}

   return 0;
}
