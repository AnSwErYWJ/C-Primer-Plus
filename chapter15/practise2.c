/*************************************************************************
  > File Name: practise2.c
  > Author: AnSwEr
  > Created Time: 2015年03月16日 星期一 14时45分15秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

#define M 8*sizeof(int) + 1

char* extend(char *source,  char *destination);
char* reverse(char *destination,  char *source);
char* and(char *destination,  char *source1,  char *source2);
char* or(char *destination,  char *source1,  char *source2);
char* exclusive_or(char *destination,  char *source1,  char *source2);

int main(int argc, char *argv[])
{
	char x[M], y[M], z[M];
	printf("x = %s\n",  extend(x,  argv[1]) );//拓展成M位宽
	printf("y = %s\n",  extend(y,  argv[2]) );
	printf("^x = %s\n",  reverse(z, x) );
	printf("^y = %s\n",  reverse(z, y) );
	printf("x & y = %s\n",  and(z, x, y) );
	printf("x | y = %s\n",  or(z, x, y) );
	printf("x ^ y = %s\n",  exclusive_or(z, x, y) );
	return 0;
}

char* extend(char *destination,  char *source)//将二进制字符串传给一个32位长的字符串
{
	unsigned int i;
	for(i=0; i < M-1-strlen(source); i++)
		destination[i] = '0' ;
	destination[i] = '\0' ;
	strcat(destination,  source);//连接
	return destination;
}

char* reverse(char *destination,  char *source)//将二进制字符串 “取反”
{
	char *save = destination;
	strcpy(destination,  source);//复制
	while( *destination != '\0' )
	{
		if( *destination == '0' ) 
			*destination = '1';
		else 
			*destination = '0';
		destination++;
	}
	return save;
}


char* and(char *destination,  char *source1,  char *source2)//将两个二进制字符串求与
{
	char *save = destination;
	while( *source1 != '\0' )
	{
		if( *source1 == '1' && *source2 == '1' ) 
			*destination = '1';
		else 
			*destination = '0';
		source1++;
		source2++;
		destination++;
	}
	return save;
}

char* or(char *destination,  char *source1,  char *source2)//将两个二进制字符串求或
{
	char *save = destination;
	while( *source1 != '\0' )
	{
		if( *source1 == '1' || *source2 == '1' ) 
			*destination = '1';
		else 
			*destination = '0';
		source1++;
		source2++;
		destination++;
	}
	return save;
}

char* exclusive_or(char *destination,  char *source1,  char *source2)//将两个二进制字符串求异或
{
	char *save = destination;
	while( *source1 != '\0' )
	{
		if( *source1 != *source2  ) 
			*destination = '1';
		else 
			*destination = '0';
		source1++;
		source2++;
		destination++;
	}
	return save;
}
