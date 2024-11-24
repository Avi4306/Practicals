//Program to read a number N and print if N is prime or composite
#include<stdio.h>
int main()
{
    int a,i,b;

    printf("Enter a positive integer: ");
    scanf("%d", &a);
    b=1;
    if(a>1)
    {
        for(i=2;i<a;i++)
        {
            if(a%i == 0)
            {
                b=0;
                break;
            }
        }
        if(b==0)
        {
            printf("%d is a composite number", a);
        }
        else
        {
            printf("%d is a prime number", a);
        }

    }

    else if(a==1)
    {
        printf("%d is not a prime number nor a composite number", a);
    }

    else
    {
        printf("Error! Entered number is not a positive integer");
    }
}
