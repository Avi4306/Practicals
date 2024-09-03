//Program to check whether a no. is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if(a%2==0)
    printf("The given no. %d is Even", a);

    else
    printf("The given no. %d is Odd", a);
}