//Program to find the value of Y
#include<stdio.h>
int main()
{
    int n;
    float x, Y;

    printf("Y(x,n) = 1 + x where n=1\n");
    printf("Y(x,n) = (1 + x)/n where n=2\n");
    printf("Y(x,n) = 1 + x^n where n=3\n");
    printf("Y(x,n) = 1 + nx where n>3 or n<1\n");


    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%f", &x);

    if(n==1)
    {
        Y = 1 + x;
        printf("Y = %.2f", Y);
    }
    else if(n==2)
    {
        Y=1+(x/2);
        printf("Y = %.2f", Y);
    }
    else if(n==3)
    {
        Y=1+(x*x*x);
        printf("Y = %.2f", Y);
    }
    else
    {
        Y=1+(n*x);
        printf("Y = %.2f", Y);
    }
}
