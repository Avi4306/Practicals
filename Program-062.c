//Program to Reverse an array
#include<stdio.h>
int main()
{
    int arr1[10], arr2[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Reverse of the given numbers:\n");
    for(int i=0;i<10;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<10;i++)
    {
        arr1[i]=arr2[9-i];
        printf("%d\n", arr1[i]);
    }
}
