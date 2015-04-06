#include<stdio.h>
#define SIZE 10
int sump(int * start,int * end);
int main()
{
    int num[SIZE]= {20,10,5,39,4,16,19,26,31,20};
    int answer;
    answer=sump(num,num+SIZE);
    printf("The total number is %d.\n",answer);
    return 0;
}

int sump(int * start,int * end)
{
    int total=0;
    while(start<end)
        total+=*(start++);
    return total;
}
