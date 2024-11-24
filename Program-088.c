// Write a program to copy element of one array to another array using pointers
#include <stdio.h>
int main()
{
    int N;
    printf("Enter number of elements in array 1:\n");
    scanf("%d", &N);
    int arr1[N];
    printf("Enter elements of array\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int *ptr = arr1;
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        arr2[i] = *(ptr + i);
    }
    printf("The elements in array 2:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr2[i]);
    }
}
