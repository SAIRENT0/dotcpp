/*
//C语言程序设计教程（第三版）课后习题6.6
//题目描述
打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。 
//输入
无
//输出
无
//样例输入
无
//样例输出
153
370
371
407
*/

#include <stdio.h>

int main(void)
{
	int n, ge, shi, bai;

	for(n = 100; n < 999; n++)
	{
		ge  = n % 10;
		shi = n / 10 % 10;
		bai = n / 100;

		if(ge*ge*ge + shi*shi*shi + bai*bai*bai == n)
			printf("%d\n", n);

	}

	return 0;
}
