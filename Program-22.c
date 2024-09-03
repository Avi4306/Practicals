//Program to calculate factorial of a no.
#include<stdio.h>
int main()
{
    int a, f, i;
    printf("Enter a non negative integer: ");
    scanf("%d", &a);
    
    f = 1;
    if(a>=0)
    {
    for(i=1;i<=a;i++)
    f = f*i;
    printf("Factorial of %d is %d", a, f);
    }
    else
    {
    printf("Factorial of a negative number is not defined");
    }
}