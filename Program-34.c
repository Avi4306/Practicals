//Program to print Fibonacci Series
#include<stdio.h>
int main()
{
    int n,i, j;

    printf("Enter the number till you want Fibonacci series: \n");
    scanf("%d", &n);

    if(n<1)
    {
        printf("Error! Number entered is less than 1");
        return 1;
    }

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%d,", i);
        }
        printf("%d,", i);

    }
    printf("...");
}