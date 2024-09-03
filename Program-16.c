//Program to read three nos. and print max
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

    max = a;
    if(b>max)
    max = b;
    if(c>max)
    max = c;
    printf("The maximum no. is %d", max);

}