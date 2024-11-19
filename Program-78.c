// Write a function to check whether a number is armstrong or not
#include<stdio.h>
int armstrong_or_not(int a)
{
    int b, count, sum, digit, product;
    b=a;
    count = 0;
    while (b != 0)
    {
        b = b/10;
        count++;
    }
    b=a;
    sum = 0;
    while (b != 0)
    {
        digit = b%10;
        product = 1;
        for (int i = 0; i < count; i++)
        {
            product *= digit;
        }
        sum = sum + product;
        b=b/10;
    }
    if (sum == a)
    {
        printf("%d is an armstrong number", a);
    }
    else
    {
        printf("%d is not an armstrong number", a);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    armstrong_or_not(N);
}