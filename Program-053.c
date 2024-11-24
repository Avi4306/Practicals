//Printing stars in diamond shape
#include<stdio.h>
int main()
{
    int i,j,k,rows;
    rows=7;

    for(i=1;i<=rows;i+=2)
    {
        for(j=rows;j>i;j-=2)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=rows-2;i>=1;i-=2)
    {
        for(j=rows;j>i;j-=2)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
