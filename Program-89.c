/* Write a program to copy one array into another array. Order of elements of second array should be
opposite to first array*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter number of elements in array 1:\n");
    scanf("%d", &N);
    int arr1[N], arr2[N];
    printf("Enter elements of array\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int *ptr = arr1;
    for (int i = 0; i < N; i++)
    {
        arr2[N-i-1] = *(ptr + i);
    }
    printf("The elements in array 2:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr2[i]);
    }
}