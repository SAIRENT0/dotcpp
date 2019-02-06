/*
//C语言程序设计教程（第三版）课后习题6.5
//题目描述
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
//输入
a b c
//输出
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
//样例输入
100 50 10
//样例输出
47977.93
*/

#include <stdio.h>

float func(int a, int b, int c)
{
	float i, ret = 0; 
	for(i = 1; i <= c; i++)
		ret += 1/i;
	
	for(i = 1; i <= b; i++)
		ret += i*i;

	return ret + (1+a)*a/2;
}

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	printf("%.2f\n", func(a, b, c));

	return 0;
}
