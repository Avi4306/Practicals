//Program to check whether a number is armstrong number or not
#include<stdio.h>
int main()
{
    int a, b, n, digit, multi, temp, count, i;
    printf("Enter a non-negative integer: \n");
    scanf("%d", &a);
    n=0;
    b=a;
    digit=0;
    temp=a;
    count=0;

    if(a<0)
    {
        printf("Error! Armstrong numbers include only non-negative integers\n");
        return 0;
    }
    else if(a==0)
    {
        printf("%d is a Armstrong number", a);
    }
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    temp=a;
    while(temp!=0)
    {
        digit=temp%10;
        multi = 1;
        for(i=1;i<=count;i++)
        {
            multi=multi*digit;
        }
        n = n + multi;
        temp = temp/10;
    }
    if(n==a)
    {
        printf("%d is a Armstrong number", a);
    }
    else
    {
        printf("%d is not a Armstrong number", a);
    }
}
