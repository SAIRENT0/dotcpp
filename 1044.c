/*
//C语言程序设计教程（第三版）课后习题10.2
//题目描述
输入三个字符串，按由小到大的顺序输出
//输入
3行字符串
//输出
按照从小到大输出成3行
//样例输入
cde
afg
abc
//样例输出
abc
afg
cde
*/

#include<stdio.h>
#include<string.h>
//依次比较字符的大小
int main(void)
{
	char c[3][100], tmp[100];
	int i, j;

	for(i = 0; i < 3; i++)
		gets(c[i]);

	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 3; j++)
		{
			if(strcmp(c[i], c[j]) > 0) //strcmp()三种结果：正数、零、负数，不是单纯地与1、0、-1比较
			{
				strcpy(tmp,  c[i]);
				strcpy(c[i], c[j]);
				strcpy(c[j], tmp);
			}
		}
		puts(c[i]);
	}

	return 0;
}
