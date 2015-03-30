#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    while((ch=getchar())!='\n')//当一行未结束
    {
        if(isalpha(ch))//是一个字母的话返回非零值
            putchar(ch+1);
        else
            putchar(ch);
    }
    putchar(ch);//打印换行符
    return 0;
}
