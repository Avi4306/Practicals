//Program to print 1,4,9,16,25,...N
#include<stdio.h>
int main()
{
    int N, i, product;
    printf("Enter the number of elements in series: \n");
    scanf("%d", &N);

    if(N<1)
    {
        printf("Error entered number is not greater than 1");
        return 1;
    }
    for(i=1;i<=N;i++)
    {
        product=i*i;
        printf("%d,", product);
    }
    printf("...");
}