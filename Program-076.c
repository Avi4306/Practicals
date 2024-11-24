//Write a function to check whether a number is even or odd
#include<stdio.h>
int even_or_odd(int a)
{
    if(a%2 == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    even_or_odd(N);
}
