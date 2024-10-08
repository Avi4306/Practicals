//Program to read an array of 10 integer and print sum of numbers
#include<stdio.h>
int main()
{
    int num[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", num[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum += num[i];
    }
    printf("Sum of numbers: %d", sum);
}