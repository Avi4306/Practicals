//Printing stars
#include<stdio.h>
int main()
{
    int i,j,k,rows;
    rows=5;

    for(i=1;i<=rows;i++)
    {
        for(k=rows;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}