//Printing alphabets
#include<stdio.h>
int main()
{
    int i, j, rows;
    rows=5;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c", i+'A'-1);
        }
        printf("\n");
    }
    return 0;
}
