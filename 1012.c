/*
//C语言程序设计教程（第三版）课后习题6.2
//题目描述
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
//输入
一行字符
//输出
统计值
//样例输入
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
//样例输出
23 16 2 4
*/

#include <stdio.h>

int main(void)
{
	int letters = 0, numbers = 0, spaces = 0, other = 0, ret;

	while((ret = getchar()) != '\n')
	{
		if((ret >= 'A' && ret <= 'Z') || (ret >= 'a' && ret <= 'z'))
			letters++;

		else if(ret >= '0' && ret <= '9')
			numbers++;

		else if(ret == ' ')
			spaces++;

		else
			other++;

	}

	printf("%d %d %d %d\n", letters, numbers, spaces, other);

   return 0;
}
