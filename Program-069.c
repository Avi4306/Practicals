// Program to perform linear search on an array
#include <stdio.h>
int main()
{
    int N;
    printf("Enter number of elements in array: \n");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("Error! Number of elements in an array cannot be negative or zero.\n");
        return 1;
    }

    int arr[N];
    printf("Enter %d numbers: \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a, index = -1;
    printf("Search a number: \n");
    scanf("%d", &a);
    for (int i = 0; i < N; i++)
    {
        if (a == arr[i])
        {
            index = i;
            printf("Number found at index: %d\n", i);
        }
    }
    if (index == -1)
    {
        printf("Number not found in the array");
    }
}
