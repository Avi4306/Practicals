// Selection sort of an array
// Arranging numbers in increasing order
#include <stdio.h>
int main()
{
    int N;
    printf("Enter number of elements in array: \n");
    scanf("%d", &N);

    int arr[N];
    printf("Enter elements in the array\n");
    for (int x = 0; x < N; x++)
    {
        scanf("%d", &arr[x]);
    }

    int min, min_index;
    for (int j = 0; j < N; j++)
    {
        min = arr[j];
        min_index = j;
        for (int k = j + 1; k < N; k++)
        {
            if (arr[k] < min)
            {
                min = arr[k];
                min_index = k;
            }
        }
        arr[min_index] = arr[j];
        arr[j] = min;
    }
    printf("Sorted array in increasing order:\n");
    for (int l = 0; l < N; l++)
    {
        printf("%d ", arr[l]);
    }
}