//Read a number N and print factors of N
#include<stdio.h>
int main()
{
    int N,i;

    printf("Enter a postive number: \n");
    scanf("%d", &N);
    
    if(N<1)
    {
        printf("Error! Number entered is not positive");
        return 1;
    }
    printf("The Factors of %d are ", N);
    for(i=1;i<N;i++)
    {
    if (N%i==0)
    {
        printf("%d, ", i);
    }
    }
    printf("%d.", N);
}