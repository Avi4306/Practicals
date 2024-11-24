/*Program to print:
       1
      121
     12321
    1234321
   123454321*/
#include<stdio.h>
int main()
{
    int i,j,k,l,rows;
    rows=5;

    for(i=1;i<=rows;i++)
    {
        for(k=rows;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(l=rows;l>=1;l--)
        {
            if(l>=i)
            {
                continue;
            }
            else
            {
            printf("%d", l);
            }
        }
        printf("\n");
    }
}
