//Program to find out max and second max from N numbers
#include<stdio.h>
int main()
{
    int N,i, num, max, second_max;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if(N<2)
    {
        printf("At least two numbers are required to find the maximum and second maximum");
        return 1;
    }
    printf("Enter %d numbers: \n", N);
    scanf("%d", &num);
    max=num;
    second_max=-2147483648;
    for(i=1;i<N;i++)
    {
        scanf("%d", &num);

        if(num>max)
        {
            second_max=max;
            max=num;
        }
        else if(num<max && num>second_max)
        {
            second_max=num;
        }
    }
    if(second_max==-2147483648)
        {
            printf("There is no second maximum number");
        }
    else
        {
            printf("The maximum number is %d and the second maximum number is %d", max, second_max);
        }
}