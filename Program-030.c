//Program to print reverse of a given number
#include<stdio.h>
int main()
{
    int a, b, reverse, digit;

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
    printf("The Reverse of %d is %d", b, reverse);
}
