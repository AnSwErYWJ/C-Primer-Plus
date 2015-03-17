/*************************************************************************
  > File Name: practise6.c
  > Author: AnSwEr
  > Created Time: 2015年03月17日 星期二 20时32分11秒
 ************************************************************************/
#include<stdio.h>
struct{
	unsigned int id : 8;
	unsigned int size : 7;
	unsigned int alignment : 2;
	unsigned int bold : 1;
	unsigned int italic : 1;
	unsigned int underline : 1;
}font;
char *align[3]={"left", "center", "right"};
char *on_off[2]={"off", "on"};
int main()
{
	int n;
	char command;
		while(1)
	{
		printf("%4s %4s %4s %4s %4s %4s\n",  "ID",  "SIZE",  "ALIGNMENT",  "B",  "I",  "U");
		printf("%4d%4d %4s %4s %4s %4s\n",  font.id,  font.size,  align[font.alignment],  on_off[font.bold],  on_off[font.italic],  on_off[font.underline] );
		printf("f)change font    s)change size    a)change alignment\n");
		printf("b)toggle bold    i)toggle italic  u)toggle underline\n");
		printf("q)quit\n");
		scanf("%c", &command);
		getchar();//吃掉空格
		switch(command)
		{
			case 'f' : printf("Enter font ID (0-255): ");
					   scanf("%d", &n);
					   getchar();
					   font.id = n;
					   break;
			case 's' : printf("Enter font size (0-127): ");
					   scanf("%d", &n);
					   getchar();
					   font.size = n;
					   break;
			case 'a' : printf("Select alignment:\nl)left   c)center   r)right\n");
					   scanf("%c", &command);
					   getchar(); 
					   switch(command)
					   {
						   case 'l' : font.alignment = 0; break;
						   case 'c' : font.alignment = 1; break;
						   case 'r' : font.alignment = 2; break;
						   default  : puts("error!");  break;
					   }
					   break;
			case 'b': font.bold = !font.bold;
					  break;
			case 'i': font.italic = !font.italic;
					  break;
			case 'u': font.underline = !font.underline;
					  break;
			default : printf("Bye!\n");
					  return 0;
		}

	}
}

