/*************************************************************************
	> File Name: practise1.c
	> Author: AnSwEr
	> Created Time: 2015年03月15日 星期日 15时55分15秒
 ************************************************************************/
#include<stdio.h>
int btoi(const char * );
int main()
{
	char * pbin="01001001";
	printf("result:%s=%d\n",pbin, btoi(pbin));
	return 0;
}
int btoi(const char * pb)
{
	int number=0;
	while(*pb != '\0')
		number=(number<<1)+*pb++-'0';//利用ASCII码将字符转化成数字。
	return number;
}
