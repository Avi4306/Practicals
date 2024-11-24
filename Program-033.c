//Program to find out max and min from N numbers
#include<stdio.h>
int main()
{
    int N,i, num, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if(N<2)
    {
        printf("At least two numbers are required to find the maximum and minimum");
        return 1;
    }
    printf("Enter %d numbers: \n", N);
    scanf("%d", &num);
    max=num;
    min=num;
    for(i=1;i<N;i++)
    {
        scanf("%d", &num);

        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    printf("The maximum number is %d and the minimum number is %d", max, min);
}
