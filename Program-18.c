//Program to read three nos. and print max using conditional(? :) operator
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter first no. : ");
    scanf("%d", &a);
    printf("Enter second no. : ");
    scanf("%d", &b);
    printf("Enter third no. : ");
    scanf("%d", &c);

    max = (a>b) ? ( (a>c) ? a : c) : ((b>c) ? b : c);

    printf("The maximum number is: %d", max);

}
