// Bubble sort of an array
// Arranging numbers in increasing order
#include<stdio.h>
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

    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }       
        }
        
    }
    printf("Sorted array in increasing order:\n");
    for (int k = 0; k < N; k++)
    {
        printf("%d ", arr[k]);
    }
}
