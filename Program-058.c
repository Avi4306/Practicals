//Program to read two arrays of 10 integers and store addition of those arrays into third
#include<stdio.h>
int main()
{
    int num1[10], num2[10], sum[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &num1[i]);
    }
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &num2[i]);
        sum[i] = num1[i] + num2[i];
    }
    printf("Array storing sum of two arrays: \n");
    for(int i=0;i<10;i++)
    {
        printf("%d ", sum[i]);
    }
}
