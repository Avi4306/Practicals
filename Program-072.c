// Program to rotate an array by N positions
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

    int arr[N], temp[N];
    printf("Enter %d numbers: \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        temp[i] = arr[i];
    }
    printf("Array before rotating\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    char c;
    printf("Enter R for right rotation and L for left rotation\n");
    scanf(" %c", &c);
    
    int r;
    switch (c)
    {
    case 'R':
        printf("Enter number of positions to rotate\n");
        scanf("%d", &r);
        for (int i = 0; i < N - r; i++)
        {
            arr[i + r] = temp[i];
        }
        for (int i = 0; i < r; i++)
        {
            arr[i] = temp[N+i-r];
        }
        break;

    case 'L':
        printf("Enter number of positions to rotate\n");
        scanf("%d", &r);
        for (int i = 0; i < N - r; i++)
        {
            arr[i] = temp[i + r];
        }
        for (int i = 0; i < r; i++)
        {
            arr[N+i-r] = temp[i];
        }
        break;
    default:
        printf("Error! Entered character is not R or L\n");
        return 1;
    }
    printf("Array after rotating\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
