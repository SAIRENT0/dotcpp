/*
//C语言程序设计教程（第三版）课后习题6.4
//题目描述
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
//输入
n
//输出
Sn的值
//样例输入
5
//样例输出
153
*/

#include<stdio.h>

int main(void)
{
	long double Sn = 0, tmp = 1; //使用double会报错，原因很迷
	int n, i;
  
	scanf("%d", &n);
  
	if(n <= 20)
	{
		for(i = 1; i <= n; i++)
		{
			tmp *= i; 
			Sn += tmp;
		}
		printf("%.0Lf\n", Sn);
	}
  
  return 0;
}
