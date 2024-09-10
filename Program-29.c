//Program to check whether a number is Palindrome number or not
#include<stdio.h>
int main()
{
    int a, b, reverse, digit, remainder;

    printf("Enter a integer: ");
    scanf("%d", &a);
    b=a;
    digit=0;
    reverse=0;

    while(a!=0)
    {
        digit = a%10;
        reverse = reverse*10 + digit;
        a = a/10;
    }
    if(b==reverse)
    {
        printf("%d is a Palindrome number", b);
    }
    else
    {
        printf("%d is not a Palindrome number", b);
    }
}