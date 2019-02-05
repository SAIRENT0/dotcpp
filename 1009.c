/*
//C语言程序设计教程（第三版）课后习题5.7
//题目描述
给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
//输入
一个不大于5位的数字
//输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
//样例输入
12345
//样例输出
5
1 2 3 4 5
54321
*/
#include <stdio.h>

int main(void)
{
	int x, y[5], count = 0, i;

	scanf("%d", &x);

	while(x > 0)
	{
		y[count] = x % 10;
		count++;
		x /= 10;
	}
	printf("%d\n", count);
	
	for(i = count-1; i >= 0; i--)
		printf("%d ", y[i]);
	puts("");

	for(i = 0; i < count; i++)
		printf("%d", y[i]);
	puts("");

   return 0;
}
