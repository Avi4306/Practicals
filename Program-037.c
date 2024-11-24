//Program to print 2,4,6,8,10,12,...N
#include<stdio.h>
int main()
{
    int N, i;
    printf("Enter the number til you want the series: \n");
    scanf("%d", &N);

    if(N<2)
    {
        printf("Error entered number is not greater than 2");
        return 1;
    }
    for(i=2;i<=N;i+=2)
    {
        printf("%d,", i);
    }
    printf("...");
}
