/*Given are one dimensional arrays A and B which are sorted in ascending order. Write a program to merge them into a single sorted array
C that contains every item from array A and B, in ascending order*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number of elements in array A: \n");
    scanf("%d", &a);
    if (a <= 0)
    {
        printf("Error! Number of elements in an array cannot be negative or zero.\n");
        return 1;
    }

    int A[a];
    printf("Enter %d numbers: \n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }
    int b;
    printf("Enter number of elements in array B: \n");
    scanf("%d", &b);
    if (b <= 0)
    {
        printf("Error! Number of elements in an array cannot be negative or zero.\n");
        return 1;
    }

    int B[b];
    printf("Enter %d numbers: \n", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &B[i]);
    }

    int C[a+b];
    for (int i = 0; i < a; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < b; i++)
    {
        C[i+a] = B[i];
    }

    int min, min_index;
    for (int j = 0; j < a+b; j++)
    {
        min = C[j];
        min_index = j;
        for (int k = j + 1; k < a+b; k++)
        {
            if (C[k] < min)
            {
                min = C[k];
                min_index = k;
            }
        }
        C[min_index] = C[j];
        C[j] = min;
    }
    printf("Sorted array in increasing order:\n");
    for (int l = 0; l < a+b; l++)
    {
        printf("%d ", C[l]);
    }
    
    
}