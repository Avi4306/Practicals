//Program to print 1/1! + 2/2! + 3/3! + 4/4! +...+N
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the number til you want the series: \n");
    scanf("%d", &N);

    if(N<1)
    {
        printf("Error entered number is not greater than 1");
        return 1;
    }
    for(i=1;i<=N;i++)
    {
        printf("%d/%d! + ", i, i);
    }
    printf("...");
}
