/*
//计算素数和
//题目描述
输入两个正整数m和n(m<n)，求m到n之间(包括m和n)所有素数的和，要求定义并调用函数isprime(x)来判断x是否为素数(素数是除1以外只能被自身整除的自然数)。
//输入
m n
//输出
素数和
//样例输入
2 3
//样例输出
5 
//技巧：令x为大于等于1的自然数，其中，
  6x为6的倍数，非质数；
  6x+2为2的倍数，非质数；
  6x+3为3的倍数，非质数；
  6x+4为2的倍数，非质数；
  剩余的 6x+1 和 6x+5 (即6x±1)可能为质数，所以循环步长可设置为6，每次只需判断6x的两侧
  如此一来若面对大量数据时，能极大减少运算量
*/

#include <stdio.h>
#include <math.h>
int isprime(int x);
int main(int argc, char *argv[])
{
	int m, n, i, count = 0;
	scanf("%d%d", &m, &n);
	for(i = m; i <= n; i++)
		if(isprime(i))
			count += i;
	printf("%d\n", count);
	return 0;
}
int isprime(int x)
{
	int i;
	if(x <= 3)
		return x > 1;
	if(x%6 != 1 && x%6 != 5)
		return 0;
	for(i = 5; i <= sqrt(x); i+=6)  
		if(x%i == 0 || x%(i+2) == 0)
			return 0;
	return 1;
}
