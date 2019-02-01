/*
//简单的a+b
//题目描述
输入两个整数a和b，计算a+b的和
注意此题是多组测试数据
//输入
输入两个整数A和B
范围不超过2^10
//输出
求A+B
//样例输入
1 1
10 20
//样例输出
2
30
*/

#include <stdio.h>

int main(void)
{
	int A, B;

	while(scanf("%d%d", &A, &B) == 2)
		printf("%d\n", A+B);

   return 0;
}
