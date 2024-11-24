//Program to print sum of individual digits of a N digit number
#include<stdio.h>
int main()
{
    int a, sum, b;

    printf("Enter a integer: ");
    scanf("%d", &a);
    sum = 0;
    b=a;

    if(a<0)
    {
        a = -a;
    }
    while(a>0)
    {
        sum = sum + (a % 10);
        a = a/10;
    }
    printf("The sum of individual digits %d is %d", b, sum);
}
