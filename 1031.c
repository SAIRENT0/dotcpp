/*
//C语言程序设计教程（第三版）课后习题8.5
//题目描述
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。
//输入
一行字符
//输出
逆序后的字符串
//样例输入
123456abcdef
//样例输出
fedcba654321
*/

#if 1
#include<stdio.h>
#include<string.h>

void inverse(char *p, int len)
{
	int i;
	char tmp;

	for(i = len-1; i > (len-1)/2; i--)
	{
		tmp        = p[i];
		p[i]       = p[len-1-i];
		p[len-1-i] = tmp;
	}
}

int main(void)
{
	char c[20];
	int len;

	memset(c, sizeof(c), sizeof(char));
	gets(c);

	len = strlen(c);
	inverse(c, len);

	puts(c);

	return 0;
}
//OJ判fgets()错误50%，而判gets()正确，我：？？？
#else
#include<stdio.h>
#include<string.h>

void inverse(char *p, int len)
{
	int i;
	char tmp;

	for(i = 0; i <= (len-1)/2; i++)
	{
		tmp        = p[i];
		p[i]       = p[len-1-i];
		p[len-1-i] = tmp;
	}

	p[len] = '\0';
}

int main(void)
{
	char c[20];
	int len;

	memset(c, sizeof(c), sizeof(char));
	fgets(c, sizeof(c), stdin);

	len = strlen(c)-1;
	inverse(c, len);

	puts(c);

	return 0;
}
#endif
