/*************************************************************************
  > File Name: practise3.c
  > Author: AnSwEr
  > Created Time: 2015年03月16日 星期一 15时03分21秒
 ************************************************************************/
#include<stdio.h>
int count(int n);
int main()
{
	int n;
	printf("Please input a number(q to quit):");
	while(scanf("%d", &n)==1)
	{
		printf("The number of bits is %d\n", count(n));
		printf("Please input a number(q to quit):");
	}
	printf("Bye\n");
	return 0;
}

int count(int n)
{
	int number=0;
	while(n!=0)
	{
		n>>=1;
		number++;
	}
	return number;
}
