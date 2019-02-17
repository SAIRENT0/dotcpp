/*
//C语言程序设计教程（第三版）课后习题9.1
//题目描述
定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
//输入
两个数，空格隔开
//输出
交换后的两个数，空格隔开
//样例输入
1 2
//样例输出
2 1
*/

#include<stdio.h>

#define REVERSION(a, b) a = a + b; 	\
								        b = a - b; 	\
								        a = a - b; 	\

int main(void)
{
	int a, b;
	
	scanf("%d%d", &a, &b);

	REVERSION(a, b);
	
	printf("%d %d\n", a, b);

	return 0;
}
