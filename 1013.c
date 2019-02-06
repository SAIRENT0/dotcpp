/*
//C语言程序设计教程（第三版）课后习题6.3
//题目描述
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。
//输入
n
//输出
Sn的值
//样例输入
5
//样例输出
24690
*/

#include <stdio.h>

int main(void)
{
	int n, a = 2, Sn = 0;
	
	scanf("%d", &n);

	for(; n >= 1; n--)
	{
		Sn += a * n;
		a *= 10;
	}

	printf("%d\n", Sn);

   return 0;
}
