/*
//C语言程序设计教程（第三版）课后习题5.7
//题目描述
输入两个正整数m和n，求其最大公约数和最小公倍数。
//输入
两个整数
//输出
最大公约数，最小公倍数
//样例输入
5 7
//样例输出
1 35
*/

#include <stdio.h>

int main(void)
{
	int m, n, i, j;
	//i -> 最大公约数
	//j -> 最小公倍数
	scanf("%d%d", &m, &n);

	for(i = m < n ? m : n; i > 0; i--)
	{
		if(m%i == 0 && n%i == 0)
		{
			j = m*n / i;
			printf("%d %d\n", i, j);
			break;
		}
	}

   return 0;
}

////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void)
{
	int m, n, i, j, max, min, tmp1 = 1, tmp2;

	scanf("%d%d", &m, &n);
	if(m == n)
	{
		printf("%d %d\n", m, m);
		return 0;
	}

	max = m > n ? m : n;
	min = m < n ? m : n;

	for(i = 2; i <= min; i++)
	{
			if(min%i == 0 && max%i == 0)
				tmp1 = i;
	}
	printf("%d ", tmp1 > 1 ? tmp1 : 1);

	tmp1 = max;
	tmp2 = min;
	for(i = 1, j = 2; tmp1 != tmp2; i++)
	{
		tmp1 = max * i;
		for(; tmp2 < tmp1; j++)
			tmp2 = min * j;

	}
	printf("%d\n", tmp1);

   return 0;
}
