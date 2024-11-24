//Program to read two arrays of 10 integers and swap values of these arrays
#include<stdio.h>
int main()
{
    int num1[10], num2[10], num3[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &num1[i]);
    }
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &num2[i]);
    }
    printf("Integers in 1st array before swapping:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,", num1[i]);
    }
    printf("\n");
    printf("Integers in 2nd array before swapping:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,", num2[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        num3[i] = num1[i];
        num1[i] = num2[i];
        num2[i] = num3[i];
    }
    printf("Integers in 1st array after swapping:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,", num1[i]);
    }
    printf("\n");
    printf("Integers in 2nd array after swapping:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,", num2[i]);
    }
    printf("\n");

}
