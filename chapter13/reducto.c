/*************************************************************************
	> File Name: reducto.c
	> Author:AnSwEr 
	> Mail:yuanweijie1993@gmail.com 
	> Created Time: 2015年04月25日 星期六 17时50分24秒
 ************************************************************************/
/*把文件压缩为原来的三分之一*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 20
int main(int argc,char * argv[])
{
    FILE *in,*out;
    char name[20];
    char *extension = ".red";
    char ch;
    int count=1;
    time_t t;
    /*检查命令行参数*/
    if(argc!=2)
    {
        fprintf(stderr,"Usage:%s filename\n",argv[0]);
        exit(1);
    }
    /*检查打开文件*/
    if((in = fopen(argv[1],"r")) == NULL)
    {
        fprintf(stderr,"Could not open %s\n",argv[1]);
        exit(2);
    }

    /*给文件名加后缀*/ 
    strcpy(name,argv[1]);
    strcat(name,extension);
    
    if((out = fopen(name,"a+")) == NULL)
    {
        fprintf(stderr,"Could not open %s\n",argv[2]);
        exit(3);
    }
   
    /*给输出时间*/
    t=time(&t);
    fputs(ctime(&t),out);

    /*复制数据*/
    while((ch = getc(in)) != EOF)
    {
        if(count++ % 3 == 0)
            putc(ch,out);
    }

    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"Could not close files\n");
    return 0;
}
