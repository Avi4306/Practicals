//Printing 1 at i digit position where i is the number of row and 0 at other places
#include<stdio.h>
int main()
{
    int i,j,rows;
    rows=5;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==j)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}
