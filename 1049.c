/*
//结构体之时间设计
//题目描述
定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
//输入
年月日
//输出
当年第几天
//样例输入
2000 12 31
//样例输出
366
*/

#include <stdio.h>
typedef struct 
{
	unsigned int year;
	unsigned int month;
	unsigned int day;
} time;
int main(int argc, char *argv[])
{
	time t1;
	unsigned days = 0;
	scanf("%u%u%u", &t1.year, &t1.month, &t1.day);
	switch(t1.month)
	{
		case 12: days += 30;
		case 11: days += 31;
		case 10: days += 30;
		case  9: days += 31;
		case  8: days += 31;
		case  7: days += 30;
		case  6: days += 31;
		case  5: days += 30;
		case  4: days += 31;
		case  3: if((t1.year%100!=0 && t1.year%4==0) || t1.year%400==0)
						days += 29;
					else
						days += 28;
		case  2: days += 31;
		case  1: days += t1.day;
	}
	printf("%u\n", days);
	return 0;
}
