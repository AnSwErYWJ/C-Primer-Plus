#include<stdio.h>
int main()
{
    char ch,c='A';
    int i=0,k,j=0;
    printf("Please enter the character:");
    scanf("%c",&ch);
    k=ch-'A'+1;
    for(i=0; i<k; i++)
    {
        for(j=0; j<k-1-i; j++)
            printf(" ");
        for(j=0; j<i+1; j++)
            printf("%c",'A'+j);
        for(j=i; j>=0; j--)
            printf("%c",'A'+j);
        printf("\n");
    }
    return 0;
}
