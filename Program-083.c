//Write a function to read an array and find out maximum
#include<stdio.h>
int max(int arr[], int N)
{
    if (N==1)
    {
        printf("There is only one element in array so no maximum exists");
        return 1;
    }
    int max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum: %d", max);
    
}

int main()
{
    int N;
    printf("Enter number of elements in array: \n");
    scanf("%d", &N);
    if (N<1)
    {
        printf("Error! number of elements should be greater than 1");
        return 1;
    }
    

    int arr[N];
    printf("Enter elements in the array\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    max(arr, N);
}
