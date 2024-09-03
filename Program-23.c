//Program to read two nos. and calculate power without using header file (math.h)
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter exponent: ");
    scanf("%d", &b);
    float c=1;

    if (b>0)
    {
        for(i=1;i<=b;++i)
        {
            c=c*a;
        }
    }
    else if(b==0)
    {
        c=1;
    }
    else
    {
        for(i=-1;i>=b;--i)
        {
            c=c/a;
        }
    }
    printf("%d to the power of %d = %.3f", a, b, c);
}