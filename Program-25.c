//Program to print table of any no. using for loop
#include<stdio.h>
int main()
{
    int a,b,i;

    printf("Enter a no.: ");
    scanf("%d", &a);

    for (i=1;i<=10;i++)
    {
        b=a*i;
        printf("%d * %d = %d\n", a, i, b);
    }
}