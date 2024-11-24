//Read numbers till a negative number is entered and calculate sum of list of numbers read
#include<stdio.h>
int main()
{
    float a,sum;
    printf("Enter the numbers (Enter a negative number to stop): \n");
    
    while(1)
    {
        scanf("%f", &a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("The sum of non-negative integers is %.2f", sum);
}
