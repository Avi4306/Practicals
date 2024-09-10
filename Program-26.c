//Program to print sum of all odd and even no between 1 to n
#include<stdio.h>
int main()
{
    int n,o,e,i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    o=0;
    e=0;
    if (n>0)
    {
    for(i=1;i<=n;i+=2)
    {
        o = o + i; 
    }
    for(i=0;i<=n;i+=2)
    {
        e = e + i;
    }
    printf("The sum of all odd numbers between 1 to %d is %d\n", n, o);
    printf("The sum of all even numbers between 1 to %d is %d\n", n, e);
    }
    else
    {
        printf("Error, given number is not a positive integer");
    }
}