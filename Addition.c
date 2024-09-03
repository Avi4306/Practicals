//Addition
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum1,sum2;
    a=15;
    b=10;
    c=20;
    sum1 = a + b + c;

    printf("%d\n",sum1);

    printf("Enter first no.\n");
    scanf("%d",&d);

    printf("Enter second no.\n");
    scanf("%d",&e);

    printf("Enter third no.\n");
    scanf("%d",&f);

    sum2=d+e+f;
    printf("The sum of %d, %d and %d is %d\n", d, e, f, sum2);
}