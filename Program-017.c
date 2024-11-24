//Program to read three nos. and print max using conditional operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no. : ");
    scanf("%d", &a);
    printf("Enter second no. : ");
    scanf("%d", &b);
    printf("Enter third no. : ");
    scanf("%d", &c);

    if(a>=b && a>=c)
    {
        printf("The maximum no. is %d", a);
    }
    else if(b>=a && b>=c)
    {
        printf("The maximum no. is %d", b);
    }
    else if(c>=a && c>=b)
    {
        printf("The maximum no. is %d", c);
    }
}
