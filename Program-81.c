//Write a function that return 1 if its argument is prime number and return zero otherwise
#include<stdio.h>
int Prime_or_not(int a)
{
    int b;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("%d", Prime_or_not(N));
}