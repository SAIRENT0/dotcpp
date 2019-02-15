/*
//C语言程序设计教程（第三版）课后习题8.6
//题目描述
写一函数，将两个字符串连接
//输入
两行字符串
//输出
链接后的字符串
//样例输入
123
abc
//样例输出
123abc
*/

#include<stdio.h>
#include<string.h>
#if 0
void splice(char *p1, char *p2, int len)
{
	strncat(p1, p2, len);
}
#else
void splice(char *p1, char *p2, int len)
{
	while(*p1 != '\0')
		p1++;

	while(len >= 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		len--;
	}

}
#endif
int main(void)
{
	char c1[20], c2[20];
	
	gets(c1);
	gets(c2);

	splice(c1, c2, strlen(c2));

	puts(c1);

	return 0;
}
