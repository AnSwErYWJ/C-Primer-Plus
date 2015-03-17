/*************************************************************************
  > File Name: practise5.c
  > Author: AnSwEr
  > Created Time: 2015年03月17日 星期二 20时08分21秒
 ************************************************************************/
#include<stdio.h>
int rotate_left(unsigned int,unsigned int);
int main()
{
	unsigned int number, n;
	printf("Please input the number and the bits rotated(q to quit):\n");
	while(scanf("%d %d", &number, &n)==2)
	{
		printf("The new number is %d!\n", rotate_left(number, n));
		printf("Please input the number and the bits rotated(q to quit):\n");
	}
	printf("Bye!\n");
	return 0;
}

int rotate_left(unsigned int number, unsigned int n)
{
	unsigned int i;
	unsigned int bits=8*sizeof(unsigned int);
	for(i=0;i<n;i++)
	{
		if(number&(1<<(bits-1)))//移位为1
			number=number<<1|1;
		else
			number<<=1;
	}
		return number;
}
