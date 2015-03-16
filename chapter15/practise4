/*************************************************************************
  > File Name: practise4.c
  > Author: AnSwEr
  > Created Time: 2015年03月16日 星期一 15时20分06秒
 ************************************************************************/
#include<stdio.h>
int check(int num, int bit);
int main()
{
	int num, bit;
	printf("Please input the number and the bit you want to know(q to quit):");
	while(scanf("%d, %d", &num, &bit)==2)
	{
		printf("bit %d of %d is %d\n", bit, num, check(num, bit));
		printf("Please input the number and the bit you want to know(q to quit):");
	}
	printf("Bye!\n");
}

int check(int num, int bit)
{
	return (num>>bit)&1;//掩码
}
